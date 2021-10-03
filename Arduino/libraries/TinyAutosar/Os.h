#ifndef AUTOSAR_OS_UNO_OS_H_
#define AUTOSAR_OS_UNO_OS_H_

enum class Status { OK, NOT_OK };
enum class TaskEvent { EventA, EventB };

void StartOS();
Status SetupTask(void (*task)(void));
void WaitEvent(TaskEvent event);

#endif /* AUTOSAR_OS_UNO_OS_H_ */
