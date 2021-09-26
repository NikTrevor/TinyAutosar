#ifndef AUTOSAR_COM_UNO_COM_H_
#define AUTOSAR_COM_UNO_COM_H_

#include "Std_Types.h"

#define CanDbImportedPdus 1

typedef uint16 Com_SignalIdType;
typedef uint8 Com_PduGroupIdType;
typedef uint16 Com_BitPositionType;

typedef uint16 PduIdType;
typedef enum {
	IMMEDIATE,
	DEFERRED
} Com_IPduSignalProcessingMode;

typedef enum {
	RECEIVE,
	SEND
} Com_IPduDirection;

typedef enum {
	DIRECT,
	MIXED,
	NONE,
	PERIODIC
} ComTxModeMode_type;

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

/** Configuration structure for Tx-mode for I-PDUs. */
typedef struct {

	/** Transmission mode for this IPdu. */
	const ComTxModeMode_type ComTxModeMode;

	/** Defines the number of times this IPdu will be sent in each IPdu cycle.
	 * Should be set to 0 for DIRECT transmission mode and >0 for DIRECT/N-times mode.
	 */
	const uint8 ComTxModeNumberOfRepetitions;

	/** Defines the period of the transmissions in DIRECT/N-times and MIXED transmission modes. */
	const uint32 ComTxModeRepetitionPeriodFactor;

	/** Time before first transmission of this IPDU. (i.e. between the ipdu group start and this IPDU is sent for the first time. */
	const uint32 ComTxModeTimeOffsetFactor;

	/** Period of cyclic transmission. */
	const uint32 ComTxModeTimePeriodFactor;
} ComTxMode_type;

/** Extra configuration structure for Tx I-PDUs. */
typedef struct {

	/** Minimum delay between successive transmissions of the IPdu. */
	const uint32 ComTxIPduMinimumDelayFactor;

	/** COM will fill unused areas within an IPdu with this bit patter.
	 */
	const uint8 ComTxIPduUnusedAreasDefault;

	/** Transmission modes for the IPdu.
	 * TMS is not implemented so only one static transmission mode is supported.
	 */
	const ComTxMode_type ComTxModeTrue;

	//ComTxMode_type ComTxModeFalse;
} ComTxIPdu_type;

/** Configuration structure for an I-PDU. */
typedef struct {

	/** Callout function of this IPDU.
	 * The callout function is an optional function used both on sender and receiver side.
	 * If configured, it determines whether an IPdu is considered for further processing. If
	 * the callout return false the IPdu will not be received/sent.
	 */
	boolean (*ComIPduCallout)(PduIdType PduId, const uint8 *IPduData);


	/** The outgoing PDU id. For polite PDU id handling. */
	const uint8 ArcIPduOutgoingId;

	/** Signal processing mode for this IPDU. */
	const Com_IPduSignalProcessingMode ComIPduSignalProcessing;

	/** Size of the IPDU in bytes.
	 * Range 0-8 for CAN and LIN and 0-256 for FlexRay.
	 */
	const uint8 ComIPduSize;

	/** The direction of the IPDU. Receive or Send. */
	const Com_IPduDirection ComIPduDirection;

	/** Reference to the IPDU group that this IPDU belongs to. */
	const uint8 ComIPduGroupRef;

	/** Container of transmission related parameters. */
	const ComTxIPdu_type ComTxIPdu;

	/** Reference to the actual pdu data storage */
	void *const ComIPduDataPtr;
	void *const ComIPduDeferredDataPtr;

	/** References to all signals and signal groups contained in this IPDU.
	 * It probably makes little sense not to define at least one signal or signal group for each IPDU.
	 */
	const ComSignal_type * const *ComIPduSignalRef;

	const ComSignal_type * const ComIPduDynSignalRef;

	/*
	 * The following two variables are used to control the per I-PDU based Rx/Tx-deadline monitoring.
	 */
	//const uint32 Com_Arc_DeadlineCounter;
	//const uint32 Com_Arc_TimeoutFactor;

	/* Transmission related timers and parameters.
	 * These are internal variables and should not be configured.
	 */
	//ComTxIPduTimer_type Com_Arc_TxIPduTimers;

	/** Marks the end of list for this configuration array. */
	const uint8 Com_Arc_EOL;

} ComIPdu_type;

