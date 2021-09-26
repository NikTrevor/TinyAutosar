#include "Com.h"

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

/*
 * Signal definitions
 */
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

/*
 * I-PDU definitions
 */
Com_Arc_IPdu_type Com_Arc_IPdu[] = {
	{ // CanDB_Message_1
		.Com_Arc_TxIPduTimers = {
			.ComTxIPduNumberOfRepetitionsLeft = 0,
			.ComTxModeRepetitionPeriodTimer = 0,
			.ComTxIPduMinimumDelayTimer = 0,
			.ComTxModeTimePeriodTimer = 0
		},		
		.Com_Arc_IpduStarted = 0	
	},
	{ // CanDB_Message_2
		.Com_Arc_TxIPduTimers = {
			.ComTxIPduNumberOfRepetitionsLeft = 0,
			.ComTxModeRepetitionPeriodTimer = 0,
			.ComTxIPduMinimumDelayTimer = 0,
			.ComTxModeTimePeriodTimer = 0
		},		
		.Com_Arc_IpduStarted = 0	
	}
};

Com_Arc_Signal_type Com_Arc_Signal[] = {
	{ // CanDB_Signal_32_21_BE_Tester
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_1_4_LE_Tester
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_45_12_LE_Tester
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_29_12_BE_Tester
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_32_21_BE
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_1_4_LE
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_45_12_LE
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_29_12_BE
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	}
};

Com_Arc_Config_type Com_Arc_Config = {
	.ComIPdu = Com_Arc_IPdu,
	.ComSignal = Com_Arc_Signal,
	.ComGroupSignal = NULL
};
