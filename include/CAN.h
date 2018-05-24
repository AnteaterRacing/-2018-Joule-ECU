/*
 * CAN.h
 *
 *  Created on: Feb 8, 2018
 *      Author: arnav
 */
#include "derivative.h"

#ifndef CAN_H_
#define CAN_H_

//defining Message ID for front to rear ECU message transmit
//size: 7 bytes: AcceleratorL, AcceleratorR, BrakeAngle, SteeringAngle, TVEnable, StartButton, FrontFault
#define FrontToRearDataMessageID 10
#define FrontToRearDataMessageSize 8
#define FrontToRearDataMessageIDRef 1

//defining message ID for telemetry signals
//size: 8 bytes: Wheelspeed L, Wheelspeed R, Tire temps L1,L2,L3,R1,R2,R3
#define FrontToRearTelemetryMessageID 12
#define FrontToRearTelemetryMessageSize 8
#define FrontToRearTelemetryMessageIDRef 3

//defining Message ID for rear to front ECU message transmit
//size: 7 bytes: IMDFault,BMSFault,BSPDFault, Speedometer, TractionLED, TV_LED, MotorTempLED
#define RearToFrontDataMessageID 11
#define RearToFrontDataMessageSize 8
#define RearToFrontDataMessageIDRef 2

#define RearTelemetryMessageID 13
#define RearTelemetryMessageSize 8
#define RearTelemetryMessageIDRef 9

/* 5 BMS buffers with respective data */
//Orion1
//length: 8;  {Rolling Counter, IN USE, Pack CCL KW, IN USE, Pack CCL, Pack DCL, Pack DCL KW, Pack Current}
#define Orion1_ID 28
#define Orion1_Size 8
#define Orion1_buffVal 4

//Orion2
//length: 8;  {Pack Instant Voltage, Pack Open Voltage, Pack SOC, Pack Amphours, Pack Resistance, Pack DOD, Pack Health, Pack Summed Voltages}
#define Orion2_ID 29
#define Orion2_Size 8
#define Orion2_buffVal 5

//Orion3
//length: 8;  {Total Pack Cycles, Current Limit Status, High Temperature, IN USE, High Thermistor ID, IN USE, Low Temperature, Low Thermistor ID}
#define Orion3_ID 30
#define Orion3_Size 8
#define Orion3_buffVal 6

//Orion4
//length: 8;  {Average Temperature, Interal Temperature, Low Cell Voltage, Low Cell Voltage ID, High Cell Voltage, High Cell Voltage ID, Avg. Cell Voltage, Low Cell Voltage}
#define Orion4_ID 31
#define Orion4_Size 8
#define Orion4_buffVal 7

//Orion5
//length: 8;  {Low Open Cell ID, High Cell Voltage, High Cell Open ID, Avg Opencell Voltage, Maximum Cell Voltage, Minimum Cell Voltage, BLANK, BLANK}
#define Orion5_ID 32
#define Orion5_Size 8
#define Orion5_buffVal 8

//FrontToRearDataMessage
#define AcceleratorL 	1
#define AcceleratorR	2
#define BrakeAngle  	3
#define SteeringAngle	4
#define TVBias			5
#define	StartButton		6
#define FrontFault		7
#define Heartbeat		8

//FrontToRearTelemetryMessage
#define WheelSpeed_L	1
#define WheelSpeed_R	2
#define TireTemp_L1		3
#define TireTemp_L2		4
#define TireTemp_L3		5
#define TireTemp_R1		6
#define TireTemp_R2		7
#define TireTemp_R3		8

//RearToFrontDataMessage
#define IMDFault		1
#define BMSFault		2
#define BSPDFault		3
#define Speedometer		4
#define TractionLED		5
#define	TV_LED			6
#define MotorTempLED	7

//Orion1
#define Rolling_Counter 1 //changes every 100ms
#define Pack_CCL_KW 	2 //charge current limit (2byte) (0.1 kW increment) //TODO
#define Pack_CCL 		3 //charge current limit (10A increment)
#define Pack_DCL 		4 //discharge current limit(10A)
#define Pack_DCL_KW 	5 //discharge current limit (2byte) (0.1 kW increment)
#define Pack_DCL_KW2 	6
#define Pack_Current	7 //0.1A increment (2byte)
#define Pack_Current2 	8

//Orion2
#define Pack_Instant_Voltage 	1 	//0.1V increment (2byte)
#define Pack_Instant_Voltage2 	2
#define Pack_SOC 				3	//0.5% increment state of charge
#define Pack_Amphours 			4 	//0.1 Ah increment (2byte)
#define Pack_Amphours2			5
#define Pack_Resistance 		6	//1 mOhm increment (2byte)
#define Pack_Resistance2		7


//Orion3
#define Total_Pack_Cycles 		1
#define Current_Limit_Status 	2
#define Pack_Summed_Voltage 	3	//0.1V increment (2byte)//#define XXXX 4
#define Pack_Summed_Voltage		4
#define Low_Temperature 		5	//1C increments
#define High_Temperature 		6 	//1C increments
#define High_Thermistor_ID 		7
#define Low_Thermistor_ID 		8

//Orion 4
#define Avg_Temperature 1	//1C increment
#define Internal_Temperature 2	//1C increment
#define Low_Cell_Voltage 3	//0.0001v increment
#define Low_Cell_Voltage2 4
#define High_Cell_Voltage 5 //0.0001v increment
#define High_Cell_Voltage2 6
#define Avg_Cell_Voltage 7	//0.0001v increment
#define Avg_Cell_Voltage2 8	//0.0001v increment

//Orion 5
#define Maximum_Cell_Voltage 5 //0.0001v increment (2byte)
#define Maximum_Cell_Voltage2 6
#define Minimum_Cell_Voltage 7 //0.0001v increment (2byte)
#define Minimum_Cell_Voltage2 8


void CAN_Init(void); //front or rear ecu init
void CAN_TransmitData(uint16_t, uint8_t*); 	//transmits CAN message with specified messageID
void CAN_ReceiveData(uint16_t, uint8_t*);		//receives CAN message with specified messageID
void init_CAN_clocks(void);
void delay(void);
uint16_t ID_to_BUF(uint16_t);
void err_check(uint8_t);
void LED_GRN(void);
void LED_RED(void);
void LED_BLU(void);
void LED_TEAL(void);
void LED_WHT(void);
void LED_OFF(void);
void LED_YEL(void);
#endif /* CAN_H_ */
