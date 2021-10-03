#ifndef AUTOSAR_OS_UNO_H_
#define AUTOSAR_OS_UNO_H_

#include "Dio.h"
#include "Os.h"
#include "Port.h"


#define Task_Event_A TaskEvent::EventA
#define Task_Event_B TaskEvent::EventB
#define E_OK Status::OK
#define E_NOT_OK Status::NOT_OK

void EcuM_Init();

#endif /* AUTOSAR_OS_UNO_H_ */
