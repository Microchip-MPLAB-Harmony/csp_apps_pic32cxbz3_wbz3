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

/* file generated from device description version 2022-01-30T18:13:55Z */
#ifndef _WBZ35_PFW_INSTANCE_
#define _WBZ35_PFW_INSTANCE_


/* ========== Instance Parameter definitions for PFW peripheral ========== */
#define PFW_FIXED_BOOT_SEL_BIT                   _UL_(18)   /* The highest bit position that allows address decode to differentiate between fixed and aliased NVR address space. When set, this bit will select fixed NVR space. */
#define PFW_NVR_PANEL_SEL_BIT                    _UL_(16)   /* The highest bit position that allows address decode to differentiate between NVR address space in Panel 1 and Panel 2  (if supported). Note: the value for NVR_PANEL_SEL_BIT will typically be FIXED_BOOT_SEL_BIT-1This parameter is not applicable for Buckland as there is only a single panel */
#define PFW_PFM_PNL_ADDR_MSB                     _UL_(18)   /* The MSb of the PFM Panel Byte Address.For example, an 18 indicates that each PFM panel is 512KBbecause 2(18+1)=512K. */
#define PFW_PAGE_ADDR_MSB                        _UL_(11)   /* The MSb of the Address bit that defines the page size */
#define PFW_FLASH_SIZE_ON_DEVICE                 _UL_(6)    /* Flash size implemented on the device:In a dual panel system, half this value is the size of each panel.0000 = 8KB0001 = 16KB0010 = 32KB0011 = 64KB0100 = 128KB0101 = 256KB'\\0110 = 512KB0111 = 1MB1000 = 2MB1001 = 4MB1010 = 8MB1011 = 16MB1100 - 1111 = RSVD - use 16MBNote: This values does not include the size of the NVR region. */
#define PFW_PFM_NUM_PANELS                       _UL_(1)    /* Number of Flash panels supported in device */
#define PFW_RR_NUM_RECORDS                       _UL_(2)    /* Number of Redundancy Records per Panel. Redundancy Records are 16-bit values. Panels usually have 1 Redundant Page per 512KB.Note: Valid values are 1,2,4,8,16,32. */
#define PFW_NVR_NUM_PAGES                        _UL_(8)    /* Number of Pages in the NVR regionThe following values must be supported: 8, 24 */
#define PFW_PFM_PNL_DATA_MSB                     _UL_(139)  /* The MSb of the data including ECCThe following values are supported.139,271 if PFM_ECC_PRESENT==1127,255 if PFM_ECC_PRESENT==0 */
#define PFW_PFM_DATA_MSB                         _UL_(127)  /* The MSb of the PFM Data (post ECC if implement).The following values are supported.127,255 */
#define PFW_PFM_ECC_PRESENT                      _UL_(1)    /* 0: ECC not supported1: ECC supported */
#define PFW_PFM_CRC_PRESENT                      _UL_(1)    /* 0: CRC not supported1: CRC supported */
#define PFW_FRC_PERIOD_MIN                       _UL_(95)   /* Minimum FRC period (ns) - pre-calibration Power up timing must be met using an uncalibrated FRCNote: This number must be adjusted for the accuracy of the FRC. */
#define PFW_FRC_PERIOD_NOM                       _UL_(119)  /* Nominal FRC period (ns) - post-calibration DPD, Read Mode, etc timing uses a calibrated FRC.Note: This number must be adjusted for the accuracy of the FRC. */
#define PFW_PFM_TDPDH_NS                         _UL_(5000) /* DPD recovery (Tdpdh) delay spec (ns) */
#define PFW_PFM_TDPDS_NS                         _UL_(100)  /* DPD Setup (Tdpds) delay spec (ns) */
#define PFW_PFM_TMS_NS                           _UL_(5000) /* Read Mode Setup (Tcrs or Tms) delay spec (ns) */
#define PFW_PFM_TMH_NS                           _UL_(15)   /* Read Mode Hold (Tcrh or Tmh) delay spec (ns) */
#define PFW_PFM_TRT_NS                           _UL_(1000) /* PORb Release Time (Trt) delay spec (ns):defined from rst_reset_por_n=1 to PORb=1 */
#define PFW_PFM_TRHR_NS                          _UL_(7000) /* POR recovery (Trhr) delay spec (ns) */
#define PFW_PFM_TONWAIT_NS                       _UL_(6000) /* Power-up to any operation (ns): aka tONWAITUsed with tCFG as follows:Actual Delay Required = tONWAIT - tCFG */
#define PFW_PFM_TCFG_NS                          _UL_(1000) /* LKCFG hold (Tcfg) spec (ns): aka tCFGPORb High to LKCFG high */
#define PFW_NUM_INTS                             _UL_(1)    /* Number of interrupts generated by this macro. */
#define PFW_UPB_ADDRL                            _UL_(8000) /* This parameter is the lowest peripheral bus address the peripheral module owns (i.e., the base address) */
#define PFW_UPB_DEFAULT_SPACING                  _UL_(0x0004) 


#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define PFW_BOOT_ADDR_BASE                       0x0000_0000 /* Physical Start address of boot flash memory (system address). Address must be aligned to the NVR size. */
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* _WBZ35_PFW_INSTANCE_ */