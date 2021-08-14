#include <AutosarCom_Uno.h>

uint32 CanDB_Signal_32_21_BE_buffer;
uint8  CanDB_Signal_1_4_LE_buffer;
sint16 CanDB_Signal_45_12_LE_buffer;
sint16 CanDB_Signal_29_12_BE_buffer;

void Task_1()
{
  Com_MainFunctionRx();

  Com_ReceiveSignal(CanDB_Signal_32_21_BE_Tester, &CanDB_Signal_32_21_BE_buffer);
  Com_ReceiveSignal(CanDB_Signal_1_4_LE_Tester,   &CanDB_Signal_1_4_LE_buffer);
  Com_ReceiveSignal(CanDB_Signal_45_12_LE_Tester, &CanDB_Signal_45_12_LE_buffer);
  Com_ReceiveSignal(CanDB_Signal_29_12_BE_Tester, &CanDB_Signal_29_12_BE_buffer);

  Com_SendSignal(CanDB_Signal_32_21_BE, &CanDB_Signal_32_21_BE_buffer);
  Com_SendSignal(CanDB_Signal_1_4_LE,   &CanDB_Signal_1_4_LE_buffer);
  Com_SendSignal(CanDB_Signal_45_12_LE, &CanDB_Signal_45_12_LE_buffer);
  Com_SendSignal(CanDB_Signal_29_12_BE, &CanDB_Signal_29_12_BE_buffer);

  Com_MainFunctionTx();
}

void setup()
{
  CanIf_SetControllerMode(CANIF_Controller_A, CANIF_CS_STARTED);
  Com_IpduGroupStart(CanDbImportedPdus, TRUE);
}

void loop()
{
  delay(500);
  Task_1();
}

