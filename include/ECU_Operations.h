/*
 * ECU_Operations.h
 *
 *  Created on: Oct 26, 2017
 *      Author: arnav
 */

#ifndef ECU_OPERATIONS_H_
#define ECU_OPERATIONS_H_

//waits for the start sequence before sending the ready to drive signal
void wait_for_start_seq();
#define RTDS_MASK 32768

//returns 1 if fault, 0 if no fault. (checks acc pedal transfer functions)
int APPS_Fault();

//returns 1 if BSE fault, 0 if no fault (checks that acc is not depressed when brake is depressed >10%)
int BSE_Fault();

//returns 1 if fault has not been resolved, 0 if it has.
int Fault_Not_Resolved(void);

//reads the ADC values
void read_ADC_Values(void);

//sets the throttle output value to the current value of acc1 whenever called (Torque Vectoring added later)
void set_Throttle_Value(void);

//USED FOR DEBUGGING
void print_ECU_Status_UART(void);

#endif /* ECU_OPERATIONS_H_ */
