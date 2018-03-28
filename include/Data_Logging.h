/*
 * Data_Logging.h
 *
 *  Created on: Oct 26, 2017
 *      Author: arnav
 */

#ifndef DATA_LOGGING_H_
#define DATA_LOGGING_H_

//logs any data that is provided at the current timestamp into the output.
//TODO
void log_data(char * data);

//initialize output file mechanism for data logging.
//TODO
void Data_Logging_Init();

//initialize xBee communication unit
//TODO
void xBee_Init();

//TODO
void xBee_Transmit();
//TODO
char * xBee_Receive();

#endif /* DATA_LOGGING_H_ */
