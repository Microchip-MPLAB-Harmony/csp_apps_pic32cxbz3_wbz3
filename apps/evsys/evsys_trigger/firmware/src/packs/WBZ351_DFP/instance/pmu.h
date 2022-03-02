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
#ifndef _WBZ35_PMU_INSTANCE_
#define _WBZ35_PMU_INSTANCE_


/* ========== Instance Parameter definitions for PMU peripheral ========== */
#define PMU_SPI_ADDR_WIDTH                       _UL_(8)    
#define PMU_SPI_DATA_WIDTH                       _UL_(16)   
#define PMU_SPI_DRIVING                          _UL_(0)    /* Falling Edge (Rising Edge / Falling Edge) */
#define PMU_SPI_SAMPLING                         _UL_(0)    /* Falling Edge (Rising Edge / Falling Edge) */
#define PMU_NO_OF_BUCK_SQEQ_REGS                 _UL_(3)    /* Register values to be taken from Analog Design team */
#define PMU_RST_CYCLES                           _UL_(8)    /* Duration of SPI Soft Reset in terms of number of SPI Clock Cycles */
#define PMU_SPI_CTRL_STARTUP_VAL                 _UL_(4)    /* spi_cs_n_mv, spi_clk_mv, spi_dout_mv */
#define PMU_LDO_STARTUP_VAL                      _UL_(0x00) /* Definition and usage refer to Section 3.59 */
#define PMU_MLDO_OPER_VAL                        _UL_(2)    /* buck_en_mv, mldo_en_mv, buck_mode_mv */
#define PMU_BUCK_OPER_VAL                        _UL_(4)    /* {buck_en_mv, mldo_en_mv, buck_mode_mv} */
#define PMU_SW_VAL                               _UL_(6)    /* {buck_en_mv, mldo_en_mv, buck_mode_mv} */
#define PMU_WCM_SIZE                             _UL_(8)    
#define PMU_WCM_TRANSITION_TIME                  _UL_(4)    /* nsbased on feedback from ARM and Design team */
#define PMU_WCM_RET1N_TIME                       _UL_(4)    /* ns based on feedback from  ARM and Design team */
#define PMU_BUCK_SEQ_RETRY_NUM                   _UL_(10)   
#define PMU_NUM_LDO                              _UL_(1)    /* Number of LDOs (4 on Rio) */
#define PMU_WLDO_NUM                             _UL_(3)    /* NA if > NUM_LDOS */
#define PMU_SHARED_LDO_MODE                      _UL_(1)    /* WCM memory Core does not use separate LDO in run and in retention mode */
#define PMU_VBC_INDIRECT_MODE                    _UL_(1)    /* New */

#endif /* _WBZ35_PMU_INSTANCE_ */
