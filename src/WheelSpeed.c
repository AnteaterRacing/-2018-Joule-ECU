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
#include "UART.h"

/*
 * Defining values needed for calculating wheel speed based on the wheels being observed. The FrontECU is in charge of the front left and front right wheels while the RearECU is in
 * charge of the rear left and rear right wheels. Ideally, only the MAGNET_DETECTION_DISTANCE should be the variable value in the equation used in calculating wheel speed. The
 * frequency and the conversion ratio should not be tempered with unless the frequency used in the PWT module is changed.
 */
#ifdef FrontECU

#define MAGNET_DETECTION_DISTANCE 0.98						// Distance the magnet is sensed on the sensor for the front wheels
#define CONVERSION_RATIO  ((60 * 60 * 1000) / (12 * 5280)) 	// The ratio that converts from inches per millisecond to miles per hour
#define FREQUENCY 156.25 									// The frequency used for the PWT, which is equal to 156.25 KHz
															// The frequency kHz (kilohertz) returns the period in ms (milliseconds) when 1 is divided by it.
#endif

#ifdef RearECU

#define MAGNET_DETECTION_DISTANCE 0.98						// Distance the magnet is sensed on the sensor for the rear wheels
#define CONVERSION_RATIO ((60 * 60 * 1000) / (12 * 5280)) 	// The ratio that converts from inches per millisecond to miles per hour
#define FREQUENCY 156.25 									// The frequency used for the PWT, which is equal to 156.25 KHz
															// The frequency kHz (kilohertz) returns the period in ms (milliseconds) when 1 is divided by it.
#endif

void init_WheelSpeed(void) {
	/*
	 * This function initializes the WheelSpeed buffers and the PWT Module.
	 */
	WheelSpeed[leftWheel] = 0;	//initializing buffer
	WheelSpeed[rightWheel] = 0;	//initializing buffer
	init_PWTModule(); 			//initialize PWT module
	//transmit_string("initialized 1");

}

//calculate wheel speed based on PWT buffer values
void calculateWheelSpeed(void) {
	/*
	 * This function calculates the actual speed based on PWT_buffer value of the appropriate wheel and then stores the value in the correct WheelSpeed buffer.
	 */
	if (0 == (PWT_R1 & PWT_R1_PINSEL_MASK) >> PWT_R1_PINSEL_SHIFT){ // If the PWT was hooked up to the left wheel sensor
		if (PWT_buffer[leftWheel] > 0)	// Prevents dividing by zero error
			WheelSpeed[leftWheel] = round((MAGNET_DETECTION_DISTANCE / (PWT_buffer[leftWheel] / FREQUENCY)) * CONVERSION_RATIO);	// Calculate left wheel speed
	}

	else{
		if (PWT_buffer[rightWheel] > 0)	// Prevents dividing by zero error
			WheelSpeed[rightWheel] = round((MAGNET_DETECTION_DISTANCE / (PWT_buffer[rightWheel] / FREQUENCY)) * CONVERSION_RATIO); 	// Calculate right wheel speed
	}

}
