/*
 * WheelSpeed.c
 *
 *  Created on: Apr 5, 2018
 *      Author: arnav
 */
#include <PWTModule.h>
#include "derivative.h"
#include "WheelSpeed.h"
#include "main.h"


void init_WheelSpeed(void) {
	WheelSpeed[leftWheel] = 0;	//initializing buffer
	WheelSpeed[rightWheel] = 0;	//initializing buffer
	init_PWTModule(); 			//initialize PWT module
}

//calculate wheel speed based on PWT buffer values
void calculateWheelSpeed(void) {
	//calculate actual speed based on pwt buffer value
	//then put value into WheelSpeed buffer.
}
