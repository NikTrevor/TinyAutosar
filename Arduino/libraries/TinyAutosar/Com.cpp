#include "Com.h"


#define GET_Signal(SignalId) \
	(&ComConfig->ComSignal[SignalId])

const Com_ConfigType *ComConfig;

/*
 * Signal init values.
 */
const uint32 Com_SignalInitValue_CanDB_Signal_32_21_BE_Tester = 0;
const uint8 Com_SignalInitValue_CanDB_Signal_1_4_LE_Tester = 0;
const sint16 Com_SignalInitValue_CanDB_Signal_45_12_LE_Tester = 0;
const sint16 Com_SignalInitValue_CanDB_Signal_29_12_BE_Tester = 0;
const uint32 Com_SignalInitValue_CanDB_Signal_32_21_BE = 0;
const uint8 Com_SignalInitValue_CanDB_Signal_1_4_LE = 0;
const sint16 Com_SignalInitValue_CanDB_Signal_45_12_LE = 0;
const sint16 Com_SignalInitValue_CanDB_Signal_29_12_BE = 0;

const ComSignal_type ComSignal[] = {
{
	.ComHandleId = CanDB_Signal_32_21_BE_Tester,
	.ComIPduHandleId = 0,
	.Com_Arc_ShadowBuffer = NULL,
	.Com_Arc_ShadowBuffer_Mask = NULL,
	.ComFirstTimeoutFactor = 0,
	.ComNotification = NULL,
	.ComTimeoutFactor = 0,
	.ComTimeoutNotification = NULL,
	.ComErrorNotification = NULL,
	.ComTransferProperty = PENDING,
	
	.ComUpdateBitPosition = 0,
	.ComSignalArcUseUpdateBit = 0,
	
	.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_32_21_BE_Tester,
	
	.ComBitPosition = 20,
	.ComBitSize = 21,
	
	.ComSignalEndianess = COM_BIG_ENDIAN,
	.ComSignalType = UINT32,
	.Com_Arc_IsSignalGroup = 0,
	.ComGroupSignal = NULL,
	
	.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
	
	.Com_Arc_EOL = 0
},
{
	.ComHandleId = CanDB_Signal_1_4_LE_Tester,
	.ComIPduHandleId = 0,
	.Com_Arc_ShadowBuffer = NULL,
	.Com_Arc_ShadowBuffer_Mask = NULL,
	.ComFirstTimeoutFactor = 0,
	.ComNotification = NULL,
	.ComTimeoutFactor = 0,
	.ComTimeoutNotification = NULL,
	.ComErrorNotification = NULL,
	.ComTransferProperty = PENDING,
	
	.ComUpdateBitPosition = 0,
	.ComSignalArcUseUpdateBit = 0,
	
	.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_1_4_LE_Tester,
	
	.ComBitPosition = 1,
	.ComBitSize = 4,
	
	.ComSignalEndianess = COM_LITTLE_ENDIAN,
	.ComSignalType = UINT8,
	.Com_Arc_IsSignalGroup = 0,
	.ComGroupSignal = NULL,
	
	.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
	
	.Com_Arc_EOL = 0
},
{
	.ComHandleId = CanDB_Signal_45_12_LE_Tester,
	.ComIPduHandleId = 0,
	.Com_Arc_ShadowBuffer = NULL,
	.Com_Arc_ShadowBuffer_Mask = NULL,
	.ComFirstTimeoutFactor = 0,
	.ComNotification = NULL,
	.ComTimeoutFactor = 0,
	.ComTimeoutNotification = NULL,
	.ComErrorNotification = NULL,
	.ComTransferProperty = PENDING,
	
	.ComUpdateBitPosition = 0,
	.ComSignalArcUseUpdateBit = 0,
	
	.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_45_12_LE_Tester,
	
	.ComBitPosition = 45,
	.ComBitSize = 12,
	
	.ComSignalEndianess = COM_LITTLE_ENDIAN,
	.ComSignalType = SINT16,
	.Com_Arc_IsSignalGroup = 0,
	.ComGroupSignal = NULL,
	
	.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
	
	.Com_Arc_EOL = 0
},
{
	.ComHandleId = CanDB_Signal_29_12_BE_Tester,
	.ComIPduHandleId = 0,
	.Com_Arc_ShadowBuffer = NULL,
	.Com_Arc_ShadowBuffer_Mask = NULL,
	.ComFirstTimeoutFactor = 0,
	.ComNotification = NULL,
	.ComTimeoutFactor = 0,
	.ComTimeoutNotification = NULL,
	.ComErrorNotification = NULL,
	.ComTransferProperty = PENDING,
	
	.ComUpdateBitPosition = 0,
	.ComSignalArcUseUpdateBit = 0,
	
	.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_29_12_BE_Tester,
	
	.ComBitPosition = 0,
	.ComBitSize = 12,
	
	.ComSignalEndianess = COM_BIG_ENDIAN,
	.ComSignalType = SINT16,
	.Com_Arc_IsSignalGroup = 0,
	.ComGroupSignal = NULL,
	
	.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
	
	.Com_Arc_EOL = 0
},
{
	.ComHandleId = CanDB_Signal_32_21_BE,
	.ComIPduHandleId = 1,
	.Com_Arc_ShadowBuffer = NULL,
	.Com_Arc_ShadowBuffer_Mask = NULL,
	.ComFirstTimeoutFactor = 0,
	.ComNotification = NULL,
	.ComTimeoutFactor = 0,
	.ComTimeoutNotification = NULL,
	.ComErrorNotification = NULL,
	.ComTransferProperty = TRIGGERED,
	
	.ComUpdateBitPosition = 0,
	.ComSignalArcUseUpdateBit = 0,
	
	.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_32_21_BE,
	
	.ComBitPosition = 20,
	.ComBitSize = 21,
	
	.ComSignalEndianess = COM_BIG_ENDIAN,
	.ComSignalType = UINT32,
	.Com_Arc_IsSignalGroup = 0,
	.ComGroupSignal = NULL,
	
	.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
	
	.Com_Arc_EOL = 0
},
{
	.ComHandleId = CanDB_Signal_1_4_LE,
	.ComIPduHandleId = 1,
	.Com_Arc_ShadowBuffer = NULL,
	.Com_Arc_ShadowBuffer_Mask = NULL,
	.ComFirstTimeoutFactor = 0,
	.ComNotification = NULL,
	.ComTimeoutFactor = 0,
	.ComTimeoutNotification = NULL,
	.ComErrorNotification = NULL,
	.ComTransferProperty = TRIGGERED,
	
	.ComUpdateBitPosition = 0,
	.ComSignalArcUseUpdateBit = 0,
	
	.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_1_4_LE,
	
	.ComBitPosition = 1,
	.ComBitSize = 4,
	
	.ComSignalEndianess = COM_LITTLE_ENDIAN,
	.ComSignalType = UINT8,
	.Com_Arc_IsSignalGroup = 0,
	.ComGroupSignal = NULL,
	
	.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
	
	.Com_Arc_EOL = 0
},
{
	.ComHandleId = CanDB_Signal_45_12_LE,
	.ComIPduHandleId = 1,
	.Com_Arc_ShadowBuffer = NULL,
	.Com_Arc_ShadowBuffer_Mask = NULL,
	.ComFirstTimeoutFactor = 0,
	.ComNotification = NULL,
	.ComTimeoutFactor = 0,
	.ComTimeoutNotification = NULL,
	.ComErrorNotification = NULL,
	.ComTransferProperty = TRIGGERED,
	
	.ComUpdateBitPosition = 0,
	.ComSignalArcUseUpdateBit = 0,
	
	.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_45_12_LE,
	
	.ComBitPosition = 45,
	.ComBitSize = 12,
	
	.ComSignalEndianess = COM_LITTLE_ENDIAN,
	.ComSignalType = SINT16,
	.Com_Arc_IsSignalGroup = 0,
	.ComGroupSignal = NULL,
	
	.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
	
	.Com_Arc_EOL = 0
},
{
	.ComHandleId = CanDB_Signal_29_12_BE,
	.ComIPduHandleId = 1,
	.Com_Arc_ShadowBuffer = NULL,
	.Com_Arc_ShadowBuffer_Mask = NULL,
	.ComFirstTimeoutFactor = 0,
	.ComNotification = NULL,
	.ComTimeoutFactor = 0,
	.ComTimeoutNotification = NULL,
	.ComErrorNotification = NULL,
	.ComTransferProperty = TRIGGERED,
	
	.ComUpdateBitPosition = 0,
	.ComSignalArcUseUpdateBit = 0,
	
	.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_29_12_BE,
	
	.ComBitPosition = 0,
	.ComBitSize = 12,
	
	.ComSignalEndianess = COM_BIG_ENDIAN,
	.ComSignalType = SINT16,
	.Com_Arc_IsSignalGroup = 0,
	.ComGroupSignal = NULL,
	
	.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
	
	.Com_Arc_EOL = 0
},
{
	/* LAST */
	.ComHandleId = CanDB_Signal_29_12_BE,
	.ComIPduHandleId = 1,
	.Com_Arc_ShadowBuffer = NULL,
	.Com_Arc_ShadowBuffer_Mask = NULL,
	.ComFirstTimeoutFactor = 0,
	.ComNotification = NULL,
	.ComTimeoutFactor = 0,
	.ComTimeoutNotification = NULL,
	.ComErrorNotification = NULL,
	.ComTransferProperty = TRIGGERED,
	
	.ComUpdateBitPosition = 0,
	.ComSignalArcUseUpdateBit = 0,
	
	.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_29_12_BE,
	
	.ComBitPosition = 0,
	.ComBitSize = 12,
	
	.ComSignalEndianess = COM_BIG_ENDIAN,
	.ComSignalType = SINT16,
	.Com_Arc_IsSignalGroup = 0,
	.ComGroupSignal = NULL,
	
	.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
	
	.Com_Arc_EOL = 1
}
};

