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
#include "Input_Scan.h"
#include "CAN.h"
//Analog to Digital Converter input values:
uint32_t brakeAngle;
uint32_t steeringAngle;
int APPS_flag = 0; 			//0 when no fault, 1 when fault
int BSE_flag = 0;			//0 when no fault, 1 when fault
int APPS_faultcount = 0; 	//number of times APPS faults have occurred
int BSE_faultcount = 0; 	//number of times BSE faults have occurred
uint16_t Throttle_L = 0;
uint16_t Throttle_R = 0;

//returns 1 if fault, 0 if no fault. (checks acc pedal transfer functions)
int APPS_Fault(uint8_t acc1, uint8_t acc2){

	//500 is 10% of 5000mV which is the max value for ADC inputs
	//if apps flag has been already triggered but fault is still occurring, do nothing
	if(APPS_flag && abs(acc1-acc2) > 500) {
		return 1;
	}
	//if no apps flag triggered but fault occurring, trigger apps flag and increase faultcount
	else if(abs(acc1-acc2) > 500) {
		APPS_flag = 1;
		APPS_faultcount++;
		return 1;
	}
	//if there is no fault occurring, disable APPS flag if it is triggered and continue execution.
	else {
		APPS_flag = 0;
		return 0;
	}
}

//returns 1 if APBS fault, 0 if no fault (checks that acc is not depressed when brake is depressed >20%)
int BSE_Fault(uint8_t brakeAngle, uint8_t acc1, uint8_t acc2){
	if((BSE_flag) || ((acc1 > 0 || acc2 > 0) && brakeAngle > 1000)) { //1000 is 20% of 5000mV
		BSE_flag = 1;
		BSE_faultcount++;
		//TODO:toggle fault LEDs on dashboard corresponding to fault
		return 1;

	}
	return 0;
}

//returns 0 if the fault exit condition has been satisfied. returns 1 if not.
int Fault_Not_Resolved(uint8_t acc1, uint8_t acc2){
	if(BSE_flag){
		if(acc1==0 && acc2==0){ //if acc1 and acc2 show accelerator is released, clear BSE fault
			BSE_flag = 0;
			//TODO:toggle fault LEDs on dashboard corresponding to fault
			return 0;
		}
	}
	if(APPS_flag){
		if(!APPS_Fault(acc1, acc2)){ //if APPS signals are within 10%, clear APPS fault
			APPS_flag = 0;
			//TODO:toggle fault LEDs on dashboard corresponding to fault
			return 0;
		}
	}
	return 1;
}

//sets the throttle value based on the value of acc1 (0-255)
//this is done by setting the compare match value on the PWM output pin. (0-1020)
//TODO: add torque vectoring functionality
void set_Throttle_Value(uint8_t acceleratorPosition){
	Throttle_L = (acceleratorPosition);
	Throttle_R = (acceleratorPosition);

	FTM2_C0V = Throttle_L;
	FTM2_C1V = Throttle_R;
}


