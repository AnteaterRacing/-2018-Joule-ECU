//#include "derivative.h" /* include peripheral declarations */
//#include "ics.h"		/* include the CLK initialization declaration*/
//#include "sbc_init.h"	/* include the SBC initialization declaration */
//#include "MSCAN_Module.h"/* include the msCAN module enable declaration*/
//#include "Test_case.h"	/*include the Test Cases enumeration*/
//#include "UART.h" /*include UART function definitions */
//
//void delay(void); //delay function
//
//
//#define NodeTemplate
//#ifdef NodeTemplate
//int main(void)
//{
//#define COUNTER_LIMIT 100
//
//    /*FLL Engaged external*/
//    ICS_ConfigType ics_config={0};
//    ics_config.u8ClkMode=ICS_CLK_MODE_FEE;
//    ics_config.bdiv=0;						/* Bdiv=1*/
//    ics_config.oscConfig.bRange=1;			/*Oscillator high range*/
//    ics_config.oscConfig.bIsCryst=1;		/*Oscillator clock source selected*/
//    ics_config.oscConfig.bStopEnable=1;		/* Oscillator enable in stop*/
//    ics_config.oscConfig.u32OscFreq=8000;	/*8 MHz oscillator*/
//    ics_config.oscConfig.bEnable=1;			/*Enable external oscillator*/
//
//    ICS_Init(&ics_config);					/* Initialize Clock */
//
//    SBC_Init();							/* Initialize the System Basis Chip for CAN */
//    MSCAN_ModuleEn();
//    init_UART();
//
//    __attribute__ ((unused)) uint8 err_status;
//
//    GPIOB_PDDR |= 1<<PTH0; 			/* Setup PTH0 as an output for RED LED */
//    GPIOB_PDDR |= 1<<PTH1; 			/* Setup PTH1 as an output for GREEN LED */
//    GPIOB_PDDR |= 1<<PTE7;
//
//    GPIOB_PSOR |= 1<<PTH0; 		/* Set output port PTH0 */
//    GPIOB_PSOR |= 1<<PTH1; 		/* set output port PTH1 */
//    GPIOB_PSOR |= 1<<PTE7; 		/* Set output port PTE7 */
//
//    err_status = Init_CAN(0, FAST); //init CAN ch0 to FAST mode
//
//    int i = 0;
//    int flag = 0;
//    int UART_Val[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
//
//    uint8 dataTX[9] =  {8, 0, 0, 0, 0, 0, 0, 0, 0};
//    uint8 dataTX_temp[9] =  {8, 0, 0, 0, 0, 0, 0, 0, 0};
//    uint8 dataRX_BUF4[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0};
//    uint8 dataRX_BUF5[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0};
//
//    uint8 ZevaDataRX[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0}; //ID: 50, 53
//    uint8 ZevaDataTX[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0}; //ID: 51, 52
//    //The following bytes are for Zeva Status (RX)
//    //Byte1: Defines controller type MC600C. Let Byte1 = 1
//    //Byte2: Battery voltage V
//    //Byte3: Battery current A (5x)
//    //Byte4: Motor voltage V
//    //Byte5: Motor current A (5x)
//    //Byte6: Internal temp C
//    //Byte7: Throttle level %
//    //Byte8: Output to power stage (0-255)
//    //additional info and error codes found in http://evwest.com/support/MC600C_Manual.pdf (page 11)
//
//    uint8 OrionDataRX[9] = {5, 0, 0, 0, 0, 0};  //ID: 0x7EB (this can be changed in BMS configuration)
//    uint8 OrionDataTX[5] = {4, 0, 0, 0, 0};     //ID: 0x7E3
//    //Orion BMS will need to be configured to a baud rate of 125 kbps, and transmit data periodically.
//    //Configure BMS to transmit data periodically.
//    //PID: https://www.orionbms.com/downloads/misc/orionbms_obd2_pids.pdf
//    //Only one device may request data at a time, multiple devices requesting data from BMS may incur collision
//    //BMS default ID: 0x7E3. this can be changed within the configuration settings
//    //Multiple requests before a response may be rejected
//
//    err_status = Config_CAN_MB(0, 0, TXDF, 1); //General TX buffer
//    err_status = Config_CAN_MB(0, 1, TXDF, 1); //General TX buffer
//    err_status = Config_CAN_MB(0, 2, TXDF, 51); //Zeva: Set throttle
//    err_status = Config_CAN_MB(0, 3, TXDF, 52); //Zeva: Receive or request setting
//    err_status = Config_CAN_MB(0, 4, RXDF, 1);
//    err_status = Config_CAN_MB(0, 5, RXDF, 1);
//    err_status = Config_CAN_MB(0, 6, RXDF, 50); //Zeva: Status and operating information
//    err_status = Config_CAN_MB(0, 7, RXDF, 53); //Zeva: Transmit setting
//    err_status = Config_CAN_MB(0, 8, RXDF, 0x7EB); //Orion RX
//    err_status = Config_CAN_MB(0, 9, TXDF, 0x7E3); //Orion TX, Data Request
//
//
//
//
//    while((CAN_status[0] & SYNCH) == 0) // || (syncCounter >= 255))
//    {
//        err_status = Check_CAN_Status(0, CAN_status); //
//        UART_Val[0] = 1;
//    }
//
//
//    for(;;)
//    {
//        //general RX buffer. ID1
//        err_status = Check_CAN_MB_Status(0, 4, buffer_status);//ch0, buffer_4, 2 byte memory buffer. ID1
//        if(buffer_status[0] == NEWDATA)
//        {
//            err_status = Read_CAN_MB_Data(0, 4, dataRX_BUF4);
//            UART_Val[1] = 1;
//        }
//
//
//        //general RX buffer. ID1
//        err_status = Check_CAN_MB_Status(0, 5, buffer_status);//ch0, buffer_5. ID1
//        if(buffer_status[0] == NEWDATA)
//        {
//            err_status = Read_CAN_MB_Data(0, 5, dataRX_BUF5);
//            UART_Val[2] = 1;
//        }
//
//        //Zeva status buffer. ID50
//        err_status = Check_CAN_MB_Status(0, 6, buffer_status);//ch0, buffer_6. ID50. Zeva status
//        if(buffer_status[0] == NEWDATA)
//        {
//            err_status = Read_CAN_MB_Data(0, 6, data);
//            UART_Val[3] = 1;
//        }
//
//        //Zeva transmit setting buffer. ID53
//        err_status = Check_CAN_MB_Status(0, 7, buffer_status);//ch0, buffer_7. ID53. Zeva Transmit settings
//        if(buffer_status[0] == NEWDATA)
//        {
//            err_check = Read_CAN_MB_Data(0, 7, buffer_status);
//            UART_Val[4] = 1;
//        }
//
//        //BMS data buffer. ID0x7EB
//        err_status = Check_CAN_MB_Status(0, 8, buffer_status);//ch0, buffer_8. ID0x7EB. Orion
//        if(buffer_status[0] == NEWDATA)
//        {
//            err_check = Read_CAN_MB_Data(0, 8, buffer_status);
//            UART_Val[5] = 1;
//        }
//
//
//        //Request BMS for state of charge
//        OrionDataTX[5] = {4, 0x7E3, 04, 22, 0xF00F};    //from App note
//        err_status = Load_CAN_MB(0, 9, OrionDataTX);    //ch0, buffer_9, data transmitted: OrionDataTX
//        err_check = Transmit_CAN_MB(0, 9);              //ch0, buffer_9
//        if(err_status == ERR_OK)
//        {
//            UART_Val[6] = 1;
//        }
//
//        //checks test cases from previous transmit
//        if(dataRX_BUF4[5] == 1 && dataRX_BUF4[9] == 10)
//        {
//            UART_Val[9] = 1;
//        }
//        /*
//        if(dataRX_BUF4[6] == 1 && dataRX_BUF4[7] == 10)
//        {
//            UART_Val[9] = 1;
//        }
//        */
//
//        //add test cases for dataTX below
//        //start
//        dataTX[5] = 1;
//        dataTX[9] = 10;
//        /*
//        dataTX[6] = 1;
//        dataTX[7] = 10;
//        */
//        //end
//
//         /*
//         * retrieve_data_from_peripherals(arg1, arg2, arg3, ..., arg_n)
//         * {
//         *      if(arg1, arg2, arg3, ..., arg_n == newValue)
//         *      {
//         *          newDataFlag == true;
//         *          pass_into_Data_TX(arg1, arg2, arg3, ..., arg_n);
//         *      }
//         *
//         *      else
//         *      {
//         *          newDataFlag == false;
//         *      }
//         * }
//         */
//
//        //check if dataTX needs to be transmitted/updated
//        for(i = 1; i < 9; i++)
//        {
//            if(dataTX[i] != 0)
//            {
//                flag = 1;
//                UART_Val[7] = 1;
//            }
//        }
//        //if flag is true, then load into general TX buffer_1 and transmit
//        if(flag == 1)
//        {
//            err_status = Load_CAN_MB(0, 1, dataTX);
//            err_check = Transmit_CAN_MB(0, 1);
//            if(err_status == ERR_OK)
//            {
//                UART_Val[8] = 1;
//            }
//        }
//
//
//        //UART
//        for(i = 0; i < 10; i++)
//        {
//            if(UART_Val[i] == 1)
//            {
//                transmit_string("PASS.  INDEX: ", i,"\n");
//            }
//            else if(UART_Val[i] == 0)
//            {
//                transmit_string("FAIL.  INDEX: ", i,"\n");
//            }
//        }
//
//        //reset values
//        dataTX[9] = {9, 0, 0, 0, 0, 0, 0, 0, 0};
//        OrionDataRX[5] = {4, 0, 0, 0, 0};
//        flag = 0;
//        UART_Val = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
//
//    }
//
//
//
//
//
//
//
//
//
//    /* to avoid the warning message for GHS: statement is unreachable*/
//#if defined (__ghs__)
//#pragma ghs nowarning 111
//#endif
//#if defined (__ICCARM__)
//#pragma diag_suppress=Pe111
//#endif
//    return 0;
//}
//#endif
//
//void delay(void)
//{
//    uint32_t i,j;
//    for(i=0 ; i<8 ; i++)
//        for(j=0 ; j<65535 ; j++);
//}
