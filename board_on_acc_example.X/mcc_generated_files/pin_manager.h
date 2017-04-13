/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC18F87K90
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RD0 aliases
#define IO_RD0_TRIS               TRISDbits.TRISD0
#define IO_RD0_LAT                LATDbits.LATD0
#define IO_RD0_PORT               PORTDbits.RD0
#define IO_RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_RD0_GetValue()           PORTDbits.RD0
#define IO_RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)

// get/set SDA2 aliases
#define SDA2_TRIS               TRISDbits.TRISD5
#define SDA2_LAT                LATDbits.LATD5
#define SDA2_PORT               PORTDbits.RD5
#define SDA2_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define SDA2_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define SDA2_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define SDA2_GetValue()           PORTDbits.RD5
#define SDA2_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define SDA2_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)

// get/set SCL2 aliases
#define SCL2_TRIS               TRISDbits.TRISD6
#define SCL2_LAT                LATDbits.LATD6
#define SCL2_PORT               PORTDbits.RD6
#define SCL2_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define SCL2_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define SCL2_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define SCL2_GetValue()           PORTDbits.RD6
#define SCL2_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define SCL2_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/