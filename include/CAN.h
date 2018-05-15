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
