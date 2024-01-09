/*
 * BLTH_Program.c
 *
 *  Created on: May 30, 2023
 *      Author: Lenovo
 */

#include "BLTH_Private.h"
#include "BLTH_Interface.h"
#include "BLTH_Config.h"
#include "../MCAL/UART_Interface.h"


#include "../STD_TYPES.h"
#include "../BIT_MATH.h"


u8 BLTH_ReadingValue;

u8 BLTH_u8GetBluetoothReading(void){

	u8 Local_u8Reading;
	Local_u8Reading = UART_u8ReceiveData();


	if(Local_u8Reading == 'F')
	{
		BLTH_ReadingValue = FORWARD;
	}
	else if(Local_u8Reading == 'B')
		{
			BLTH_ReadingValue = BACKWARD;

		}

	else if (Local_u8Reading == 'L'){

		BLTH_ReadingValue = LEFT;

	}

	else if (Local_u8Reading == 'R'){

		BLTH_ReadingValue = RIGHT;
	}
	else if (Local_u8Reading == 'S'){
		BLTH_ReadingValue = STOP;
	}


	return BLTH_ReadingValue;




}
