/*
 * Error.c
 *
 *  Created on: Feb 8, 2018
 *      Author: arnav
 */
#include "Error.h"
#include "derivative.h"
#include "stdlib.h"
#define PTH0 24 			//RED LED
#define PTE7 7				//BLUE LED
#define PTH1 25				//GREEN LED

//exits program based on error code and toggles LED color
void Error_ExitProgram(int errCode){
	switch(errCode){
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
		break;
	}
	exit(-1);
}
