#include <AutosarOs_Uno.h>

void setup()
{
	EcuM_Init();
}

void loop()
{
  delay(500);
  Dio_WriteChannel(Dio_Pin_13, STD_LOW);
  delay(500);
  Dio_WriteChannel(Dio_Pin_13, STD_HIGH);
}

