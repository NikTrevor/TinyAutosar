#include "Com.h"
#include <string.h>


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

Com_BufferPduStateType Com_BufferPduState[COM_N_IPDUS];

PduIdType getPduId(const ComIPdu_type* IPdu) {
	return (PduIdType)(IPdu - (ComConfig->ComIPdu));
}

boolean isPduBufferLocked(PduIdType id) {
	boolean bufferLocked = Com_BufferPduState[id].locked;
	if (bufferLocked) {
		return true;
	} else {
		return false;
	}
}

Com_Arc_Config_type Com_Arc_Config = {
	.ComIPdu = Com_Arc_IPdu,
	.ComSignal = Com_Arc_Signal,
	.ComGroupSignal = NULL
};

ComSignalEndianess_type Com_SystemEndianness;

/*
 * Copies the <segmentBitLength> least significant bits from <signal> into <pdu>.
 * The bit segment is placed in <pdu> so that the most significant bit ends up
 * at <segmentStartBitOffset> from the msb of <pdu>.
 * <pduSignalMask> is cleared and written to contain a mask with 1´s where the
 * signal is located in the <pdu>.
 */
void Com_WriteDataSegment(uint8 *pdu, uint8 *pduSignalMask, const uint8 *signalDataPtr, uint8 destByteLength,
		Com_BitPositionType segmentStartBitOffset, uint8 segmentBitLength) {
	Com_BitPositionType pduEndBitOffset = segmentStartBitOffset + segmentBitLength - 1;
	uint8 pduStartByte = segmentStartBitOffset / 8;
	uint8 pduEndByte = (pduEndBitOffset) / 8;
	uint8 pduByteLength = pduEndByte - pduStartByte;

	uint8 segmentStartBitOffsetInsideByte = segmentStartBitOffset % 8;
	uint8 pduStartByteMask = (0xFFu >> segmentStartBitOffsetInsideByte);

	uint8 pduAlignmentShift = 7 - (pduEndBitOffset % 8);
	uint8 segmentByteLength = 1 + (segmentBitLength - 1) / 8;
	uint8 pduByteNr = 0;
	uint8 signalByteNr = 0;

	uint16 shiftReg = 0;
	uint16 clearReg = 0;

	// clear pduSignalMask all the way from 0
	memset(pduSignalMask, 0x00, pduEndByte);

	// setup to point to end (LSB) of buffers
	pdu           += pduEndByte;
	pduSignalMask += pduEndByte;

	signalDataPtr += destByteLength - 1;

	// splits and writes one source byte on each iteration
	do {
		shiftReg = *(signalDataPtr - signalByteNr) & 0x00FFu;
		clearReg = 0x00FF;
		//lint -save -e701 -e734 //PC-Lint Wrong interpretation of MISRA rule 10.5.
		shiftReg <<= pduAlignmentShift;
		clearReg <<= pduAlignmentShift;
		//lint -restore
		if (pduByteNr == pduByteLength) {
			shiftReg &= pduStartByteMask;
			clearReg &= pduStartByteMask;
		}
		*(pdu           - pduByteNr) &= (uint16)~(clearReg & 0x00FFu);
		*(pduSignalMask - pduByteNr) |= (uint16) (clearReg & 0x00FFu);
		*(pdu           - pduByteNr) |= shiftReg & 0x00FFu;

		pduByteNr++;
		if ( (pduAlignmentShift != 0)
				&& (pduByteNr <= pduByteLength) ) {
			shiftReg = *(signalDataPtr - signalByteNr) & 0x00FFu;
			clearReg = 0x00FF;
			//lint -save -e701 -e734 //PC-Lint Wrong interpretation of MISRA rule 10.5.
			shiftReg <<= pduAlignmentShift;
			clearReg <<= pduAlignmentShift;
			shiftReg >>= 8;
			clearReg >>= 8;
			//lint -restore
			if (pduByteNr == pduByteLength) {
				shiftReg &= pduStartByteMask;
				clearReg &= pduStartByteMask;
			}
			*(pdu           - pduByteNr) &= (uint16)~(clearReg & 0x00FFu);
			*(pduSignalMask - pduByteNr) |= (uint16) (clearReg & 0x00FFu);
			*(pdu           - pduByteNr) |= shiftReg & 0x00FFu;
		}
		signalByteNr++;
	} while (signalByteNr < segmentByteLength);
}