void Com_MainFunctionRx()
{
	
}

void Com_MainFunctionTx()
{
	
}

uint8 Com_ReceiveSignal(Com_SignalIdType SignalId, void* SignalDataPtr)
{
	static_cast<void>(SignalId);
	static_cast<void>(SignalDataPtr);
	return 0;
}

uint8 Com_SendSignal(Com_SignalIdType SignalId, const void *SignalDataPtr)
{
	(void)SignalId; (void)SignalDataPtr;
	/* Store pointer to signal for easier coding */
	const ComSignal_type *Signal = GET_Signal(SignalId);
	//const ComIPdu_type *IPdu = GET_IPdu(Signal->ComIPduHandleId);
	//Com_Arc_IPdu_type *Arc_IPdu = GET_ArcIPdu(Signal->ComIPduHandleId);

	//if (isPduBufferLocked(getPduId(IPdu))) {
		//return COM_BUSY;
	//}

	//Com_WriteSignalDataToPdu(Signal->ComHandleId, SignalDataPtr);

	///* If the signal has an update bit, set it */
	//if (Signal->ComSignalArcUseUpdateBit) {
		//SETBIT(IPdu->ComIPduDataPtr, Signal->ComUpdateBitPosition);
	//}

	///* If signal has triggered transmit property, trigger a transmission */
	//if (Signal->ComTransferProperty == TRIGGERED) {
		//Arc_IPdu->Com_Arc_TxIPduTimers.ComTxIPduNumberOfRepetitionsLeft =
			//IPdu->ComTxIPdu.ComTxModeTrue.ComTxModeNumberOfRepetitions + 1;
	//}

	return E_OK;
}

void Com_IpduGroupStart(Com_PduGroupIdType IpduGroupId, boolean Initialize)
{
	static_cast<void>(IpduGroupId);
	static_cast<void>(Initialize);
}
