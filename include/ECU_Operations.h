/*
 * ECU_Operations.h
 *
 *  Created on: Oct 26, 2017
 *      Author: arnav
 */

#ifndef ECU_OPERATIONS_H_
#define ECU_OPERATIONS_H_
//initializing PWM pins, timers, and interrupts
//TODO
void init_PWM();

//returns 1 if fault, 0 if no fault. (checks acc pedal transfer functions)
//TODO
int APPS_Fault();

//returns 1 if APBS fault, 0 if no fault (checks that acc is not depressed when brake is depressed >10%)
//TODO
int APBS_Fault();

//returns 1 if fault has not been resolved, 0 if it has.
int Fault_Not_Resolved(void);

#endif /* ECU_OPERATIONS_H_ */
