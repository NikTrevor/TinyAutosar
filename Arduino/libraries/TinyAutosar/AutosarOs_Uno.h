#ifndef AUTOSAR_OS_UNO_H_
#define AUTOSAR_OS_UNO_H_

#include "Dio.h"

enum class TaskEvent { EventA, EventB };

#define Task_Event_A TaskEvent::EventA
#define Task_Event_B TaskEvent::EventB

void EcuM_Init();
void Port_Init(void*);
void SetupTask(void (*task)(void));
void WaitEvent(TaskEvent event);

#endif /* AUTOSAR_OS_UNO_H_ */
