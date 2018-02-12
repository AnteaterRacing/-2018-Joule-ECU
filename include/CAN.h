/*
 * CAN.h
 *
 *  Created on: Feb 8, 2018
 *      Author: arnav
 */

#ifndef CAN_H_
#define CAN_H_

void CAN_Init(uint8_t ecu); //front or rear ecu init
void CAN_Transmit(uint16_t messageID, uint8_t* message);
void CAN_Receive(uint16_t messageID, uint8_t* message);
uint8_t startSignal(void); //returns 0 if no start message received. 1 if received


#endif /* CAN_H_ */
