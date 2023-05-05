/*
 * I2C_register.h
 *
 *  Created on: May 4, 2023
 *      Author: GF
 */

#ifndef I2C_REGISTER_H_
#define I2C_REGISTER_H_

#define TWCR_register *((volatile u8*)(0X56))
#define TWDR_register *((volatile u8*)(0X23))
#define TWAR_register *((volatile u8*)(0X22))
#define TWSR_register *((volatile u8*)(0X21))
#define TWBR_register *((volatile u8*)(0X20))

//TWCR
#define TWINT 7
#define TWEA 6
#define TWSTA 5
#define TWSTO 4
#define TWWC 3
#define TWEN 2
#define TWIE 0

//TWAR
#define TWA6 7
#define TWA5 6
#define TWA4 5
#define TWA3 4
#define TWA2 3
#define TWA1 2
#define TWA0 1

#endif /* I2C_REGISTER_H_ */
