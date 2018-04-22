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


#define CONVERSION_RATIO ((60 * 60 * 0.001) / (63360)) // The ratio that converts from inches per millisecond to miles per hour
#define FREQUENCY (20 / 128) 	// The frequency used for the PWT, which is equal to 156.25 KHz
							// Dividing by kHz (kilohertz) returns ms (milliseconds) .

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
	//transmit_string("calculating");
	if (0 == (PWT_R1 & PWT_R1_PINSEL_MASK) >> PWT_R1_PINSEL_SHIFT){ // If the PWT was hooked up to the left wheel sensor
		WheelSpeed[leftWheel] = (MAGNET_DETECTION_DISTANCE / (PWT_buffer[leftWheel] / FREQUENCY)) * CONVERSION_RATIO; // Calculate left wheel speed
			//transmit_uint8(WheelSpeed[leftWheel]);
		transmit_char('0' + (WheelSpeed[leftWheel] / 1000) % 100);
		transmit_char('0' + (WheelSpeed[leftWheel] / 100));
		transmit_char('0' + (WheelSpeed[leftWheel] / 100) % 10);
		transmit_char('0' + WheelSpeed[leftWheel] % 10);
		transmit_string("\n\r");
	}
	else
		WheelSpeed[rightWheel] = (MAGNET_DETECTION_DISTANCE / (PWT_buffer[rightWheel] / FREQUENCY)) * CONVERSION_RATIO; // Calculate right wheel speed
	//transmit_string("calculate");

}
