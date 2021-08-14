#include <avr/interrupt.h>

#include "Os.h"


#define RESTORE_CONTEXT()		                                                        \
		asm volatile (		"lds    r26, current_tcb                        \n\t"   \
					"lds    r27, current_tcb + 1                    \n\t"   \
					"ld     r28, x+                                 \n\t"   \
					"out    __SP_L__, r28                           \n\t"   \
					"ld     r29, x+                                 \n\t"   \
					"out    __SP_H__, r29                           \n\t"   \
					"pop    r31                                     \n\t"   \
					"pop    r30                                     \n\t"   \
					"pop    r29                                     \n\t"   \
					"pop    r28                                     \n\t"   \
					"pop    r27                                     \n\t"   \
					"pop    r26                                     \n\t"   \
					"pop    r25                                     \n\t"   \
					"pop    r24                                     \n\t"   \
					"pop    r23                                     \n\t"   \
					"pop    r22                                     \n\t"   \
					"pop    r21                                     \n\t"   \
					"pop    r20                                     \n\t"   \
					"pop    r19                                     \n\t"   \
					"pop    r18                                     \n\t"   \
					"pop    r17                                     \n\t"   \
					"pop    r16                                     \n\t"   \
					"pop    r15                                     \n\t"   \
					"pop    r14                                     \n\t"   \
					"pop    r13                                     \n\t"   \
					"pop    r12                                     \n\t"   \
					"pop    r11                                     \n\t"   \
					"pop    r10                                     \n\t"   \
					"pop    r9                                      \n\t"   \
					"pop    r8                                      \n\t"   \
					"pop    r7                                      \n\t"   \
					"pop    r6                                      \n\t"   \
					"pop    r5                                      \n\t"   \
					"pop    r4                                      \n\t"   \
					"pop    r3                                      \n\t"   \
					"pop    r2                                      \n\t"   \
					"pop    __zero_reg__                            \n\t"   \
					"pop    __tmp_reg__                             \n\t"   \
					"out    __SREG__, __tmp_reg__                   \n\t"   \
					"pop    __tmp_reg__                             \n\t"   \
				);

#define SAVE_CONTEXT()			                                                        \
		asm volatile (		"push   __tmp_reg__                             \n\t"   \
					"in     __tmp_reg__, __SREG__                   \n\t"   \
					"cli                                            \n\t"   \
					"push   __tmp_reg__                             \n\t"   \
					"push   __zero_reg__                            \n\t"   \
					"clr    __zero_reg__                            \n\t"   \
					"push   r2                                      \n\t"   \
					"push   r3                                      \n\t"   \
					"push   r4                                      \n\t"   \
					"push   r5                                      \n\t"   \
					"push   r6                                      \n\t"   \
					"push   r7                                      \n\t"   \
					"push   r8                                      \n\t"   \
					"push   r9                                      \n\t"   \
					"push   r10                                     \n\t"   \
					"push   r11                                     \n\t"   \
					"push   r12                                     \n\t"   \
					"push   r13                                     \n\t"   \
					"push   r14                                     \n\t"   \
					"push   r15                                     \n\t"   \
					"push   r16                                     \n\t"   \
					"push   r17                                     \n\t"   \
					"push   r18                                     \n\t"   \
					"push   r19                                     \n\t"   \
					"push   r20                                     \n\t"   \
					"push   r21                                     \n\t"   \
					"push   r22                                     \n\t"   \
					"push   r23                                     \n\t"   \
					"push   r24                                     \n\t"   \
					"push   r25                                     \n\t"   \
					"push   r26                                     \n\t"   \
					"push   r27                                     \n\t"   \
					"push   r28                                     \n\t"   \
					"push   r29                                     \n\t"   \
					"push   r30                                     \n\t"   \
					"push   r31                                     \n\t"   \
					"lds    r26, current_tcb                        \n\t"   \
					"lds    r27, current_tcb + 1                    \n\t"   \
					"in     __tmp_reg__, __SP_L__                   \n\t"   \
					"st     x+, __tmp_reg__                         \n\t"   \
					"in     __tmp_reg__, __SP_H__                   \n\t"   \
					"st     x+, __tmp_reg__                         \n\t"   \
				);

