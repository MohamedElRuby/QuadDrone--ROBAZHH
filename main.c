/*
 * main.c
 *
 *  Created on: May 1, 2023
 *      Author: ElRuby
 */
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "Timer_interface.h"
#include <util/delay.h>

void main(){

	TIM1_voidInitialize();
	TIM1_voidSetTimerReg(20000);
	u16 angleTime;
	DIO_SetPortDirection(PORTD,PORT_OUTPUT);
	TIM1_A_voidSetCompareVal(1000);
}




