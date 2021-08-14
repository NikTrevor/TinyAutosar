#include <avr/io.h>

#include "Port.h"


void Port_Init(void*)
{
	DDRB |= 1 << PB5;
}
