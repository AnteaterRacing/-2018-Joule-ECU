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
#define conversionRatio (60 * 60 * pow(10, 9)) / (63360) // The ratio that converts from inches per nanoseconds to miles per hour

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
		WheelSpeed[leftWheel] = 0;			// If the car is moving slower than 1.5 miles per hour, then we set the speeds to zero.
		WheelSpeed[rightWheel] = 0;
	}
	else{
		leftWheelSpeed = (magnetDectectionDistance / PWT_buffer[leftWheel]) * conversionRatio;	  // Calculating Wheel Speed for each wheel
		rightWheelSpeed = (magnetDectectionDistance / PWT_buffer[rightWheel]) * conversionRatio;

		if (leftWheelSpeed >= 3)								// If the wheel speeds are faster than or equal to our lowest threshold of
			WheelSpeed[leftWheel] = leftWheelSpeed;				// 3 miles per hour, we will set the buffers to the calculated wheel speed.
		else													// Otherwise, we will set them to 0.
			WheelSpeed[leftWheel] = 0;

		if (rightWheelSpeed >= 3)
			WheelSpeed[rightWheel] = rightWheelSpeed;
		else
			WheelSpeed[rightWheel] = 0;
	}


}
