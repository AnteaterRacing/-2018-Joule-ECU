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
#define FrontToRearTelemetryMessageIDRef 2

//defining Message ID for rear to front ECU message transmit
//size: 7 bytes: IMDFault,BMSFault,BSPDFault, Speedometer, TractionLED, TV_LED, MotorTempLED
#define RearToFrontDataMessageID 11
#define RearToFrontDataMessageSize 8
#define RearToFrontDataMessageIDRef 3

////length: 5; {Pack Current, IN USE, PACK INSTANT VOLTAGE, IN USE, CRC CHECKSUM}; message speed: 8 ms
#define OrionL5_ID 28
#define OrionL5_Size 8
#define OrionL5_buffVal 4

//length: 7; {Pack DCL, Pack CCL, Blank, Simulated Simulated SOC, high temperature, low temperature, crc checksum}; message speed: 104 ms
#define OrionL7_ID 29
#define OrionL7_Size 8
#define OrionL7_buffVal 5

//length: 8; {relay state, pack soc, pack resistance, in use, pack open voltage, in use, pack amphours, crc checksum}; message speed: 104 ms
#define OrionL8_ID 30
#define OrionL8_Size 8
#define OrionL8_buffVal 6

/* 5 BMS buffers with respective data */
//Orion1
//length: 8;  {Rolling Counter, IN USE, Pack CCL KW, IN USE, Pack CCL, Pack DCL, Pack DCL KW, Pack Current}
#define Orion1_ID 28
#define Orion1_Size 8
#define Orion1_buffVal 4

//Orion2
//length: 8;  {Pack Instant Voltage, Pack Open Voltage, Pack SOC, Pack Amphours, Pack Resistance, Pack DOD, Pack Health, Pack Summed Voltages}
#define Orion1_ID 29
#define Orion1_Size 8
#define Orion1_buffVal 5

//Orion3
//length: 8;  {Total Pack Cycles, Current Limit Status, High Temperature, IN USE, High Thermistor ID, IN USE, Low Temperature, Low Thermistor ID}
#define Orion1_ID 30
#define Orion1_Size 8
#define Orion1_buffVal 6

//Orion4
//length: 8;  {Average Temperature, Interal Temperature, Low Cell Voltage, Low Cell Voltage ID, High Cell Voltage, High Cell Voltage ID, Avg. Cell Voltage, Low Cell Voltage}
#define Orion1_ID 31
#define Orion1_Size 8
#define Orion1_buffVal 7

//Orion5
//length: 8;  {Low Open Cell ID, High Cell Voltage, High Cell Open ID, Avg Opencell Voltage, Maximum Cell Voltage, Minimum Cell Voltage, BLANK, BLANK}
#define Orion1_ID 32
#define Orion1_Size 8
#define Orion1_buffVal 8


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

/*
//Orion_L5
#define RollingCounter 1
#define PackCCL 2
#define PackCCL_KW 3
#define PackDCL 4
#define PackDCL_KW 5
#define PackCurrent 6
#define PackVoltage 7
#define PackOpenVoltage 8

//Orion_L7
#define Pack_SOC 1
#define PackAmphours 2
#define Pack_Resistance 3
#define Pack_DOD 4
#define Pack_Health 5
#define PackSummedVoltage 6
#define TotalPackCycles 7
#define Current_Limit_Status 8

//Orion_L8
#define High_Temp 1
#define High_ThermistorID 2
#define Low_Temp 3
#define Low_ThermistorID 4
#define AvgTemp 5
#define InternalTemp 6
#define LowCellVoltage 7
#define LowCellVoltageID 8
*/

//Orion1
#define Rolling_Counter 1
//#define XXXX 2
#define Pack_CCL_KW 3
//define XXXX 4
#define Pack_CLL 5
#define Pack_DCL 6
#define Pack_DCL_KW 7
#define Pack_Current 8

//Orion2
#define Pack_Instant_Voltage 1
#define Pack_Open_Voltage 2
#define Pack_SOC 3
#define Pack_Amphours 4
#define Pack_Resistance 5
#define Pack_DOD 6
#define Pack_Health 7
#define Pack_Summed_Voltages 8

//Orion3
#define Total_Pack_Cycles 1
#define Current_Limit_Status 2
#define High_Temperature 3
//#define XXXX 4
#define High_Thermistor_ID 5
//#define XXXX 6
#define Low_Temperature 7
#define Low_Thermistor_ID 8

//Orion 4
#define Avg_Temperature 1
#define Internal_Temperature 2
#define Low_Cell_Vtolage 3
#define Low_Cell_Voltage_ID 4
#define High_Cell_Voltage 5
#define High_Cell_Voltage_ID 6
#define Avg_Cell_Voltage 7
#define Low_Cell_Voltage 8

//Orion 5
#define Low_Open_Cell_ID 1
#define High_Cell_Voltage 2
#define High_Cell_Open_ID 3
#define Avg_Opencell_Voltage 4
#define Maximum_Cell_Voltage 5
#define Minimum_Cell_Voltage 6
//#define XXXX 7
//#define XXXX 8



//TODO: @Ken add new CAN messages

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
