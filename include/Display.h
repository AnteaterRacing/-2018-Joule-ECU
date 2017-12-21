/*
 * Display.h
 *
 *  Created on: Oct 26, 2017
 *      Author: arnav
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

//converts uint32 to a string for easier display and output. (used for ADC)
//TODO
char* uint32t_as_str(uint32_t value);

//returns the status of the system as a string whenever called
//TODO
char* get_status_str();

//prints the status to UART whenever called.
//TODO
void print_status_UART();

#endif /* DISPLAY_H_ */
