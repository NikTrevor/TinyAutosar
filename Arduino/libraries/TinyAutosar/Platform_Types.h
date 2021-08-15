#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include <stdbool.h>
#include <stdint.h>

#ifndef FALSE
#define FALSE		(boolean)false
#endif

#ifndef TRUE
#define TRUE		(boolean)true
#endif

#ifndef NULL
#define NULL		nullptr
#endif

typedef _Bool				boolean;
typedef int8_t				sint8;
typedef uint8_t				uint8;
typedef char				char_t;
typedef int16_t				sint16;
typedef uint16_t			uint16;
typedef int32_t				sint32;
typedef uint32_t			uint32;
typedef float				float32;

#endif /* PLATFORM_TYPES_H_ */
