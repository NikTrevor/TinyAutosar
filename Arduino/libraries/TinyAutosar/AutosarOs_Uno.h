#ifndef AUTOSAR_OS_UNO_H_
#define AUTOSAR_OS_UNO_H_

#include "Dio.h"

enum class Status { OK, NOT_OK };
enum class TaskEvent { EventA, EventB };

#define Task_Event_A TaskEvent::EventA
#define Task_Event_B TaskEvent::EventB

void Port_Init(void*);
void EcuM_Init();
Status SetupTask(void (*task)(void));
void WaitEvent(TaskEvent event);

#endif /* AUTOSAR_OS_UNO_H_ */
