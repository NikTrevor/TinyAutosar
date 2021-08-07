#include <AutosarOs_Uno.h>

void Task_A(void)
{
  for ( ; ; ) {
    WaitEvent(Task_Event_A);
    Dio_WriteChannel(Dio_Pin_13, STD_LOW);
    delay(200);
  }
}

void Task_B(void)
{
  for ( ; ; ) {
    WaitEvent(Task_Event_B);
    Dio_WriteChannel(Dio_Pin_13, STD_HIGH);
    delay(200);
  }
}

void ErrorHook(void)
{
  while (1) { }
}

void setup()
{
  if (E_OK != SetupTask(Task_A)) {
    ErrorHook();
  }
  if (E_OK != SetupTask(Task_B)) {
    ErrorHook();
  }
  EcuM_Init();
}

void loop()
{
  /* Below will never execute */
  for ( ; ; ) { }
}

