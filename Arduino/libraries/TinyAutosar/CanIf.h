#ifndef AUTOSAR_COM_UNO_CANIF_H_
#define AUTOSAR_COM_UNO_CANIF_H_

#include "Std_Types.h"

typedef enum {
	CANIF_Controller_A,
	CANIF_CHANNEL_CNT
} CanIf_Arc_ChannelIdType;

typedef enum {
	/** UNINIT mode. Default mode of the CAN driver and all
	 *  CAN controllers connected to one CAN network after
	 *  power on. */
	CANIF_CS_UNINIT = 0,
	                           
	/**  STOPPED mode. At least one of all CAN controllers
	 *   connected to one CAN network are halted and does
	 *   not operate on the bus. */
	CANIF_CS_STOPPED,	                           
	                           
	/** STARTED mode. All CAN controllers connected to
	 *  one CAN network are started by the CAN driver and
	 *  in full-operational mode. */
	CANIF_CS_STARTED,
	
	/** SLEEP mode. At least one of all CAN controllers
	 *  connected to one CAN network are set into the
	 *  SLEEP mode and can be woken up by request of the
	 *  CAN driver or by a network event (must be supported
	 *  by CAN hardware) */
	CANIF_CS_SLEEP
} CanIf_ControllerModeType;

Std_ReturnType CanIf_SetControllerMode(uint8 Controller,
		CanIf_ControllerModeType ControllerMode);

#endif /* AUTOSAR_COM_UNO_CANIF_H_ */
