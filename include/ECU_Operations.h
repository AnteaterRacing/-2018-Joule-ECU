/*
 * ECU_Operations.h
 *
 *  Created on: Oct 26, 2017
 *      Author: arnav
 */

#include "derivative.h"
#include "main.h"

#ifndef ECU_OPERATIONS_H_
#define ECU_OPERATIONS_H_


//returns 1 if fault, 0 if no fault. (checks acc pedal transfer functions)
int APPS_Fault(uint16_t,uint16_t);

//returns 1 if BSE fault, 0 if no fault (checks that acc is not depressed when brake is depressed >10%)
int BSE_Fault(uint16_t,uint16_t,uint16_t);

//returns 1 if fault has not been resolved, 0 if it has.
int Fault_Not_Resolved(uint16_t,uint16_t);

//sets the throttle output value to the current value of acc1 whenever called (Torque Vectoring added later)
void set_Throttle_Value(uint8_t);

// sets the speed or error code for the front ecu
void Speed(uint8_t);

//returns 1 if in charge mode, 0 if not.
uint8_t inChargeMode(void);

//USED FOR DEBUGGING
void print_ECU_Status_UART(void);

#ifdef FrontECU
#define Speed1A 1 << 19 //for GPIIOB
#define Speed2A 1 << 18 //for GPIOB
#define Speed3A 1 << 17 //for GPIOB
#define Speed4A 1 << 16 //for GPIOB
#define Speed5A 1 << 31 //for GPIOA
#define Speed6A 1 << 25 //for GPIOB
#define Speed7A 1 << 18 //for GPIOA
#define Speed1B 1 << 19 //for GPIOA
#define Speed2B 1 << 12 //for GPIOA
#define Speed3B 1 << 13 //for GPIOA
#define Speed4B 1 << 4  //for GPIOA
#define Speed5B 1 << 14 //for GPIOB
#define Speed6B 1 << 13 //for GPIOB
#define Speed7B 1 << 12 //for GPIOA

#endif
#endif /* ECU_OPERATIONS_H_ */
