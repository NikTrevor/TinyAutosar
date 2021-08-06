#include <avr/io.h>

#include "AutosarOs_Uno.h"


void Port_Init(void*)
{
	DDRB |= 1 << PB5;
}

void EcuM_Init()
{
	Port_Init(0);
}

void SetupTask(void (*task)(void))
{
	
}

void WaitEvent(TaskEvent event)
{
	
}
