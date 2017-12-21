/*
 * ECU_Operations.c
 *
 *  Created on: Nov 3, 2017
 *      Author: arnav
 */

#include "ECU_Operations.h"

//initializing PWM pins, timers, and interrupts
//TODO
void init_PWM(void){

}

//returns 1 if fault, 0 if no fault. (checks acc pedal transfer functions)
//TODO
int APPS_Fault(void){
	return 0;
}

//returns 1 if APBS fault, 0 if no fault (checks that acc is not depressed when brake is depressed >10%)
//TODO
int APBS_Fault(void){
	return 0;
}

//returns 0 if the fault exit condition has been satisfied. returns 1 if not.
int Fault_Not_Resolved(void){
	return 0;
}
