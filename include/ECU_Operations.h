/*
 * ECU_Operations.h
 *
 *  Created on: Oct 26, 2017
 *      Author: arnav
 */

#include "derivative.h"

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

//returns 1 if in charge mode, 0 if not.
uint8_t inChargeMode(void);

//USED FOR DEBUGGING
void print_ECU_Status_UART(void);

#endif /* ECU_OPERATIONS_H_ */