/*
 * Converts from motorola CAN bit nr to PDU bit offset
 *
 *             motorolaBitNr:  7  6  5  4  3  2  1  0 15 14 13 12 ...
 *  motorolaBitNrToPduOffset:  0  1  2  3  4  5  6  7  8  9 10 11 ...
 */
Com_BitPositionType motorolaBitNrToPduOffset (Com_BitPositionType motorolaBitNr) {
	uint8 byte = motorolaBitNr / 8;
	Com_BitPositionType offsetToByteStart = (Com_BitPositionType) (byte * 8u);
	Com_BitPositionType offsetInsideByte = motorolaBitNr % 8;
	return (Com_BitPositionType) (offsetToByteStart + (7u - offsetInsideByte));
}

/*
 * Converts from intel CAN bit nr to PDU bit offset
 *
 *                        pduNumBits: 40
 *  intelBitNr (after PDU byte-swap): 39 38 37 36 35 34 33 32 31 ...  3  2  1  0
 *             intelBitNrToPduOffset:  0  1  2  3  4  5  6  7  8 ... 36 37 38 39
 */
Com_BitPositionType intelBitNrToPduOffset (Com_BitPositionType intelBitNr, Com_BitPositionType segmentBitLength, Com_BitPositionType pduBitLength) {
	return pduBitLength - (intelBitNr + segmentBitLength);
}

