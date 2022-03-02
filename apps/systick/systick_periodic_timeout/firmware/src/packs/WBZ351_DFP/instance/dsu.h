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
#ifndef _WBZ35_DSU_INSTANCE_
#define _WBZ35_DSU_INSTANCE_


/* ========== Instance Parameter definitions for DSU peripheral ========== */
#define DSU_INSTANCE_ID                          _UL_(32)   
#define DSU_DMAC_ID_DCC0                         _UL_(2)    
#define DSU_DMAC_ID_DCC1                         _UL_(3)    


#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define DSU_PERM_ADDR_START1                     0x4400_0600 /* Permissible address range start */
#define DSU_PERM_ADDR_END1                       0x4400_07FF /* Permissible address range end */
#define DSU_PERM_ADDR_START2                     0x4400_2C00 /* Second permissible address range start */
#define DSU_PERM_ADDR_END2                       0x4400_3BFF /* Second permissible address range end */
#define DSU_FLASH_ADDR_START                     0x0080_0000 /* Flash address start */
#define DSU_FLASH_ADDR_END                       0x0107_FFFF /* Flash address end */
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* _WBZ35_DSU_INSTANCE_ */
