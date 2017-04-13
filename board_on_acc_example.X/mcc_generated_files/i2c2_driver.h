/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef __I2C2_DRIVER_H
#define __I2C2_DRIVER_H

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#define INLINE  inline 

/* arbitration interface */
INLINE void i2c2_driver_close(void);

/* Interrupt interfaces */
INLINE void mssp2_enableIRQ(void);
INLINE bit  mssp2_IRQisEnabled(void);
INLINE void mssp2_disableIRQ(void);
INLINE void mssp2_clearIRQ(void);
INLINE void mssp2_setIRQ(void);
INLINE void mssp2_waitForEvent(uint16_t*);

/* I2C interfaces */
bit  i2c2_driver_driver_open(void);
INLINE char i2c2_driver_getRXData(void);
INLINE char i2c2_driver_getAddr(void);
INLINE void i2c2_driver_setAddr(char addr);
INLINE void i2c2_driver_setMask(char mask);
INLINE void i2c2_driver_TXData(char d);
INLINE void i2c2_driver_resetBus(void);
INLINE void i2c2_driver_start(void);
INLINE void i2c2_driver_restart(void);
INLINE void i2c2_driver_stop(void);
INLINE bit  i2c2_driver_isNACK(void);
INLINE void i2c2_driver_startRX(void);
INLINE void i2c2_driver_sendACK(void);
INLINE void i2c2_driver_sendNACK(void);
INLINE void i2c2_driver_clearBusCollision(void);

bit  i2c2_driver_initSlaveHardware(void);
INLINE void i2c2_driver_releaseClock(void);
INLINE bit i2c2_driver_isBuferFull(void);
INLINE bit i2c2_driver_isStart(void);
INLINE bit i2c2_driver_isStop(void);
INLINE bit i2c2_driver_isAddress(void);
INLINE bit i2c2_driver_isData(void);
INLINE bit i2c2_driver_isRead(void);
INLINE void i2c2_driver_enableStartIRQ(void);
INLINE void i2c2_driver_disableStartIRQ(void);
INLINE void i2c2_driver_enableStopIRQ(void);
INLINE void i2c2_driver_disableStopIRQ(void);

INLINE void i2c2_driver_setBusCollisionISR(void *f);
INLINE void i2c2_driver_setI2cISR(void *f);
void (*i2c2_driver_busCollisionISR)(void);
void (*i2c2_driver_i2cISR)(void);

#endif // __I2C2_DRIVER_H