void Com_WriteSignalDataToPduBuffer(
			const uint16 signalId,
			const boolean isGroupSignal,
			const void *signalData,
			void *pduBuffer) {
	// TODO: Implement writing little-endian signals

	Com_SignalType signalType;
	uint8 signalLength;
	Com_BitPositionType bitPosition;
	uint8 bitSize;
	ComSignalEndianess_type endian;

	if (!isGroupSignal) {
		const ComSignal_type * Signal =  GET_Signal(signalId);
		signalType = Signal->ComSignalType;
		signalLength = Signal->ComBitSize / 8;
		bitPosition = Signal->ComBitPosition;
		bitSize = Signal->ComBitSize;
		endian = Signal->ComSignalEndianess;
	} else {
		/* Groupsignal, we actually write to shadowbuffer */
		const ComGroupSignal_type *GroupSignal = GET_GroupSignal(signalId);
		signalType = GroupSignal->ComSignalType;
		signalLength = GroupSignal->ComBitSize / 8;
		bitPosition = GroupSignal->ComBitPosition;
		bitSize = GroupSignal->ComBitSize;
		endian = GroupSignal->ComSignalEndianess;
	}

	uint8 signalBufferSize = SignalTypeToSize(signalType, signalLength);
	uint8 pduSignalMask[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

	uint8 signalDataBytesArray[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	const uint8 *signalDataBytes = (const uint8 *)signalData;

	if (endian == COM_OPAQUE || signalType == UINT8_N) {
		//assert(bitPosition % 8 == 0);
		//assert(bitSize % 8 == 0);
		uint8 *pduBufferBytes = (uint8 *)pduBuffer;
		uint8 startFromPduByte = bitPosition / 8;
		memcpy(pduBufferBytes + startFromPduByte, signalDataBytes, signalLength);
	} else {
		if (Com_SystemEndianness == COM_BIG_ENDIAN) {
			// Straight copy
			uint8 i;
			for (i = 0; i < signalBufferSize; i++) {
				signalDataBytesArray[i] = signalDataBytes[i];
			}

		} else if (Com_SystemEndianness == COM_LITTLE_ENDIAN) {
			// Data copy algorithm assumes big-endian input data so we swap
			uint8 i;
			for (i = 0; i < signalBufferSize; i++) {
				signalDataBytesArray[(signalBufferSize - 1) - i] = signalDataBytes[i];
			}
		} else {
			//lint --e(506)	PC-Lint exception Misra 13.7, 14.1, Allow boolean to always be false.
			//assert(0);
		}

		if (endian == COM_BIG_ENDIAN) {
			Com_BitPositionType startBitOffset = motorolaBitNrToPduOffset(bitPosition%8);
			uint8 pduBufferBytesStraight[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

			Com_WriteDataSegment(pduBufferBytesStraight, pduSignalMask,
					signalDataBytesArray, signalBufferSize, startBitOffset, bitSize);

			// Straight copy into real pdu buffer (with mutex)
			uint8 *pduBufferBytes = ((uint8 *)pduBuffer)+(bitPosition/8);
			uint8 i;
			for (i = 0; i < 8; i++) {
				pduBufferBytes[ i ]  &=        ~( pduSignalMask[ i ] );
				pduBufferBytes[ i ]  |=  pduBufferBytesStraight[ i ];
			}

		} else {
			uint8 startBitOffset = intelBitNrToPduOffset(bitPosition%8, bitSize, 64);
			uint8 pduBufferBytesSwapped[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

			Com_WriteDataSegment(pduBufferBytesSwapped, pduSignalMask,
					signalDataBytesArray, signalBufferSize, startBitOffset, bitSize);

			// Swapped copy into real pdu buffer (with mutex)
			uint8 *pduBufferBytes = ((uint8 *)pduBuffer)+(bitPosition/8);
			uint8 i;
			// actually it is only necessary to iterate through the bytes that are written.
			for (i = 0; i < 8; i++) {
				pduBufferBytes[ i ]  &=       ~( pduSignalMask[ (8 - 1) - i ] );
				pduBufferBytes[ i ]  |=  pduBufferBytesSwapped[ (8 - 1) - i ];
			}
		}
	}
}

void Com_WriteSignalDataToPdu(
			const Com_SignalIdType signalId,
			const void *signalData) {

	// Get PDU
	const ComSignal_type *Signal     = GET_Signal(signalId);
	const ComIPdu_type   *IPdu       = GET_IPdu(Signal->ComIPduHandleId);

	// Get data
	Com_WriteSignalDataToPduBuffer(
			signalId,
			FALSE,
			signalData,
			IPdu->ComIPduDataPtr);
}


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
	const ComIPdu_type *IPdu = GET_IPdu(Signal->ComIPduHandleId);
	Com_Arc_IPdu_type *Arc_IPdu = GET_ArcIPdu(Signal->ComIPduHandleId);

	if (isPduBufferLocked(getPduId(IPdu))) {
		return COM_BUSY;
	}

	Com_WriteSignalDataToPdu(Signal->ComHandleId, SignalDataPtr);

	/* If the signal has an update bit, set it */
	if (Signal->ComSignalArcUseUpdateBit) {
		SETBIT(IPdu->ComIPduDataPtr, Signal->ComUpdateBitPosition);
	}

	/* If signal has triggered transmit property, trigger a transmission */
	if (Signal->ComTransferProperty == TRIGGERED) {
		Arc_IPdu->Com_Arc_TxIPduTimers.ComTxIPduNumberOfRepetitionsLeft =
			IPdu->ComTxIPdu.ComTxModeTrue.ComTxModeNumberOfRepetitions + 1;
	}

	return E_OK;
}

void Com_IpduGroupStart(Com_PduGroupIdType IpduGroupId, boolean Initialize)
{
	static_cast<void>(IpduGroupId);
	static_cast<void>(Initialize);
}
