#include <AutosarOs_Uno.h>

void Task_A()
{
  for ( ; ; ) {
    WaitEvent(Task_Event_A);
    Dio_WriteChannel(Dio_Pin_13, STD_LOW);
    delay(200);
  }
}

void Task_B()
{
  for ( ; ; ) {
    WaitEvent(Task_Event_B);
    Dio_WriteChannel(Dio_Pin_13, STD_HIGH);
    delay(200);
  }
}

void setup()
{
  SetupTask(Task_A);
  SetupTask(Task_B);
  EcuM_Init();
}

void loop()
{
  /* Below will never execute */
  for ( ; ; ) { }
}

