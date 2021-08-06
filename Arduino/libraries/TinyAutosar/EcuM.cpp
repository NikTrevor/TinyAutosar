#include <avr/io.h>

#include "AutosarOs_Uno.h"


static void Port_Init(void*)
{
	DDRB |= 1 << PB5;
}

void EcuM_Init(void)
{
	Port_Init(0);
}