#ifdef FrontECU
void Speed (uint8_t Speed)
{
	FGPIOA_PCOR = Speed5A | Speed7A | Speed1B | Speed2B | Speed3B | Speed4B;
	FGPIOB_PCOR = Speed1A | Speed2A | Speed3A | Speed4A | Speed6A | Speed5B | Speed6B | Speed7B;
	uint8_t Digit1;
	uint8_t Digit2;
	if (Speed < 100)
	{
		Digit1 = Speed % 10;
		Speed /= 10;
		Digit2 = Speed % 10;
	}
	else
	{
		//error handler
	}
	switch(Digit1)
	{
		case 0:
		{
			FGPIOA_PSOR = Speed5A;
			FGPIOB_PSOR = Speed1A | Speed2A | Speed3A | Speed4A | Speed6A;
			break;
		}
		case 1:
		{
			FGPIOB_PSOR = Speed2A | Speed3A;
			break;
		}
		case 2:
		{
			FGPIOA_PSOR = Speed5A | Speed7A;
			FGPIOB_PSOR = Speed1A | Speed2A | Speed4A;
			break;
		}
		case 3:
		{
			FGPIOA_PSOR = Speed7A;
			FGPIOB_PSOR = Speed1A | Speed2A | Speed3A | Speed4A;
			break;
		}
		case 4:
		{
			FGPIOA_PSOR = Speed7A;
			FGPIOB_PSOR = Speed2A | Speed3A | Speed6A;
			break;
		}
		case 5:
		{
			FGPIOA_PSOR = Speed7A;
			FGPIOB_PSOR = Speed1A | Speed3A | Speed4A | Speed6A;
			break;
		}
		case 6:
		{
			FGPIOA_PSOR = Speed5A | Speed7A;
			FGPIOB_PSOR = Speed1A | Speed3A | Speed4A | Speed6A;
			break;
		}
		case 7:
		{
			FGPIOB_PSOR = Speed1A | Speed2A | Speed3A;
			break;
		}
		case 8:
		{
			FGPIOA_PSOR = Speed5A | Speed7A;
			FGPIOB_PSOR = Speed1A | Speed2A | Speed3A | Speed4A | Speed6A;
			break;
		}
		case 9:
		{
			FGPIOA_PSOR = Speed7A;
			FGPIOB_PSOR = Speed1A | Speed2A | Speed3A | Speed6A;
			break;
		}
	}
	switch(Digit2)
	{
		case 0:
		{
			FGPIOA_PSOR = Speed1B | Speed2B | Speed3B | Speed4B;
			FGPIOB_PSOR = Speed5B | Speed6B;
			break;
		}
		case 1:
		{
			FGPIOA_PSOR = Speed2B | Speed3B;
			break;
		}
		case 2:
		{
			FGPIOA_PSOR = Speed1B | Speed2B | Speed4B;
			FGPIOB_PSOR = Speed5B | Speed7B;
			break;
		}
		case 3:
		{
			FGPIOA_PSOR = Speed1B | Speed2B | Speed3B | Speed4B;
			FGPIOB_PSOR = Speed7B;
			break;
		}
		case 4:
		{
			FGPIOA_PSOR = Speed2B | Speed3B;
			FGPIOB_PSOR = Speed7B | Speed6B;
			break;
		}
		case 5:
		{
			FGPIOA_PSOR = Speed1B | Speed3B | Speed4B;
			FGPIOB_PSOR = Speed7B | Speed6B;
			break;
		}
		case 6:
		{
			FGPIOA_PSOR = Speed1B | Speed3B | Speed4B;
			FGPIOB_PSOR = Speed5B | Speed6B | Speed7B;
			break;
		}
		case 7:
		{
			FGPIOA_PSOR = Speed1B | Speed2B | Speed3B;
			break;
		}
		case 8:
		{
			FGPIOA_PSOR = Speed1B | Speed2B | Speed3B | Speed4B;
			FGPIOB_PSOR = Speed5B | Speed6B | Speed7B;
			break;
		}
		case 9:
		{
			FGPIOA_PSOR = Speed1B | Speed2B | Speed3B;
			FGPIOB_PSOR = Speed6B | Speed7B;
			break;
		}
	}

}

void Fault_LED(uint8_t IMD, uint8_t BMS, uint8_t BSPD, uint8_t APPS)
{
	if(IMD != 0)  FGPIOA_PSOR = 1 << 27;
	if(BMS != 0)  FGPIOB_PSOR = 1 << 26;
	if(BSPD != 0) FGPIOB_PSOR = 1 <<  7;
	if(APPS != 0) FGPIOA_PSOR = 1 <<  3;
	return;
}

void TorqV_LED(uint16_t Throttle_L, uint16_t Throttle_R)
{
	if(Throttle_L > Throttle_R) FGPIOB_PSOR = 1 << 4;
	if(Throttle_R > Throttle_L) FGPIOB_PSOR = 1 << 5;
	return;
}

#endif
