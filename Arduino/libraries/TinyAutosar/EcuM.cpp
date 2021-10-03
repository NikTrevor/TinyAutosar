#include "AutosarOs_Uno.h"
#include "Port.h"
#include "Os.h"


void EcuM_Init(void)
{
	Port_Init(nullptr);
	StartOS();
}
