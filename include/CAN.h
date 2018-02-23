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
//size: 6 bytes: Accelerator, BrakeAngle, SteeringAngle, TVEnable, StartButton, FrontFault
#define FrontToRearDataMessageID 10
#define FrontToRearDataMessageSize 6
#define FrontToRearDataMessageIDRef 1

//defining message ID for telemetry signals
//size: 8 bytes: Wheelspeed L, Wheelspeed R, Tire temps L1,L2,L3,R1,R2,R3
#define FrontToRearTelemetryMessageID 20
#define FrontToRearTelemetryMessageSize 8
#define FrontToRearTelemetryMessageIDRef 2

//defining Message ID for rear to front ECU message transmit
//size: 7 bytes: IMDFault,BMSFault,BSPDFault, Speedometer, TractionLED, TV_LED, MotorTempLED
#define RearToFrontDataMessageID 11
#define RearToFrontDataMessageSize 7
#define RearToFrontDataMessageIDRef 3


//TODO @Ken Tran: add message ID definitions for BMS
#define OrionRX 0x7EB
#define OrionTX 0x7E3 //Used to transmit Data Request



#define Accelerator 	1
#define BrakeAngle  	2
#define SteeringAngle	3
#define TVEnable		4
#define	StartButton		5
#define FrontFault		6

#define WheelSpeed_L	1
#define WheelSpeed_R	2
#define TireTemp_L1		3
#define TireTemp_L2		4
#define TireTemp_L3		5
#define TireTemp_R1		6
#define TireTemp_R2		7
#define TireTemp_R3		8

#define IMDFault		1
#define BMSFault		2
#define BSPDFault		3
#define Speedometer		4
#define TractionLED		5
#define	TV_LED			6
#define MotorTempLED	7


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
