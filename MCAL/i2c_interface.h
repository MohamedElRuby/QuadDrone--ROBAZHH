/*
 * i2c_interface.h
 *
 *  Created on: May 4, 2023
 *      Author: GF
 */

#ifndef I2C_INTERFACE_H_
#define I2C_INTERFACE_H_

#define TW_MR_ARB_LOST 0X3B
#define TW_START 0X0B
#define TW_REP_START 0X10
#define TW_MT_SLA_ACK 0X18
#define TW_MT_DATA_ACK 0X28
#define TW_MR_DATA_NOT_ACK 0X58
#define TW_MR_SLA_NOT_ACK 0X48
#define TW_MT_SLA_NOT_ACK 0X20
#define TW_MT_DATA_NOT_ACK 0X30
#define TW_MR_SLA_ACK 0X50
#define TW_MR_SLA_ACK 0X40

#define read 0
#define write 1

void I2C_Master_Init(u8 copy_u8_slave_address);
void I2C_Slave_Init(u8 copy_u8_slave_address);
void TWIStart(void);
void TWIStop(void);
void TWIWrite(u8 data);
void TWISendSlaveAddress(u8 copy_u8_slave_address, u8 read_write);
u8 TWIReadACK(void);
u8 TWIReadNACK(void);
u8 TWIGetStatus(void);

#endif /* I2C_INTERFACE_H_ */
