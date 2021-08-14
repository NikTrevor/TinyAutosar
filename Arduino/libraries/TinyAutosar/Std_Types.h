#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#include "Platform_Types.h"

typedef uint8 Std_ReturnType;

#define E_OK 					(Std_ReturnType)0
#define E_NOT_OK 				(Std_ReturnType)1

#define E_NO_DTC_AVAILABLE			(Std_ReturnType)2
#define E_SESSION_NOT_ALLOWED			(Std_ReturnType)4
#define E_PROTOCOL_NOT_ALLOWED			(Std_ReturnType)5
#define E_REQUEST_NOT_ACCEPTED			(Std_ReturnType)8
#define E_REQUEST_ENV_NOK			(Std_ReturnType)9
#define E_PENDING				(Std_ReturnType)10
#define E_COMPARE_KEY_FAILED			(Std_ReturnType)11
#define E_FORCE_RCRRP				(Std_ReturnType)12

#define STD_HIGH					0x01
#define STD_LOW					0x00

#define STD_ACTIVE				0x01
#define STD_IDLE					0x00

#define STD_ON					0x01
#define STD_OFF					0x00

#endif /* STD_TYPES_H_ */
