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
#include "math.h"

// Defines the ratio to get from inches per nanosecond to miles per hour
#define conversionRatio (60 * 60 * pow(10, 9)) / (63360)

void init_WheelSpeed(void) {
	WheelSpeed[leftWheel] = 0;	//initializing buffer
	WheelSpeed[rightWheel] = 0;	//initializing buffer
	init_PWTModule(); 			//initialize PWT module
}

//calculate wheel speed based on PWT buffer values
void calculateWheelSpeed(void) {
	//calculate actual speed based on pwt buffer value
	//then put value into WheelSpeed buffer.
	int leftWheelSpeed = 0;
	int rightWheelSpeed = 0;

	if (1 == ((PWT_R1 & PWT_R1_PWTOV_MASK) >> PWT_R1_PWTOV_SHIFT)){
		WheelSpeed[leftWheel] = 0;
		WheelSpeed[rightWheel] = 0;
	}
	else{
		leftWheelSpeed = (magnetDectectionDistance / PWT_buffer[leftWheel]) * conversionRatio;
		rightWheelSpeed = (magnetDectectionDistance / PWT_buffer[rightWheel]) * conversionRatio;

		if (leftWheelSpeed >= 3)
			WheelSpeed[leftWheel] = leftWheelSpeed;
		else
			WheelSpeed[leftWheel] = 0;

		if (rightWheelSpeed >= 3)
			WheelSpeed[rightWheel] = rightWheelSpeed;
		else
			WheelSpeed[rightWheel] = 0;
	}


}
