#ifndef AUTOSAR_COM_UNO_COM_H_
#define AUTOSAR_COM_UNO_COM_H_

#include "Platform_Types.h"

#define CanDbImportedPdus 1

typedef uint16 Com_SignalIdType;
typedef uint8 Com_PduGroupIdType;

/* Signal definitions */
#define CanDB_Signal_32_21_BE_Tester 0
#define CanDB_Signal_1_4_LE_Tester 1
#define CanDB_Signal_45_12_LE_Tester 2
#define CanDB_Signal_29_12_BE_Tester 3
#define CanDB_Signal_32_21_BE 4
#define CanDB_Signal_1_4_LE 5
#define CanDB_Signal_45_12_LE 6
#define CanDB_Signal_29_12_BE 7

void Com_MainFunctionRx();
void Com_MainFunctionTx();
uint8 Com_ReceiveSignal(Com_SignalIdType SignalId, void* SignalDataPtr);
uint8 Com_SendSignal(Com_SignalIdType SignalId, const void *SignalDataPtr);
void Com_IpduGroupStart(Com_PduGroupIdType IpduGroupId, boolean Initialize);

#endif /* AUTOSAR_COM_UNO_COM_H_ */
