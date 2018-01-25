/*
 * ECU_Operations.c
 *
 *  Created on: Nov 3, 2017
 *      Author: arnav
 */

#include "ECU_Operations.h"
#include "derivative.h"
#include "ADC.h"
#include "UART.h"
#include "stdlib.h"
//Analog to Digital Converter input values:
uint32_t acc1 = 0; 			//channel 1 Pin J4-13  represents signal from accelerator pedal sensor 1
uint32_t acc2; 				//channel 2  Pin J4-15 represents signal from accelerator pedal sensor 2
uint32_t brakeAngle; 		//channel 3 Pin J5-07? represents signal from brake pedal position sensor
uint32_t steeringAngle; 	//channel 4	Pin J5-09  represents signal from steering wheel position sensor
int APPS_flag = 0; 			//0 when no fault, 1 when fault
int BSE_flag = 0;			//0 when no fault, 1 when fault
int APPS_faultcount = 0; 	//number of times APPS faults have occurred
int BSE_faultcount = 0; 	//number of times BSE faults have occurred
uint32_t throttleValueL = 0;//value used to set throttle value for left motor controller
uint32_t throttleValueR = 0;//value used to set throttle value for right motor controller

//waiting for the start sequence to be pressed before starting the vehicle
void wait_for_start_seq(){
	while(brakeAngle==0); //TODO add busy wait for start button to initiate start
						  //TODO add RTDS output signal

}

//returns 1 if fault, 0 if no fault. (checks acc pedal transfer functions)
int APPS_Fault(void){

	if(abs(acc1-acc2) > 500) { 		//500 is 10% of 5000mV which is the max value for ADC inputs
		APPS_flag = 1;
		APPS_faultcount++;
		//TODO:toggle fault LEDs on dashboard corresponding to fault
		return 1;
	}
	return 0;
}

//returns 1 if APBS fault, 0 if no fault (checks that acc is not depressed when brake is depressed >10%)
int BSE_Fault(void){
	if((BSE_flag) || ((acc1 > 0 || acc2 > 0) && brakeAngle > 500)) { //500 is 10% of 5000mV
		BSE_flag = 1;
		BSE_faultcount++;
		//TODO:toggle fault LEDs on dashboard corresponding to fault
		return 1;

	}
	return 0;
}

//returns 0 if the fault exit condition has been satisfied. returns 1 if not.
int Fault_Not_Resolved(void){
	if(BSE_flag){
		if(acc1==0 && acc2==0){ //if acc1 and acc2 show accelerator is released, clear BSE fault
			BSE_flag = 0;
			//TODO:toggle fault LEDs on dashboard corresponding to fault
			return 0;
		}
	}
	if(APPS_flag){
		if(!APPS_Fault()){ //if APPS signals are within 10%, clear APPS fault
			APPS_flag = 0;
			//TODO:toggle fault LEDs on dashboard corresponding to fault
			return 0;
		}
	}
	return 1;
}

//sets the throttle value based on the value of acc1
//this is done by setting the compare match value on the PWM output pin. (0-5000)
void set_Throttle_Value(void){
	throttleValueL = acc1;
	throttleValueR = acc1;
}

//prints out the value of analog inputs and other variables to console with values shown from 0-5V
//TODO: DELETE. USED FOR DEBUGGING
void print_ECU_Status_UART(void){

	char c1 = (acc1/1000+48);
	transmit_string("acc1=");
	transmit_char(c1);
	transmit_char(' ');
	char c2 = (acc2/1000+48);
	transmit_string(" acc2=");
	transmit_char(c2);
	transmit_char(' ');
	char c3 = (brakeAngle/1000+48);
	transmit_string(" brake=");
	transmit_char(c3);
	transmit_char(' ');
	char c4 = (steeringAngle/1000+48);
	transmit_string(" steering=");
	transmit_char(c4);
	transmit_char('\r');
}