class scope_lock {
	scope_lock(const scope_lock&)			= delete;
	scope_lock(scope_lock&&)			= delete;
	scope_lock& operator=(const scope_lock&)	= delete;
	scope_lock& operator=(scope_lock&&)		= delete;
	uint8_t enabled_interrupts_{};
public:
	scope_lock() {
		enabled_interrupts_ = SREG;
		cli();
	}
	~scope_lock() {
		SREG = enabled_interrupts_;
		asm volatile( "" ::: "memory" );
	}
};

struct thread_control_block {
	uint8_t* top_of_stack;					/* This must be the first member */
	uint8_t* stack_pointer = *(&stack_allocation + 1) - 1;	/* This must be the second member */
private:
	uint8_t stack_allocation[192] = { 0, };
};

constexpr uint8_t TASKS_MAX{5};
static thread_control_block all_tcbs[TASKS_MAX] = { thread_control_block{}, };
static uint16_t tasks_current{0};
static uint16_t tasks_total{0};

thread_control_block *volatile current_tcb{nullptr};

static uint8_t* init_task_stack(uint8_t* top_of_stack, void(*task)(void), void *const params)
{
	uint16_t address;

	/* The start of the task code will be popped off the stack last, so place
	 * it on first. */
	address = (uint16_t)task;
	*top_of_stack = (uint8_t)(address & (uint16_t)0x00ff);
	top_of_stack--;

	address >>= 8;
	*top_of_stack = (uint8_t)(address & (uint16_t)0x00ff);
	top_of_stack--;

	/* Next simulate the stack as if after a call to SAVE_CONTEXT().
	 * SAVE_CONTEXT() places the flags on the stack immediately after r0
	 * to ensure the interrupts get disabled as soon as possible, and so ensuring
	 * the stack use is minimal should a context switch interrupt occur. */
	*top_of_stack = (uint8_t)0x00;    /* R0 */
	top_of_stack--;
	*top_of_stack = 0x80; /* Interrutps enabled */
	top_of_stack--;

	/* Now the remaining registers. The compiler expects R1 to be 0. */
	*top_of_stack = (uint8_t)0x00;    /* R1 */

	/* Leave R2 - R23 untouched */
	top_of_stack -= 23;

	/* Place the parameter on the stack in the expected location */
	address = (uint16_t)params;
	*top_of_stack = (uint8_t)(address & (uint16_t)0x00ff);
	top_of_stack--;

	address >>= 8;
	*top_of_stack = (uint8_t)(address & (uint16_t)0x00ff);

	/* Leave register R26 - R31 untouched */
	top_of_stack -= 7;

	return top_of_stack;
}

static void select_task(uint8_t task_number)
{
	current_tcb = &all_tcbs[task_number];
	asm volatile( "" ::: "memory" );
	tasks_current = task_number;
	asm volatile( "" ::: "memory" );
}

void StartOS()
{
	select_task(0);

	/* Restore the context of the first task that is going to run */
	RESTORE_CONTEXT();

	/* Simulate a function call end as generated by the compiler. We will now
	 * jump to the start of the task the context of which we have just restored. */
	asm volatile ( "ret" );
}

Status SetupTask(void (*task)(void))
{
	scope_lock sl{};
	if (tasks_total >= TASKS_MAX) {
		return Status::NOT_OK;
	}

	thread_control_block* newTCB = &all_tcbs[tasks_total];
	newTCB->top_of_stack = init_task_stack(newTCB->stack_pointer, task, nullptr);
	asm volatile( "" ::: "memory" );
	tasks_total++;
	asm volatile( "" ::: "memory" );
	return Status::OK;
}

void WaitEvent(TaskEvent event)
{
	static_cast<void>(event);
	SAVE_CONTEXT();
	tasks_current++;
	if (tasks_current >= tasks_total) {
		tasks_current = 0;
	}
	select_task(tasks_current);
	RESTORE_CONTEXT();
	asm volatile ( "ret" );
}
