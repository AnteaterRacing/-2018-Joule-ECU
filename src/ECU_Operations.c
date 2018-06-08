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

#define PTE7 7
#define PTC4 20 									/* Port output to fault LED */
#define PTA4 4
#define PTD7 31
//Analog to Digital Converter input values:
uint32_t brakeAngle;
uint32_t steeringAngle;
int APPS_flag = 0; 			//0 when no fault, 1 when fault
int BSE_flag = 0;			//0 when no fault, 1 when fault
int APPS_faultcount = 0; 	//number of times APPS faults have occurred
int BSE_faultcount = 0; 	//number of times BSE faults have occurred
uint16_t Throttle_L = 0;
uint16_t Throttle_R = 0;
uint8_t Throttle_L_buffer[20] = {0};
uint8_t Throttle_R_buffer[20] = {0};



//returns 1 if fault, 0 if no fault. (checks acc pedal transfer functions)
int APPS_Fault(uint8_t acc1, uint8_t acc2){

	//500 is 10% of 5000mV which is the max value for ADC inputs
	//if apps flag has been already triggered but fault is still occurring, do nothing
	if(APPS_flag && abs(acc1-acc2) > 26) {
		return 1;
	}
	//if no apps flag triggered but fault occurring, trigger apps flag and increase faultcount
	else if(abs(acc1-acc2) > 26) {
		APPS_flag = 1;
		APPS_faultcount++;
		GPIOA_PCOR |= 1<<PTD7;
		GPIOB_PCOR |= 1<<PTE7;			/*Turn on acc fault PTA3 LED*/
		return 1;
	}
	//if there is no fault occurring, disable APPS flag if it is triggered and continue execution.
	else {
		APPS_flag = 0;
		//TODO: @lucas toggle fault LEDs on dashboard corresponding to fault
//		GPIOA_PSOR |= 1<<PTD7;
	//	GPIOB_PSOR |= 1<<PTE7;		/* Turn off fault LED*/
		return 0;
	}
}

//returns 1 if APBS fault, 0 if no fault (checks that acc is not depressed when brake is depressed >20%)
int BSE_Fault(uint8_t brakeAngle, uint8_t acc1, uint8_t acc2){
	if((BSE_flag) && ((acc1 > 64 || acc2 > 64) && brakeAngle > 0x4B)) { //1000 is 20% of 5000mV

		return 1;
	}
	else if((acc1 > 64 || acc2 > 64) && brakeAngle > 0x4B){
		BSE_flag = 1;
		BSE_faultcount++;
		//TODO: @lucas toggle fault LEDs on dashboard corresponding to fault
		GPIOA_PCOR |= 1<<PTD7;
		GPIOB_PCOR |= 1<<PTE7;		/*Turn on acc/bse fault LED*/

	}
	else if (acc1 < 13 && acc2 < 13){
		BSE_flag = 0;
		//TODO: @lucas toggle fault LEDs on dashboard corresponding to fault
	//	GPIOA_PSOR |= 1<< PTD7;
		//GPIOB_PSOR |= 1<<PTE7;		/* Turn off fault PTA3 LED*/
		return 0;
	}

}

////returns 0 if the fault exit condition has been satisfied. returns 1 if not.
//int Fault_Not_Resolved(uint8_t acc1, uint8_t acc2){
//	if(BSE_flag){
//		if(acc1 < 250 || acc2 < 250){ //if acc1 and acc2 show accelerator is less than 5% clear fault    250 is 5% of 5000mV
//			BSE_flag = 0;
//			//TODO: @lucas toggle fault LEDs on dashboard corresponding to fault
//			GPIOB_PSOR |= 1<<PTE7;		/* Turn off fault PTA3 LED*/
//			return 0;
//		}
//	}
//	if(APPS_flag){
//		if(!APPS_Fault(acc1, acc2)){ //if APPS signals are within 10%, clear APPS fault
//			APPS_flag = 0;
//			//TODO: @lucas toggle fault LEDs on dashboard corresponding to fault
//			GPIOB_PSOR |= 1<<PTE7;		/* Turn off fault LED*/
//			return 0;
//		}
//	}
//	return 1;
//}


//TODO: @Arnav test the averaging function
//sets the throttle value based on the value of received from the front ECU for each wheel.
//This also performs averaging by computing the average of the past 5 samples in order to get a smoother response.
//this is done by setting the compare match value on the PWM output pin. (0-255)
void set_Throttle_Value(uint8_t leftpos, uint8_t rightpos){

	Throttle_L = leftpos;
	Throttle_R = rightpos;
//
//	int i = 0;
//	//rotating the current buffer of throttle samples
//	for(; i < 19; i++) {
//		Throttle_L_buffer[i] = Throttle_L_buffer[i+1];
//		Throttle_R_buffer[i] = Throttle_R_buffer[i+1];
//	}
//	//updating with new sample
//	Throttle_L_buffer[19] = leftpos;
//	Throttle_R_buffer[19] = rightpos;
//	i = 0;
//	//computing the average
//	for(; i < 20; i++) {
//		Throttle_L += Throttle_L_buffer[i];
//		Throttle_R += Throttle_R_buffer[i];
//	}
//	FTM2_C0V = 4*Throttle_L/20;
//	FTM2_C1V = 4*Throttle_R/20;
	FTM2_C0V = 4*Throttle_L;
	FTM2_C1V = 4*Throttle_R;
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
