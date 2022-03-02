/*
 * Instance header file for WBZ351
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2022-02-03T13:54:44Z */
#ifndef _WBZ35_ADCHS_INSTANCE_
#define _WBZ35_ADCHS_INSTANCE_


/* ========== Instance Parameter definitions for ADCHS peripheral ========== */
#define ADCHS_NUM_INTS                           _UL_(2)    
#define ADCHS_SET_CLR_INV_PRESENT                _UL_(1)    /* Present */
#define ADCHS_ADC_EXTERN_ANALOG_IP               _UL_(0)    /* Microchip SARCORE */
#define ADCHS_ADC_USE_SYNP_MUX                   _UL_(0)    /* Microchip SARCORE */
#define ADCHS_ADC_INPUTS_NMBR                    _UL_(12)   /* Number of Analog ADC Channels */
#define ADCHS_ADC_VREF_STARTUP_TIME              _UL_(50)   /* from Rio-2 */
#define ADCHS_ADC_CORE_CALIBRATE_TIME            _UL_(81)   /* from Rio-2 */
#define ADCHS_ADC_CORES_NMBR                     _UL_(1)    /* Number of SARCOREs */
#define ADCHS_ADC_FCC_NMBR                       _UL_(0)    /* No 1st class channels present */
#define ADCHS_ADC_ITRIG_NMBR                     _UL_(6)    
#define ADCHS_ADC_UPB_FIFO_PRESENT               _UL_(0)    /* FIFO present */
#define ADCHS_ADC_UPB_FIFO_DEPTH                 _UL_(0)    
#define ADCHS_ADC_BVCI_PORT_PRESENT              _UL_(1)    
#define ADCHS_ADC_BVCI_FIFO_DEPTH                _UL_(16)   
#define ADCHS_ADC_BVCI_ADDR_WIDTH                _UL_(15)   
#define ADCHS_ADC_DCMP_NMBR                      _UL_(2)    
#define ADCHS_ADC_FLTR_NMBR                      _UL_(2)    
#define ADCHS_ADC_INTR_NMBR                      _UL_(114)  
#define ADCHS_ADC_EARLY_INTR_PRESENT             _UL_(0)    /* No early interrupts */
#define ADCHS_ADC_32BIT_REG_ADDR                 _UL_(1)    /* 32-bit wide registers */
#define ADCHS_ADC_32BIT_OUTPUT_DATA              _UL_(1)    /* 32-bit wide register data */
#define ADCHS_ADC_CVD_PRESENT                    _UL_(1)    /* CVD present */

#endif /* _WBZ35_ADCHS_INSTANCE_ */
