#include "Com.h"


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
	static_cast<void>(SignalId);
	static_cast<void>(SignalDataPtr);
	return 0;
}

void Com_IpduGroupStart(Com_PduGroupIdType IpduGroupId, boolean Initialize)
{
	static_cast<void>(IpduGroupId);
	static_cast<void>(Initialize);
}