/** Configuration structure for I-PDU groups */
typedef struct ComIPduGroup_type {
	/** ID of this group.
	 * Range 0 to 31.
	 */
	const uint8 ComIPduGroupHandleId;

	// reference to the group that this group possibly belongs to.
	//struct ComIPduGroup_type *ComIPduGroupRef;

	/** Marks the end of list for the I-PDU group configuration array. */
	const uint8 Com_Arc_EOL;
} ComIPduGroup_type;

/** Top-level configuration container for COM. Exists once per configuration. */
typedef struct {

	/** The ID of this configuration. This is returned by Com_GetConfigurationId(); */
	const uint8 ComConfigurationId;

	/*
	 * Signal Gateway mappings.
	 * Not Implemented yet.
	ComGwMapping_type ComGwMapping[];
	 */

	/** IPDU definitions */
	const ComIPdu_type *ComIPdu;

	//uint16 Com_Arc_NIPdu;

	/** IPDU group definitions */
	const ComIPduGroup_type *ComIPduGroup;

	/** Signal definitions */
	const ComSignal_type *ComSignal;

	// Signal group definitions
	//ComSignalGroup_type *ComSignalGroup;

	/** Group signal definitions */
	const ComGroupSignal_type *ComGroupSignal;

} Com_ConfigType;

void Com_MainFunctionRx();
void Com_MainFunctionTx();
uint8 Com_ReceiveSignal(Com_SignalIdType SignalId, void* SignalDataPtr);
uint8 Com_SendSignal(Com_SignalIdType SignalId, const void *SignalDataPtr);
void Com_IpduGroupStart(Com_PduGroupIdType IpduGroupId, boolean Initialize);

#define GET_IPdu(IPduId) (&ComConfig->ComIPdu[IPduId])
#define GET_ArcIPdu(IPduId) (&Com_Arc_Config.ComIPdu[IPduId])

typedef struct {
	uint8  ComTxIPduNumberOfRepetitionsLeft;
	uint32 ComTxModeRepetitionPeriodTimer;
	uint32 ComTxIPduMinimumDelayTimer;
	uint32 ComTxModeTimePeriodTimer;
} Com_Arc_TxIPduTimer_type;

typedef struct {

	Com_Arc_TxIPduTimer_type Com_Arc_TxIPduTimers;
	uint8 Com_Arc_IpduStarted;
	uint16 Com_Arc_DynSignalLength;
	uint16 Com_Arc_DeferredDynSignalLength;
} Com_Arc_IPdu_type;

typedef struct {

	uint32 Com_Arc_DeadlineCounter;
	uint8 ComSignalUpdated;
} Com_Arc_Signal_type;

typedef struct {
	void *Com_Arc_ShadowBuffer;
	uint8 ComSignalUpdated;
	uint8 Com_Arc_EOL;
} Com_Arc_GroupSignal_type;

typedef struct {
	Com_Arc_IPdu_type *ComIPdu; // Only used in PduIdCheck()
	Com_Arc_Signal_type *ComSignal;
	Com_Arc_GroupSignal_type *ComGroupSignal;
} Com_Arc_Config_type;

typedef uint16 PduLengthType;

typedef struct {
	PduLengthType currentPosition;
	boolean locked;
} Com_BufferPduStateType;

#define COM_N_IPDUS 2
#define COM_BUSY 0x81

#define GET_GroupSignal(GroupSignalId) \
	(&ComConfig->ComGroupSignal[GroupSignalId])

#define SignalTypeToSize(type,length) \
	(type == UINT8   ? sizeof(uint8) : \
	type == UINT16  ? sizeof(uint16) : \
	type == UINT32  ? sizeof(uint32) : \
	type == UINT8_N  ? sizeof(uint8) * length : \
	type == SINT8   ? sizeof(sint8) : \
	type == SINT16  ? sizeof(sint16) : \
	type == SINT32  ? sizeof(sint32) : sizeof(boolean))

#define TESTBIT(source,bit)	( *( (uint8 *)source  + (bit / 8) ) &  (uint8)(1u << (bit % 8)) )
#define SETBIT(dest,bit)	( *( (uint8 *)dest    + (bit / 8) ) |= (uint8)(1u << (bit % 8)) )
#define CLEARBIT(dest,bit)	( *( (uint8 *)dest    + (bit / 8) ) &= (uint8)~(uint8)(1u << (bit % 8)) )

extern Com_Arc_Config_type Com_Arc_Config;

#endif /* AUTOSAR_COM_UNO_COM_H_ */
