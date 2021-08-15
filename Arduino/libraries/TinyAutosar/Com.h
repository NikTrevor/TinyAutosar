#ifndef AUTOSAR_COM_UNO_COM_H_
#define AUTOSAR_COM_UNO_COM_H_

#include "Std_Types.h"

#define CanDbImportedPdus 1

typedef uint16 Com_SignalIdType;
typedef uint8 Com_PduGroupIdType;
typedef uint16 Com_BitPositionType;

/* Signal definitions */
#define CanDB_Signal_32_21_BE_Tester 0
#define CanDB_Signal_1_4_LE_Tester 1
#define CanDB_Signal_45_12_LE_Tester 2
#define CanDB_Signal_29_12_BE_Tester 3
#define CanDB_Signal_32_21_BE 4
#define CanDB_Signal_1_4_LE 5
#define CanDB_Signal_45_12_LE 6
#define CanDB_Signal_29_12_BE 7

typedef enum {
	COM_TIMEOUT_DATA_ACTION_NONE,
	COM_TIMEOUT_DATA_ACTION_REPLACE
} ComRxDataTimeoutAction_type;

typedef enum {
	COM_BIG_ENDIAN,
	COM_LITTLE_ENDIAN,
	COM_OPAQUE
} ComSignalEndianess_type;

typedef enum {
	PENDING,
	TRIGGERED
} ComTransferProperty_type;

typedef enum {
	BOOLEAN,
	UINT8,
	UINT16,
	UINT32,
	UINT8_N,
	UINT8_DYN,
	SINT8,
	SINT16,
	SINT32
} Com_SignalType; // :)

/** Configuration structure for group signals */
typedef struct {
	/** Starting position (bit) of the signal within the IPDU.
	 * Range 0 to 63.
	 */
	const Com_BitPositionType ComBitPosition;

	/** The size of the signal in bits.
	 * Range 0 to 64.
	 */
	const uint8 ComBitSize;

	/** Identifier for the signal.
	 * Should be the same value as the index in the COM signal array.
	 */
	const uint8 ComHandleId;

	/** Defines the endianess of the signal's network representation. */
	const ComSignalEndianess_type ComSignalEndianess;

	/** Value used to initialize this signal. */
	const void *ComSignalInitValue;

	/** Defines the type of the signal. */
	const Com_SignalType ComSignalType;


	/** Filter for this signal.
	 * NOT SUPPORTED
	 */
	//const ComFilter_type ComFilter;

	/* Pointer to the shadow buffer of the signal group that this group signal is contained in.
	 *
	 * This is initialized by Com_Init() and should not be configured.
	 */
	//void *Com_Arc_ShadowBuffer;

	/* Callback function used when an invalid signal is received. */
	// ComInvalidNotification;
	//uint8 ComSignalDataInvalidValue;

	/* IPDU id of the IPDU that this signal belongs to.
	 *
	 * This is initialized by Com_Init() and should not be configured.
	 */

	//const uint8 ComIPduHandleId;
	//const uint8 ComSignalUpdated;

	/** Marks the end of list for the configuration array. */
	const uint8 Com_Arc_EOL;
} ComGroupSignal_type;

/** Configuration structure for signals and signal groups. */
typedef struct {

	/** Identifier for the signal.
	 * Should be the same value as the index in the COM signal array.
	 */
	const uint16 ComHandleId;

	/* IPDU id of the IPDU that this signal belongs to.
	 * This is initialized by Com_Init() and should not be configured.
	 */

	const uint16 ComIPduHandleId;
	//const uint8 ComSignalUpdated;
	
	const void *Com_Arc_ShadowBuffer;
	const uint8 *Com_Arc_ShadowBuffer_Mask;
	//void *Com_Arc_IPduDataPtr;

	/** First timeout period for deadline monitoring. */
	const uint32 ComFirstTimeoutFactor;

	/** Tx and Rx notification function. */
	void (*ComNotification) (void);

	/** Timeout period for deadline monitoring. */
	const uint32 ComTimeoutFactor;

	/** Timeout notification function. */
	void (*ComTimeoutNotification) (void);

	/** Notification function for error notification. */
	void (*ComErrorNotification) (void);

	const ComTransferProperty_type ComTransferProperty;

	/** The bit position in the PDU for this signal's update bit.
	 * Range 0 to 2031.
	 * Only applicable if an update bit is used. NULL otherwise.
	 */
	const Com_BitPositionType ComUpdateBitPosition;

	/** Marks if this signal uses an update bit.
	 * Should be set to one if an update bit is used.
	 */
	const uint8 ComSignalArcUseUpdateBit;

	/** Value used to initialized this signal. */
	const void *ComSignalInitValue;

	/** Starting position (bit) of the signal within the IPDU.
	 * Range 0 to 2031.
	 */
	const Com_BitPositionType ComBitPosition;

	/** The size of the signal in bits.
	 * Range 0 to 63.
	 * Range 0 to 4095 for uint8_n signal types
	 */
	const uint16 ComBitSize;

	/* Callback function used when an invalid signal is received.
	 */
	// ComInvalidNotification;

	//uint8 ComSignalDataInvalidValue;

	/* Action to be taken if an invalid signal is received.
	 */
	// ComDataInvalidAction;

	/** Defines the endianess of the signal's network representation. */
	const ComSignalEndianess_type ComSignalEndianess;

	/** The number of bytes if the signal has type UINT8_N;
	 * Range 1 to 8.
	 */
	//const uint8 ComSignalLength;

	/** Defines the type of the signal. */
	const Com_SignalType ComSignalType;

	/** Filter for this signal.
	 * NOT SUPPORTED.
	 */
	//const ComFilter_type ComFilter;

	/** Marks if this signal is a signal group.
	 * Should be set to 1 if the signal is a signal group.
	 */
	const uint8 Com_Arc_IsSignalGroup;

	/** Array of group signals.
	 * Only applicable if this signal is a signal group.
	 */
	const ComGroupSignal_type * const *ComGroupSignal;

	/* Pointer to the data storage of this signals IPDU.
	 * This is initialized by Com_Init() and should not be configured.
	 */
	//const void *ComIPduDataPtr;

	/** Action to be performed when a reception timeout occurs. */
	const ComRxDataTimeoutAction_type ComRxDataTimeoutAction;

	/** Marks the end of list for the signal configuration array. */
	const uint8 Com_Arc_EOL;
} ComSignal_type;

void Com_MainFunctionRx();
void Com_MainFunctionTx();
uint8 Com_ReceiveSignal(Com_SignalIdType SignalId, void* SignalDataPtr);
uint8 Com_SendSignal(Com_SignalIdType SignalId, const void *SignalDataPtr);
void Com_IpduGroupStart(Com_PduGroupIdType IpduGroupId, boolean Initialize);

#endif /* AUTOSAR_COM_UNO_COM_H_ */
