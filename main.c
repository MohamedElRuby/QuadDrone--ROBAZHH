/*
 * main.c
 *
 *  Created on: May 1, 2023
 *      Author: ElRuby
 */
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "MCAL/DIO_interface.h"
#include "MCAL/Timer_interface.h"
#include "MCAL/ADC_interface.h"
#include <util/delay.h>

void main(){

	TIM1_voidInitialize();
	ADC_Init();

	u32 x;
	TIM1_voidSetTimerReg(20000); //SET FREQ=50HZ
	u16 angleTime;
	DIO_SetPortDirection(PORTD,PORT_OUTPUT);
	DIO_SetPortDirection(PORTA,PORT_INPUT);


	u8 local_reading;
	local_reading=ADC_Read(0);                         //READ POTENTIOMETER READING FROM PIN 0 , PORT A FOR ATMEGA 32

	while(1){
	u32 map=Mappping (0,255,local_reading,1000,2000);  //MAPPING THE THRUST FROM 1000MS TO 2000MS
	local_reading=ADC_Read(0);
	TIM1_A_voidSetCompareVal(map);                     //OUTPUT FROM ADC READ TO BRUSHLESS MOTOR ESC
	_delay_ms(10);
	}
}




