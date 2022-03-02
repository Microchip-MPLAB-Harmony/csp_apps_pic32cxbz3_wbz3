/*
 * Component description for SILEX
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
#ifndef _WBZ35_SILEX_COMPONENT_H_
#define _WBZ35_SILEX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SILEX                                        */
/* ************************************************************************** */

/* -------- SILEX_DMA_FETCH_ADDR_LSB : (SILEX Offset: 0x00) (R/W 32)  -------- */
#define SILEX_DMA_FETCH_ADDR_LSB_RESETVALUE   _U_(0x00)                                            /**<  (SILEX_DMA_FETCH_ADDR_LSB)   Reset Value */

#define SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Pos _U_(0)                                               /**< (SILEX_DMA_FETCH_ADDR_LSB)  Position */
#define SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Msk (_U_(0xFFFFFFFF) << SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Pos) /**< (SILEX_DMA_FETCH_ADDR_LSB)  Mask */
#define SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB(value) (SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Msk & ((value) << SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Pos))
#define SILEX_DMA_FETCH_ADDR_LSB_Msk          _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_FETCH_ADDR_LSB) Register Mask  */


/* -------- SILEX_DMA_FETCH_ADDR_MSB : (SILEX Offset: 0x04) (R/W 32)  -------- */
#define SILEX_DMA_FETCH_ADDR_MSB_RESETVALUE   _U_(0x00)                                            /**<  (SILEX_DMA_FETCH_ADDR_MSB)   Reset Value */

#define SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Pos _U_(0)                                               /**< (SILEX_DMA_FETCH_ADDR_MSB)  Position */
#define SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Msk (_U_(0xFFFFFFFF) << SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Pos) /**< (SILEX_DMA_FETCH_ADDR_MSB)  Mask */
#define SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB(value) (SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Msk & ((value) << SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Pos))
#define SILEX_DMA_FETCH_ADDR_MSB_Msk          _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_FETCH_ADDR_MSB) Register Mask  */


/* -------- SILEX_DMA_FETCH_LEN : (SILEX Offset: 0x08) (R/W 32)  -------- */
#define SILEX_DMA_FETCH_LEN_RESETVALUE        _U_(0x00)                                            /**<  (SILEX_DMA_FETCH_LEN)   Reset Value */

#define SILEX_DMA_FETCH_LEN_FETCH_LEN_Pos     _U_(0)                                               /**< (SILEX_DMA_FETCH_LEN)  Position */
#define SILEX_DMA_FETCH_LEN_FETCH_LEN_Msk     (_U_(0xFFFFFFF) << SILEX_DMA_FETCH_LEN_FETCH_LEN_Pos) /**< (SILEX_DMA_FETCH_LEN)  Mask */
#define SILEX_DMA_FETCH_LEN_FETCH_LEN(value)  (SILEX_DMA_FETCH_LEN_FETCH_LEN_Msk & ((value) << SILEX_DMA_FETCH_LEN_FETCH_LEN_Pos))
#define SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Pos _U_(28)                                              /**< (SILEX_DMA_FETCH_LEN)  Position */
#define SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Msk (_U_(0x1) << SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Pos)  /**< (SILEX_DMA_FETCH_LEN)  Mask */
#define SILEX_DMA_FETCH_LEN_FETCH_CSTADDR(value) (SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Msk & ((value) << SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Pos))
#define SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Pos _U_(29)                                              /**< (SILEX_DMA_FETCH_LEN)  Position */
#define SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Msk (_U_(0x1) << SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Pos)  /**< (SILEX_DMA_FETCH_LEN)  Mask */
#define SILEX_DMA_FETCH_LEN_FETCH_REALIGN(value) (SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Msk & ((value) << SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Pos))
#define SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Pos _U_(30)                                              /**< (SILEX_DMA_FETCH_LEN)  Position */
#define SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Msk (_U_(0x1) << SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Pos) /**< (SILEX_DMA_FETCH_LEN)  Mask */
#define SILEX_DMA_FETCH_LEN_FETCH_ZPADDING(value) (SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Msk & ((value) << SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Pos))
#define SILEX_DMA_FETCH_LEN_Msk               _U_(0x7FFFFFFF)                                      /**< (SILEX_DMA_FETCH_LEN) Register Mask  */


/* -------- SILEX_DMA_FETCH_TAG : (SILEX Offset: 0x0C) (R/W 32)  -------- */
#define SILEX_DMA_FETCH_TAG_RESETVALUE        _U_(0x00)                                            /**<  (SILEX_DMA_FETCH_TAG)   Reset Value */

#define SILEX_DMA_FETCH_TAG_FETCH_TAG_Pos     _U_(0)                                               /**< (SILEX_DMA_FETCH_TAG)  Position */
#define SILEX_DMA_FETCH_TAG_FETCH_TAG_Msk     (_U_(0xFFFFFFFF) << SILEX_DMA_FETCH_TAG_FETCH_TAG_Pos) /**< (SILEX_DMA_FETCH_TAG)  Mask */
#define SILEX_DMA_FETCH_TAG_FETCH_TAG(value)  (SILEX_DMA_FETCH_TAG_FETCH_TAG_Msk & ((value) << SILEX_DMA_FETCH_TAG_FETCH_TAG_Pos))
#define SILEX_DMA_FETCH_TAG_Msk               _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_FETCH_TAG) Register Mask  */


/* -------- SILEX_DMA_PUSH_ADDR_LSB : (SILEX Offset: 0x10) (R/W 32)  -------- */
#define SILEX_DMA_PUSH_ADDR_LSB_RESETVALUE    _U_(0x00)                                            /**<  (SILEX_DMA_PUSH_ADDR_LSB)   Reset Value */

#define SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Pos _U_(0)                                               /**< (SILEX_DMA_PUSH_ADDR_LSB)  Position */
#define SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Msk (_U_(0xFFFFFFFF) << SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Pos) /**< (SILEX_DMA_PUSH_ADDR_LSB)  Mask */
#define SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB(value) (SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Msk & ((value) << SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Pos))
#define SILEX_DMA_PUSH_ADDR_LSB_Msk           _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_PUSH_ADDR_LSB) Register Mask  */


/* -------- SILEX_DMA_PUSH_ADDR_MSB : (SILEX Offset: 0x14) (R/W 32)  -------- */
#define SILEX_DMA_PUSH_ADDR_MSB_RESETVALUE    _U_(0x00)                                            /**<  (SILEX_DMA_PUSH_ADDR_MSB)   Reset Value */

#define SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Pos _U_(0)                                               /**< (SILEX_DMA_PUSH_ADDR_MSB)  Position */
#define SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Msk (_U_(0xFFFFFFFF) << SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Pos) /**< (SILEX_DMA_PUSH_ADDR_MSB)  Mask */
#define SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB(value) (SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Msk & ((value) << SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Pos))
#define SILEX_DMA_PUSH_ADDR_MSB_Msk           _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_PUSH_ADDR_MSB) Register Mask  */


/* -------- SILEX_DMA_PUSH_LEN : (SILEX Offset: 0x18) (R/W 32)  -------- */
#define SILEX_DMA_PUSH_LEN_RESETVALUE         _U_(0x00)                                            /**<  (SILEX_DMA_PUSH_LEN)   Reset Value */

#define SILEX_DMA_PUSH_LEN_PUSH_LEN_Pos       _U_(0)                                               /**< (SILEX_DMA_PUSH_LEN)  Position */
#define SILEX_DMA_PUSH_LEN_PUSH_LEN_Msk       (_U_(0xFFFFFFF) << SILEX_DMA_PUSH_LEN_PUSH_LEN_Pos)  /**< (SILEX_DMA_PUSH_LEN)  Mask */
#define SILEX_DMA_PUSH_LEN_PUSH_LEN(value)    (SILEX_DMA_PUSH_LEN_PUSH_LEN_Msk & ((value) << SILEX_DMA_PUSH_LEN_PUSH_LEN_Pos))
#define SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Pos   _U_(28)                                              /**< (SILEX_DMA_PUSH_LEN)  Position */
#define SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Msk   (_U_(0x1) << SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Pos)    /**< (SILEX_DMA_PUSH_LEN)  Mask */
#define SILEX_DMA_PUSH_LEN_PUSH_CSTADDR(value) (SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Msk & ((value) << SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Pos))
#define SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Pos   _U_(29)                                              /**< (SILEX_DMA_PUSH_LEN)  Position */
#define SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Msk   (_U_(0x1) << SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Pos)    /**< (SILEX_DMA_PUSH_LEN)  Mask */
#define SILEX_DMA_PUSH_LEN_PUSH_REALIGN(value) (SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Msk & ((value) << SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Pos))
#define SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Pos   _U_(30)                                              /**< (SILEX_DMA_PUSH_LEN)  Position */
#define SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Msk   (_U_(0x1) << SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Pos)    /**< (SILEX_DMA_PUSH_LEN)  Mask */
#define SILEX_DMA_PUSH_LEN_PUSH_DISCARD(value) (SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Msk & ((value) << SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Pos))
#define SILEX_DMA_PUSH_LEN_Msk                _U_(0x7FFFFFFF)                                      /**< (SILEX_DMA_PUSH_LEN) Register Mask  */


/* -------- SILEX_DMA_INT_EN : (SILEX Offset: 0x1C) (R/W 32)  -------- */
#define SILEX_DMA_INT_EN_RESETVALUE           _U_(0x00)                                            /**<  (SILEX_DMA_INT_EN)   Reset Value */

#define SILEX_DMA_INT_EN_INT_EN_Pos           _U_(0)                                               /**< (SILEX_DMA_INT_EN)  Position */
#define SILEX_DMA_INT_EN_INT_EN_Msk           (_U_(0xFFFFFFFF) << SILEX_DMA_INT_EN_INT_EN_Pos)     /**< (SILEX_DMA_INT_EN)  Mask */
#define SILEX_DMA_INT_EN_INT_EN(value)        (SILEX_DMA_INT_EN_INT_EN_Msk & ((value) << SILEX_DMA_INT_EN_INT_EN_Pos))
#define SILEX_DMA_INT_EN_Msk                  _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_INT_EN) Register Mask  */


/* -------- SILEX_DMA_INT_ENSET : (SILEX Offset: 0x20) ( /W 32)  -------- */
#define SILEX_DMA_INT_ENSET_RESETVALUE        _U_(0x00)                                            /**<  (SILEX_DMA_INT_ENSET)   Reset Value */

#define SILEX_DMA_INT_ENSET_INT_ENSET_Pos     _U_(0)                                               /**< (SILEX_DMA_INT_ENSET)  Position */
#define SILEX_DMA_INT_ENSET_INT_ENSET_Msk     (_U_(0xFFFFFFFF) << SILEX_DMA_INT_ENSET_INT_ENSET_Pos) /**< (SILEX_DMA_INT_ENSET)  Mask */
#define SILEX_DMA_INT_ENSET_INT_ENSET(value)  (SILEX_DMA_INT_ENSET_INT_ENSET_Msk & ((value) << SILEX_DMA_INT_ENSET_INT_ENSET_Pos))
#define SILEX_DMA_INT_ENSET_Msk               _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_INT_ENSET) Register Mask  */


/* -------- SILEX_DMA_INT_ENCLR : (SILEX Offset: 0x24) ( /W 32)  -------- */
#define SILEX_DMA_INT_ENCLR_RESETVALUE        _U_(0x00)                                            /**<  (SILEX_DMA_INT_ENCLR)   Reset Value */

#define SILEX_DMA_INT_ENCLR_INT_ENCLR_Pos     _U_(0)                                               /**< (SILEX_DMA_INT_ENCLR)  Position */
#define SILEX_DMA_INT_ENCLR_INT_ENCLR_Msk     (_U_(0xFFFFFFFF) << SILEX_DMA_INT_ENCLR_INT_ENCLR_Pos) /**< (SILEX_DMA_INT_ENCLR)  Mask */
#define SILEX_DMA_INT_ENCLR_INT_ENCLR(value)  (SILEX_DMA_INT_ENCLR_INT_ENCLR_Msk & ((value) << SILEX_DMA_INT_ENCLR_INT_ENCLR_Pos))
#define SILEX_DMA_INT_ENCLR_Msk               _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_INT_ENCLR) Register Mask  */


/* -------- SILEX_DMA_INT_STATRAW : (SILEX Offset: 0x28) ( R/ 32)  -------- */
#define SILEX_DMA_INT_STATRAW_RESETVALUE      _U_(0x00)                                            /**<  (SILEX_DMA_INT_STATRAW)   Reset Value */

#define SILEX_DMA_INT_STATRAW_INT_STATRAW_Pos _U_(0)                                               /**< (SILEX_DMA_INT_STATRAW)  Position */
#define SILEX_DMA_INT_STATRAW_INT_STATRAW_Msk (_U_(0xFFFFFFFF) << SILEX_DMA_INT_STATRAW_INT_STATRAW_Pos) /**< (SILEX_DMA_INT_STATRAW)  Mask */
#define SILEX_DMA_INT_STATRAW_INT_STATRAW(value) (SILEX_DMA_INT_STATRAW_INT_STATRAW_Msk & ((value) << SILEX_DMA_INT_STATRAW_INT_STATRAW_Pos))
#define SILEX_DMA_INT_STATRAW_Msk             _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_INT_STATRAW) Register Mask  */


/* -------- SILEX_DMA_INT_STAT : (SILEX Offset: 0x2C) ( R/ 32)  -------- */
#define SILEX_DMA_INT_STAT_RESETVALUE         _U_(0x00)                                            /**<  (SILEX_DMA_INT_STAT)   Reset Value */

#define SILEX_DMA_INT_STAT_INT_STAT_Pos       _U_(0)                                               /**< (SILEX_DMA_INT_STAT)  Position */
#define SILEX_DMA_INT_STAT_INT_STAT_Msk       (_U_(0xFFFFFFFF) << SILEX_DMA_INT_STAT_INT_STAT_Pos) /**< (SILEX_DMA_INT_STAT)  Mask */
#define SILEX_DMA_INT_STAT_INT_STAT(value)    (SILEX_DMA_INT_STAT_INT_STAT_Msk & ((value) << SILEX_DMA_INT_STAT_INT_STAT_Pos))
#define SILEX_DMA_INT_STAT_Msk                _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_INT_STAT) Register Mask  */


/* -------- SILEX_DMA_INT_STATCLR : (SILEX Offset: 0x30) ( /W 32)  -------- */
#define SILEX_DMA_INT_STATCLR_RESETVALUE      _U_(0x00)                                            /**<  (SILEX_DMA_INT_STATCLR)   Reset Value */

#define SILEX_DMA_INT_STATCLR_INT_STATCLR_Pos _U_(0)                                               /**< (SILEX_DMA_INT_STATCLR)  Position */
#define SILEX_DMA_INT_STATCLR_INT_STATCLR_Msk (_U_(0xFFFFFFFF) << SILEX_DMA_INT_STATCLR_INT_STATCLR_Pos) /**< (SILEX_DMA_INT_STATCLR)  Mask */
#define SILEX_DMA_INT_STATCLR_INT_STATCLR(value) (SILEX_DMA_INT_STATCLR_INT_STATCLR_Msk & ((value) << SILEX_DMA_INT_STATCLR_INT_STATCLR_Pos))
#define SILEX_DMA_INT_STATCLR_Msk             _U_(0xFFFFFFFF)                                      /**< (SILEX_DMA_INT_STATCLR) Register Mask  */


/* -------- SILEX_DMA_CONFIG : (SILEX Offset: 0x34) (R/W 32)  -------- */
#define SILEX_DMA_CONFIG_RESETVALUE           _U_(0x00)                                            /**<  (SILEX_DMA_CONFIG)   Reset Value */

#define SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Pos _U_(0)                                               /**< (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Msk (_U_(0x1) << SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Pos) /**< (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT(value) (SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Msk & ((value) << SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Pos))
#define SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Pos _U_(1)                                               /**< (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Msk (_U_(0x1) << SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Pos) /**< (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT(value) (SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Msk & ((value) << SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Pos))
#define SILEX_DMA_CONFIG_FETCH_STOP_Pos       _U_(2)                                               /**< (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_FETCH_STOP_Msk       (_U_(0x1) << SILEX_DMA_CONFIG_FETCH_STOP_Pos)        /**< (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_FETCH_STOP(value)    (SILEX_DMA_CONFIG_FETCH_STOP_Msk & ((value) << SILEX_DMA_CONFIG_FETCH_STOP_Pos))
#define SILEX_DMA_CONFIG_PUSH_STOP_Pos        _U_(3)                                               /**< (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_PUSH_STOP_Msk        (_U_(0x1) << SILEX_DMA_CONFIG_PUSH_STOP_Pos)         /**< (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_PUSH_STOP(value)     (SILEX_DMA_CONFIG_PUSH_STOP_Msk & ((value) << SILEX_DMA_CONFIG_PUSH_STOP_Pos))
#define SILEX_DMA_CONFIG_SOFT_RST_Pos         _U_(4)                                               /**< (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_SOFT_RST_Msk         (_U_(0x1) << SILEX_DMA_CONFIG_SOFT_RST_Pos)          /**< (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_SOFT_RST(value)      (SILEX_DMA_CONFIG_SOFT_RST_Msk & ((value) << SILEX_DMA_CONFIG_SOFT_RST_Pos))
#define SILEX_DMA_CONFIG_Msk                  _U_(0x0000001F)                                      /**< (SILEX_DMA_CONFIG) Register Mask  */


/* -------- SILEX_DMA_START : (SILEX Offset: 0x38) ( /W 32)  -------- */
#define SILEX_DMA_START_RESETVALUE            _U_(0x00)                                            /**<  (SILEX_DMA_START)   Reset Value */

#define SILEX_DMA_START_START_FETCH_Pos       _U_(0)                                               /**< (SILEX_DMA_START)  Position */
#define SILEX_DMA_START_START_FETCH_Msk       (_U_(0x1) << SILEX_DMA_START_START_FETCH_Pos)        /**< (SILEX_DMA_START)  Mask */
#define SILEX_DMA_START_START_FETCH(value)    (SILEX_DMA_START_START_FETCH_Msk & ((value) << SILEX_DMA_START_START_FETCH_Pos))
#define SILEX_DMA_START_START_PUSH_Pos        _U_(1)                                               /**< (SILEX_DMA_START)  Position */
#define SILEX_DMA_START_START_PUSH_Msk        (_U_(0x1) << SILEX_DMA_START_START_PUSH_Pos)         /**< (SILEX_DMA_START)  Mask */
#define SILEX_DMA_START_START_PUSH(value)     (SILEX_DMA_START_START_PUSH_Msk & ((value) << SILEX_DMA_START_START_PUSH_Pos))
#define SILEX_DMA_START_Msk                   _U_(0x00000003)                                      /**< (SILEX_DMA_START) Register Mask  */


/* -------- SILEX_DMA_STATUS : (SILEX Offset: 0x3C) ( R/ 32)  -------- */
#define SILEX_DMA_STATUS_RESETVALUE           _U_(0x00)                                            /**<  (SILEX_DMA_STATUS)   Reset Value */

#define SILEX_DMA_STATUS_FETCH_BUSY_Pos       _U_(0)                                               /**< (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_FETCH_BUSY_Msk       (_U_(0x1) << SILEX_DMA_STATUS_FETCH_BUSY_Pos)        /**< (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_FETCH_BUSY(value)    (SILEX_DMA_STATUS_FETCH_BUSY_Msk & ((value) << SILEX_DMA_STATUS_FETCH_BUSY_Pos))
#define SILEX_DMA_STATUS_PUSH_BUSY_Pos        _U_(1)                                               /**< (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_PUSH_BUSY_Msk        (_U_(0x1) << SILEX_DMA_STATUS_PUSH_BUSY_Pos)         /**< (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_PUSH_BUSY(value)     (SILEX_DMA_STATUS_PUSH_BUSY_Msk & ((value) << SILEX_DMA_STATUS_PUSH_BUSY_Pos))
#define SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Pos  _U_(4)                                               /**< (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Msk  (_U_(0x1) << SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Pos)   /**< (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_FETCH_NOT_EMPTY(value) (SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Msk & ((value) << SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Pos))
#define SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Pos _U_(5)                                               /**< (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Msk (_U_(0x1) << SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Pos)  /**< (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_PUSH_WAITINGFIFO(value) (SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Msk & ((value) << SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Pos))
#define SILEX_DMA_STATUS_SOFT_RST_BUSY_Pos    _U_(6)                                               /**< (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_SOFT_RST_BUSY_Msk    (_U_(0x1) << SILEX_DMA_STATUS_SOFT_RST_BUSY_Pos)     /**< (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_SOFT_RST_BUSY(value) (SILEX_DMA_STATUS_SOFT_RST_BUSY_Msk & ((value) << SILEX_DMA_STATUS_SOFT_RST_BUSY_Pos))
#define SILEX_DMA_STATUS_PUSH_NBDATA_Pos      _U_(16)                                              /**< (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_PUSH_NBDATA_Msk      (_U_(0xFFFF) << SILEX_DMA_STATUS_PUSH_NBDATA_Pos)    /**< (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_PUSH_NBDATA(value)   (SILEX_DMA_STATUS_PUSH_NBDATA_Msk & ((value) << SILEX_DMA_STATUS_PUSH_NBDATA_Pos))
#define SILEX_DMA_STATUS_Msk                  _U_(0xFFFF0073)                                      /**< (SILEX_DMA_STATUS) Register Mask  */


/* -------- SILEX_HWCONF_INCL_IPS_HW_CFG : (SILEX Offset: 0x400) ( R/ 32)  -------- */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_RESETVALUE _U_(0x00)                                            /**<  (SILEX_HWCONF_INCL_IPS_HW_CFG)   Reset Value */

#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Pos _U_(0)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAES value. BA411E-AES IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAES value. BA411E-AES IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Pos _U_(1)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAESGCM value. BA415-HP-AES-GCM IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAESGCM value. BA415-HP-AES-GCM IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Pos _U_(2)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAESXTS value. BA416-HP-AES-XTS IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAESXTS value. BA416-HP-AES-XTS IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Pos _U_(3)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeDES value. BA412-3DES IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeDES value. BA412-3DES IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Pos _U_(4)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeHASH value. BA413-HASH IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeHASH value. BA413-HASH IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Pos _U_(5)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeChachaPoly value. BA417-ChaChaPoly IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeChachaPoly value. BA417-ChaChaPoly IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Pos _U_(6)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSHA3  value. BA418-SHA3 IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSHA3  value. BA418-SHA3 IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Pos _U_(7)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeZUC  value. BA421-ZUC IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeZUC  value. BA421-ZUC IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Pos _U_(8)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSM4  value. BA419-SM4 IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSM4  value. BA419-SM4 IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Pos _U_(9)                                               /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludePKE  value. BA414EP-PKE IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludePKE  value. BA414EP-PKE IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Pos _U_(10)                                              /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeNDRNG  value. BA431-NDRNG IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeNDRNG  value. BA431-NDRNG IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Pos _U_(11)                                              /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeHPChachaPoly  value. BA420-HP-ChaChaPoly IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeHPChachaPoly  value. BA420-HP-ChaChaPoly IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Pos _U_(12)                                              /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSnow3G  value. BA423-Snow3G IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSnow3G  value. BA423-Snow3G IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Pos _U_(13)                                              /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeKasumi  value. BA422-Kasumi IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Msk (_U_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Pos) /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeKasumi  value. BA422-Kasumi IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Msk & ((value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Pos))
#define SILEX_HWCONF_INCL_IPS_HW_CFG_Msk      _U_(0x00003FFF)                                      /**< (SILEX_HWCONF_INCL_IPS_HW_CFG) Register Mask  */


/* -------- SILEX_HWCONF_BA411E_AES_HW_CFG_1 : (SILEX Offset: 0x404) ( R/ 32)  -------- */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_RESETVALUE _U_(0x00)                                            /**<  (SILEX_HWCONF_BA411E_AES_HW_CFG_1)   Reset Value */

#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Pos _U_(0)                                               /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_AesModesPoss value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Msk (_U_(0x1FF) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Pos) /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_AesModesPoss value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Msk & ((value) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Pos))
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Pos _U_(16)                                              /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_CS value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Msk (_U_(0x1) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Pos) /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_CS value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Msk & ((value) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Pos))
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Pos _U_(17)                                              /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_UseMasking value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Msk (_U_(0x1) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Pos) /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_UseMasking value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Msk & ((value) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Pos))
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Pos _U_(24)                                              /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_Keysize value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Msk (_U_(0x7) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Pos) /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_Keysize value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Msk & ((value) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Pos))
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_Msk  _U_(0x070301FF)                                      /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Register Mask  */


/* -------- SILEX_HWCONF_BA411E_AES_HW_CFG_2 : (SILEX Offset: 0x408) ( R/ 32) Generic g_CtrSize value. BA411E-AES engine configuration. -------- */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_RESETVALUE _U_(0x00)                                            /**<  (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration.  Reset Value */

#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Pos _U_(0)                                               /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Msk (_U_(0xFFFF) << SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Pos) /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Msk & ((value) << SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Pos))
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_Msk  _U_(0x0000FFFF)                                      /**< (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Register Mask  */


/* -------- SILEX_HWCONF_BA413_HASH_HW_CFG : (SILEX Offset: 0x40C) ( R/ 32)  -------- */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_RESETVALUE _U_(0x00)                                            /**<  (SILEX_HWCONF_BA413_HASH_HW_CFG)   Reset Value */

#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Pos _U_(0)                                               /**< (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashMaskFunc value. BA413-Hash engine configuration. Position */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Msk (_U_(0x7F) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Pos) /**< (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashMaskFunc value. BA413-Hash engine configuration. Mask */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK(value) (SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Msk & ((value) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Pos))
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Pos _U_(16)                                              /**< (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashPadding value. BA413-Hash engine configuration. Position */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Msk (_U_(0x1) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Pos) /**< (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashPadding value. BA413-Hash engine configuration. Mask */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING(value) (SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Msk & ((value) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Pos))
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Pos _U_(17)                                              /**< (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HMAC_enabled value. BA413-Hash engine configuration. Position */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Msk (_U_(0x1) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Pos) /**< (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HMAC_enabled value. BA413-Hash engine configuration. Mask */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC(value) (SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Msk & ((value) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Pos))
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Pos _U_(18)                                              /**< (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashVerifyDigest value. BA413-Hash engine configuration. Position */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Msk (_U_(0x1) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Pos) /**< (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashVerifyDigest value. BA413-Hash engine configuration. Mask */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST(value) (SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Msk & ((value) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Pos))
#define SILEX_HWCONF_BA413_HASH_HW_CFG_Msk    _U_(0x0007007F)                                      /**< (SILEX_HWCONF_BA413_HASH_HW_CFG) Register Mask  */


/* -------- SILEX_HWCONF_BA418_SHA3_HW_CFG : (SILEX Offset: 0x410) ( R/ 32) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. -------- */
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_RESETVALUE _U_(0x00)                                            /**<  (SILEX_HWCONF_BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration.  Reset Value */

#define SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Pos _U_(0)                                               /**< (SILEX_HWCONF_BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. Position */
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Msk (_U_(0x1) << SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Pos) /**< (SILEX_HWCONF_BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. Mask */
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG(value) (SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Msk & ((value) << SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Pos))
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_Msk    _U_(0x00000001)                                      /**< (SILEX_HWCONF_BA418_SHA3_HW_CFG) Register Mask  */


/* -------- SILEX_HWCONF_BA419_SM4_HW_CFG : (SILEX Offset: 0x414) ( R/ 32) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. -------- */
#define SILEX_HWCONF_BA419_SM4_HW_CFG_RESETVALUE _U_(0x00)                                            /**<  (SILEX_HWCONF_BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration.  Reset Value */

#define SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Pos _U_(0)                                               /**< (SILEX_HWCONF_BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. Position */
#define SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Msk (_U_(0x7F) << SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Pos) /**< (SILEX_HWCONF_BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. Mask */
#define SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG(value) (SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Msk & ((value) << SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Pos))
#define SILEX_HWCONF_BA419_SM4_HW_CFG_Msk     _U_(0x0000007F)                                      /**< (SILEX_HWCONF_BA419_SM4_HW_CFG) Register Mask  */


/* -------- SILEX_HWCONF_BA424_ARIA_HW_CFG : (SILEX Offset: 0x418) ( R/ 32) Generic g_aria_modePoss value. BA424-Aria engine configuration. -------- */
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_RESETVALUE _U_(0x00)                                            /**<  (SILEX_HWCONF_BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration.  Reset Value */

#define SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Pos _U_(0)                                               /**< (SILEX_HWCONF_BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration. Position */
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Msk (_U_(0x1FF) << SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Pos) /**< (SILEX_HWCONF_BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration. Mask */
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG(value) (SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Msk & ((value) << SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Pos))
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_Msk    _U_(0x000001FF)                                      /**< (SILEX_HWCONF_BA424_ARIA_HW_CFG) Register Mask  */


/* -------- SILEX_RNG_CONTROL_CONTROL : (SILEX Offset: 0x1000) (R/W 32) Control register -------- */
#define SILEX_RNG_CONTROL_CONTROL_RESETVALUE  _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_CONTROL) Control register  Reset Value */

#define SILEX_RNG_CONTROL_CONTROL_ENABLE_Pos  _U_(0)                                               /**< (SILEX_RNG_CONTROL_CONTROL) Enable the NDRNG. Position */
#define SILEX_RNG_CONTROL_CONTROL_ENABLE_Msk  (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_ENABLE_Pos)   /**< (SILEX_RNG_CONTROL_CONTROL) Enable the NDRNG. Mask */
#define SILEX_RNG_CONTROL_CONTROL_ENABLE(value) (SILEX_RNG_CONTROL_CONTROL_ENABLE_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_ENABLE_Pos))
#define SILEX_RNG_CONTROL_CONTROL_LFSREN_Pos  _U_(1)                                               /**< (SILEX_RNG_CONTROL_CONTROL) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Position */
#define SILEX_RNG_CONTROL_CONTROL_LFSREN_Msk  (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_LFSREN_Pos)   /**< (SILEX_RNG_CONTROL_CONTROL) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Mask */
#define SILEX_RNG_CONTROL_CONTROL_LFSREN(value) (SILEX_RNG_CONTROL_CONTROL_LFSREN_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_LFSREN_Pos))
#define SILEX_RNG_CONTROL_CONTROL_TESTEN_Pos  _U_(2)                                               /**< (SILEX_RNG_CONTROL_CONTROL) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Position */
#define SILEX_RNG_CONTROL_CONTROL_TESTEN_Msk  (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_TESTEN_Pos)   /**< (SILEX_RNG_CONTROL_CONTROL) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Mask */
#define SILEX_RNG_CONTROL_CONTROL_TESTEN(value) (SILEX_RNG_CONTROL_CONTROL_TESTEN_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_TESTEN_Pos))
#define SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Pos _U_(3)                                               /**< (SILEX_RNG_CONTROL_CONTROL) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Position */
#define SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Mask */
#define SILEX_RNG_CONTROL_CONTROL_CONDBYPASS(value) (SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Pos))
#define SILEX_RNG_CONTROL_CONTROL_INTENREP_Pos _U_(4)                                               /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for Repetition Count Test failure. Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENREP_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENREP_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for Repetition Count Test failure. Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENREP(value) (SILEX_RNG_CONTROL_CONTROL_INTENREP_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_INTENREP_Pos))
#define SILEX_RNG_CONTROL_CONTROL_INTENPROP_Pos _U_(5)                                               /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENPROP_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENPROP_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENPROP(value) (SILEX_RNG_CONTROL_CONTROL_INTENPROP_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_INTENPROP_Pos))
#define SILEX_RNG_CONTROL_CONTROL_INTENFULL_Pos _U_(7)                                               /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for FIFO full. Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENFULL_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENFULL_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for FIFO full. Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENFULL(value) (SILEX_RNG_CONTROL_CONTROL_INTENFULL_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_INTENFULL_Pos))
#define SILEX_RNG_CONTROL_CONTROL_SOFTRST_Pos _U_(8)                                               /**< (SILEX_RNG_CONTROL_CONTROL) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Position */
#define SILEX_RNG_CONTROL_CONTROL_SOFTRST_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_SOFTRST_Pos)  /**< (SILEX_RNG_CONTROL_CONTROL) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Mask */
#define SILEX_RNG_CONTROL_CONTROL_SOFTRST(value) (SILEX_RNG_CONTROL_CONTROL_SOFTRST_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_SOFTRST_Pos))
#define SILEX_RNG_CONTROL_CONTROL_INTENPRE_Pos _U_(9)                                               /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for AIS31 preliminary noise alarm. Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENPRE_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENPRE_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for AIS31 preliminary noise alarm. Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENPRE(value) (SILEX_RNG_CONTROL_CONTROL_INTENPRE_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_INTENPRE_Pos))
#define SILEX_RNG_CONTROL_CONTROL_INTENALM_Pos _U_(10)                                              /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for AIS31 noise alarm. Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENALM_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENALM_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for AIS31 noise alarm. Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENALM(value) (SILEX_RNG_CONTROL_CONTROL_INTENALM_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_INTENALM_Pos))
#define SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Pos _U_(11)                                              /**< (SILEX_RNG_CONTROL_CONTROL) Force oscillators to run when FIFO is full. Position */
#define SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Force oscillators to run when FIFO is full. Mask */
#define SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS(value) (SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Pos))
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Pos _U_(12)                                              /**< (SILEX_RNG_CONTROL_CONTROL) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Position */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Mask */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS(value) (SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Pos))
#define SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Pos _U_(13)                                              /**< (SILEX_RNG_CONTROL_CONTROL) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Position */
#define SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Mask */
#define SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS(value) (SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Pos))
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Pos _U_(14)                                              /**< (SILEX_RNG_CONTROL_CONTROL) Select input to health test module: 0: Before conditioning, 1: After conditioning. Position */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Select input to health test module: 0: Before conditioning, 1: After conditioning. Mask */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL(value) (SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Pos))
#define SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Pos _U_(15)                                              /**< (SILEX_RNG_CONTROL_CONTROL) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Position */
#define SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Mask */
#define SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL(value) (SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Pos))
#define SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Pos _U_(16)                                              /**< (SILEX_RNG_CONTROL_CONTROL) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Position */
#define SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Msk (_U_(0xF) << SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Mask */
#define SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS(value) (SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Pos))
#define SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Pos _U_(20)                                              /**< (SILEX_RNG_CONTROL_CONTROL) Enable write of the samples in the FIFO during start-up. Position */
#define SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Msk (_U_(0x1) << SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Pos) /**< (SILEX_RNG_CONTROL_CONTROL) Enable write of the samples in the FIFO during start-up. Mask */
#define SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP(value) (SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Msk & ((value) << SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Pos))
#define SILEX_RNG_CONTROL_CONTROL_Msk         _U_(0x001FFFBF)                                      /**< (SILEX_RNG_CONTROL_CONTROL) Register Mask  */


/* -------- SILEX_RNG_CONTROL_FIFOLEVEL : (SILEX Offset: 0x1004) (R/W 32) FIFO level register. -------- */
#define SILEX_RNG_CONTROL_FIFOLEVEL_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_FIFOLEVEL) FIFO level register.  Reset Value */

#define SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_FIFOLEVEL) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Position */
#define SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Pos) /**< (SILEX_RNG_CONTROL_FIFOLEVEL) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Mask */
#define SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL(value) (SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Msk & ((value) << SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Pos))
#define SILEX_RNG_CONTROL_FIFOLEVEL_Msk       _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_FIFOLEVEL) Register Mask  */


/* -------- SILEX_RNG_CONTROL_FIFOTHRESHOLD : (SILEX Offset: 0x1008) (R/W 32) FIFO threshold register. -------- */
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_FIFOTHRESHOLD) FIFO threshold register.  Reset Value */

#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_FIFOTHRESHOLD) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Position */
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos) /**< (SILEX_RNG_CONTROL_FIFOTHRESHOLD) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Mask */
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD(value) (SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Msk & ((value) << SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos))
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_Msk   _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_FIFOTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_CONTROL_FIFODEPTH : (SILEX Offset: 0x100C) ( R/ 32) FIFO depth register. -------- */
#define SILEX_RNG_CONTROL_FIFODEPTH_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_FIFODEPTH) FIFO depth register.  Reset Value */

#define SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_FIFODEPTH) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Position */
#define SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Pos) /**< (SILEX_RNG_CONTROL_FIFODEPTH) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Mask */
#define SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH(value) (SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Msk & ((value) << SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Pos))
#define SILEX_RNG_CONTROL_FIFODEPTH_Msk       _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_FIFODEPTH) Register Mask  */


/* -------- SILEX_RNG_CONTROL_KEY0 : (SILEX Offset: 0x1010) (R/W 32) Key register (MSB). -------- */
#define SILEX_RNG_CONTROL_KEY0_RESETVALUE     _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_KEY0) Key register (MSB).  Reset Value */

#define SILEX_RNG_CONTROL_KEY0_KEY0_Pos       _U_(0)                                               /**< (SILEX_RNG_CONTROL_KEY0) Key register (MSB). Position */
#define SILEX_RNG_CONTROL_KEY0_KEY0_Msk       (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_KEY0_KEY0_Pos) /**< (SILEX_RNG_CONTROL_KEY0) Key register (MSB). Mask */
#define SILEX_RNG_CONTROL_KEY0_KEY0(value)    (SILEX_RNG_CONTROL_KEY0_KEY0_Msk & ((value) << SILEX_RNG_CONTROL_KEY0_KEY0_Pos))
#define SILEX_RNG_CONTROL_KEY0_Msk            _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_KEY0) Register Mask  */


/* -------- SILEX_RNG_CONTROL_KEY1 : (SILEX Offset: 0x1014) (R/W 32) Key register. -------- */
#define SILEX_RNG_CONTROL_KEY1_RESETVALUE     _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_KEY1) Key register.  Reset Value */

#define SILEX_RNG_CONTROL_KEY1_KEY1_Pos       _U_(0)                                               /**< (SILEX_RNG_CONTROL_KEY1) Key register. Position */
#define SILEX_RNG_CONTROL_KEY1_KEY1_Msk       (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_KEY1_KEY1_Pos) /**< (SILEX_RNG_CONTROL_KEY1) Key register. Mask */
#define SILEX_RNG_CONTROL_KEY1_KEY1(value)    (SILEX_RNG_CONTROL_KEY1_KEY1_Msk & ((value) << SILEX_RNG_CONTROL_KEY1_KEY1_Pos))
#define SILEX_RNG_CONTROL_KEY1_Msk            _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_KEY1) Register Mask  */


/* -------- SILEX_RNG_CONTROL_KEY2 : (SILEX Offset: 0x1018) (R/W 32) Key register. -------- */
#define SILEX_RNG_CONTROL_KEY2_RESETVALUE     _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_KEY2) Key register.  Reset Value */

#define SILEX_RNG_CONTROL_KEY2_KEY2_Pos       _U_(0)                                               /**< (SILEX_RNG_CONTROL_KEY2) Key register. Position */
#define SILEX_RNG_CONTROL_KEY2_KEY2_Msk       (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_KEY2_KEY2_Pos) /**< (SILEX_RNG_CONTROL_KEY2) Key register. Mask */
#define SILEX_RNG_CONTROL_KEY2_KEY2(value)    (SILEX_RNG_CONTROL_KEY2_KEY2_Msk & ((value) << SILEX_RNG_CONTROL_KEY2_KEY2_Pos))
#define SILEX_RNG_CONTROL_KEY2_Msk            _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_KEY2) Register Mask  */


/* -------- SILEX_RNG_CONTROL_KEY3 : (SILEX Offset: 0x101C) (R/W 32) Key register (LSB). -------- */
#define SILEX_RNG_CONTROL_KEY3_RESETVALUE     _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_KEY3) Key register (LSB).  Reset Value */

#define SILEX_RNG_CONTROL_KEY3_KEY3_Pos       _U_(0)                                               /**< (SILEX_RNG_CONTROL_KEY3) Key register (LSB). Position */
#define SILEX_RNG_CONTROL_KEY3_KEY3_Msk       (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_KEY3_KEY3_Pos) /**< (SILEX_RNG_CONTROL_KEY3) Key register (LSB). Mask */
#define SILEX_RNG_CONTROL_KEY3_KEY3(value)    (SILEX_RNG_CONTROL_KEY3_KEY3_Msk & ((value) << SILEX_RNG_CONTROL_KEY3_KEY3_Pos))
#define SILEX_RNG_CONTROL_KEY3_Msk            _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_KEY3) Register Mask  */


/* -------- SILEX_RNG_CONTROL_TESTDATA : (SILEX Offset: 0x1020) ( /W 32) Test data register. -------- */
#define SILEX_RNG_CONTROL_TESTDATA_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_TESTDATA) Test data register.  Reset Value */

#define SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_TESTDATA) Test data register. Position */
#define SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Pos) /**< (SILEX_RNG_CONTROL_TESTDATA) Test data register. Mask */
#define SILEX_RNG_CONTROL_TESTDATA_TESTDATA(value) (SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Msk & ((value) << SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Pos))
#define SILEX_RNG_CONTROL_TESTDATA_Msk        _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_TESTDATA) Register Mask  */


/* -------- SILEX_RNG_CONTROL_REPEATTHRESHOLD : (SILEX Offset: 0x1024) (R/W 32) Repetition Test Count Cut-Off value. -------- */
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Repetition Test Count Cut-Off value.  Reset Value */

#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Position */
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos) /**< (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Mask */
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD(value) (SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Msk & ((value) << SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos))
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_Msk _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_CONTROL_PROPTHRESHOLD : (SILEX Offset: 0x1028) (R/W 32) Adaptive Proportion Test (1024-sample window) Cut-Off value. -------- */
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value.  Reset Value */

#define SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Position */
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Pos) /**< (SILEX_RNG_CONTROL_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Mask */
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD(value) (SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Msk & ((value) << SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Pos))
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_Msk   _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_PROPTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_CONTROL_STATUS : (SILEX Offset: 0x1030) (R/W 32) Status register. -------- */
#define SILEX_RNG_CONTROL_STATUS_RESETVALUE   _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_STATUS) Status register.  Reset Value */

#define SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_STATUS) High when data written to TestData register is being processed. (see section 4.7) Position */
#define SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Msk (_U_(0x1) << SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Pos) /**< (SILEX_RNG_CONTROL_STATUS) High when data written to TestData register is being processed. (see section 4.7) Mask */
#define SILEX_RNG_CONTROL_STATUS_TESTDATABUSY(value) (SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Msk & ((value) << SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Pos))
#define SILEX_RNG_CONTROL_STATUS_STATE_Pos    _U_(1)                                               /**< (SILEX_RNG_CONTROL_STATUS) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Position */
#define SILEX_RNG_CONTROL_STATUS_STATE_Msk    (_U_(0x7) << SILEX_RNG_CONTROL_STATUS_STATE_Pos)     /**< (SILEX_RNG_CONTROL_STATUS) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Mask */
#define SILEX_RNG_CONTROL_STATUS_STATE(value) (SILEX_RNG_CONTROL_STATUS_STATE_Msk & ((value) << SILEX_RNG_CONTROL_STATUS_STATE_Pos))
#define SILEX_RNG_CONTROL_STATUS_REPFAIL_Pos  _U_(4)                                               /**< (SILEX_RNG_CONTROL_STATUS) NIST-800-90B repetition Count Test interrupt status. Position */
#define SILEX_RNG_CONTROL_STATUS_REPFAIL_Msk  (_U_(0x1) << SILEX_RNG_CONTROL_STATUS_REPFAIL_Pos)   /**< (SILEX_RNG_CONTROL_STATUS) NIST-800-90B repetition Count Test interrupt status. Mask */
#define SILEX_RNG_CONTROL_STATUS_REPFAIL(value) (SILEX_RNG_CONTROL_STATUS_REPFAIL_Msk & ((value) << SILEX_RNG_CONTROL_STATUS_REPFAIL_Pos))
#define SILEX_RNG_CONTROL_STATUS_PROPFAIL_Pos _U_(5)                                               /**< (SILEX_RNG_CONTROL_STATUS) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Position */
#define SILEX_RNG_CONTROL_STATUS_PROPFAIL_Msk (_U_(0x1) << SILEX_RNG_CONTROL_STATUS_PROPFAIL_Pos)  /**< (SILEX_RNG_CONTROL_STATUS) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Mask */
#define SILEX_RNG_CONTROL_STATUS_PROPFAIL(value) (SILEX_RNG_CONTROL_STATUS_PROPFAIL_Msk & ((value) << SILEX_RNG_CONTROL_STATUS_PROPFAIL_Pos))
#define SILEX_RNG_CONTROL_STATUS_FULLINT_Pos  _U_(7)                                               /**< (SILEX_RNG_CONTROL_STATUS) FIFO full status. Position */
#define SILEX_RNG_CONTROL_STATUS_FULLINT_Msk  (_U_(0x1) << SILEX_RNG_CONTROL_STATUS_FULLINT_Pos)   /**< (SILEX_RNG_CONTROL_STATUS) FIFO full status. Mask */
#define SILEX_RNG_CONTROL_STATUS_FULLINT(value) (SILEX_RNG_CONTROL_STATUS_FULLINT_Msk & ((value) << SILEX_RNG_CONTROL_STATUS_FULLINT_Pos))
#define SILEX_RNG_CONTROL_STATUS_PREINT_Pos   _U_(8)                                               /**< (SILEX_RNG_CONTROL_STATUS) AIS31 preliminary noise alarm interrupt status. Position */
#define SILEX_RNG_CONTROL_STATUS_PREINT_Msk   (_U_(0x1) << SILEX_RNG_CONTROL_STATUS_PREINT_Pos)    /**< (SILEX_RNG_CONTROL_STATUS) AIS31 preliminary noise alarm interrupt status. Mask */
#define SILEX_RNG_CONTROL_STATUS_PREINT(value) (SILEX_RNG_CONTROL_STATUS_PREINT_Msk & ((value) << SILEX_RNG_CONTROL_STATUS_PREINT_Pos))
#define SILEX_RNG_CONTROL_STATUS_ALMINT_Pos   _U_(9)                                               /**< (SILEX_RNG_CONTROL_STATUS) AIS31 noise alarm interrupt status. Position */
#define SILEX_RNG_CONTROL_STATUS_ALMINT_Msk   (_U_(0x1) << SILEX_RNG_CONTROL_STATUS_ALMINT_Pos)    /**< (SILEX_RNG_CONTROL_STATUS) AIS31 noise alarm interrupt status. Mask */
#define SILEX_RNG_CONTROL_STATUS_ALMINT(value) (SILEX_RNG_CONTROL_STATUS_ALMINT_Msk & ((value) << SILEX_RNG_CONTROL_STATUS_ALMINT_Pos))
#define SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Pos _U_(10)                                              /**< (SILEX_RNG_CONTROL_STATUS) Start-up test failure. Position */
#define SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Msk (_U_(0x1) << SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Pos) /**< (SILEX_RNG_CONTROL_STATUS) Start-up test failure. Mask */
#define SILEX_RNG_CONTROL_STATUS_STARTUPFAIL(value) (SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Msk & ((value) << SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Pos))
#define SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Pos _U_(11)                                              /**< (SILEX_RNG_CONTROL_STATUS) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Position */
#define SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Msk (_U_(0x1) << SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Pos) /**< (SILEX_RNG_CONTROL_STATUS) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Mask */
#define SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL(value) (SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Msk & ((value) << SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Pos))
#define SILEX_RNG_CONTROL_STATUS_Msk          _U_(0x00000FBF)                                      /**< (SILEX_RNG_CONTROL_STATUS) Register Mask  */


/* -------- SILEX_RNG_CONTROL_INITWAITVAL : (SILEX Offset: 0x1034) (R/W 32) Initial wait counter value. -------- */
#define SILEX_RNG_CONTROL_INITWAITVAL_RESETVALUE _U_(0xFFFF)                                          /**<  (SILEX_RNG_CONTROL_INITWAITVAL) Initial wait counter value.  Reset Value */

#define SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_INITWAITVAL) Number of clock cycles to wait before sampling data from the noise source. Position */
#define SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Msk (_U_(0xFFFF) << SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Pos) /**< (SILEX_RNG_CONTROL_INITWAITVAL) Number of clock cycles to wait before sampling data from the noise source. Mask */
#define SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL(value) (SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Msk & ((value) << SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Pos))
#define SILEX_RNG_CONTROL_INITWAITVAL_Msk     _U_(0x0000FFFF)                                      /**< (SILEX_RNG_CONTROL_INITWAITVAL) Register Mask  */


/* -------- SILEX_RNG_CONTROL_DISABLEOSC0 : (SILEX Offset: 0x1038) (R/W 32) Disable oscillator rings #0 to #31. -------- */
#define SILEX_RNG_CONTROL_DISABLEOSC0_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_DISABLEOSC0) Disable oscillator rings #0 to #31.  Reset Value */

#define SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_DISABLEOSC0) Disable oscillator rings #0 to #31. Position */
#define SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Pos) /**< (SILEX_RNG_CONTROL_DISABLEOSC0) Disable oscillator rings #0 to #31. Mask */
#define SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0(value) (SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Msk & ((value) << SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Pos))
#define SILEX_RNG_CONTROL_DISABLEOSC0_Msk     _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_DISABLEOSC0) Register Mask  */


/* -------- SILEX_RNG_CONTROL_DISABLEOSC1 : (SILEX Offset: 0x103C) (R/W 32) Disable oscillator rings #32 to #63. -------- */
#define SILEX_RNG_CONTROL_DISABLEOSC1_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_DISABLEOSC1) Disable oscillator rings #32 to #63.  Reset Value */

#define SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_DISABLEOSC1) Disable oscillator rings #32 to #63. Position */
#define SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Pos) /**< (SILEX_RNG_CONTROL_DISABLEOSC1) Disable oscillator rings #32 to #63. Mask */
#define SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1(value) (SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Msk & ((value) << SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Pos))
#define SILEX_RNG_CONTROL_DISABLEOSC1_Msk     _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_DISABLEOSC1) Register Mask  */


/* -------- SILEX_RNG_CONTROL_SWOFFTMRVAL : (SILEX Offset: 0x1040) (R/W 32) Switch off timer value. -------- */
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_SWOFFTMRVAL) Switch off timer value.  Reset Value */

#define SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_SWOFFTMRVAL) Number of clk cycles to wait before stopping the rings after the FIFO is full. Position */
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Msk (_U_(0xFFFF) << SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Pos) /**< (SILEX_RNG_CONTROL_SWOFFTMRVAL) Number of clk cycles to wait before stopping the rings after the FIFO is full. Mask */
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL(value) (SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Msk & ((value) << SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Pos))
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_Msk     _U_(0x0000FFFF)                                      /**< (SILEX_RNG_CONTROL_SWOFFTMRVAL) Register Mask  */


/* -------- SILEX_RNG_CONTROL_CLKDIV : (SILEX Offset: 0x1044) (R/W 32) Sample clock divider. -------- */
#define SILEX_RNG_CONTROL_CLKDIV_RESETVALUE   _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_CLKDIV) Sample clock divider.  Reset Value */

#define SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Pos   _U_(0)                                               /**< (SILEX_RNG_CONTROL_CLKDIV) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Position */
#define SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Msk   (_U_(0xFF) << SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Pos)   /**< (SILEX_RNG_CONTROL_CLKDIV) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Mask */
#define SILEX_RNG_CONTROL_CLKDIV_CLKDIV(value) (SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Msk & ((value) << SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Pos))
#define SILEX_RNG_CONTROL_CLKDIV_Msk          _U_(0x000000FF)                                      /**< (SILEX_RNG_CONTROL_CLKDIV) Register Mask  */


/* -------- SILEX_RNG_CONTROL_AIS31CONF0 : (SILEX Offset: 0x1048) (R/W 32) AIS31 configuration register 0. -------- */
#define SILEX_RNG_CONTROL_AIS31CONF0_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_AIS31CONF0) AIS31 configuration register 0.  Reset Value */

#define SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_AIS31CONF0) Start-up test threshold. Position */
#define SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Msk (_U_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Pos) /**< (SILEX_RNG_CONTROL_AIS31CONF0) Start-up test threshold. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD(value) (SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Msk & ((value) << SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Pos))
#define SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Pos _U_(16)                                              /**< (SILEX_RNG_CONTROL_AIS31CONF0) Online threshold. Position */
#define SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Msk (_U_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Pos) /**< (SILEX_RNG_CONTROL_AIS31CONF0) Online threshold. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD(value) (SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Msk & ((value) << SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Pos))
#define SILEX_RNG_CONTROL_AIS31CONF0_Msk      _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_AIS31CONF0) Register Mask  */


/* -------- SILEX_RNG_CONTROL_AIS31CONF1 : (SILEX Offset: 0x104C) (R/W 32) AIS31 configuration register 1. -------- */
#define SILEX_RNG_CONTROL_AIS31CONF1_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_AIS31CONF1) AIS31 configuration register 1.  Reset Value */

#define SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_AIS31CONF1) Online repeat threshold. Position */
#define SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Msk (_U_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Pos) /**< (SILEX_RNG_CONTROL_AIS31CONF1) Online repeat threshold. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD(value) (SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Msk & ((value) << SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Pos))
#define SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Pos _U_(16)                                              /**< (SILEX_RNG_CONTROL_AIS31CONF1) Expected history value. Position */
#define SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Msk (_U_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Pos) /**< (SILEX_RNG_CONTROL_AIS31CONF1) Expected history value. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE(value) (SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Msk & ((value) << SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Pos))
#define SILEX_RNG_CONTROL_AIS31CONF1_Msk      _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_AIS31CONF1) Register Mask  */


/* -------- SILEX_RNG_CONTROL_AIS31CONF2 : (SILEX Offset: 0x1050) (R/W 32) AIS31 configuration register 2. -------- */
#define SILEX_RNG_CONTROL_AIS31CONF2_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_AIS31CONF2) AIS31 configuration register 2.  Reset Value */

#define SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_AIS31CONF2) Minimum allowed history value. Position */
#define SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Msk (_U_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Pos) /**< (SILEX_RNG_CONTROL_AIS31CONF2) Minimum allowed history value. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF2_HMIN(value) (SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Msk & ((value) << SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Pos))
#define SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Pos _U_(16)                                              /**< (SILEX_RNG_CONTROL_AIS31CONF2) Maximum allowed history value. Position */
#define SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Msk (_U_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Pos) /**< (SILEX_RNG_CONTROL_AIS31CONF2) Maximum allowed history value. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF2_HMAX(value) (SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Msk & ((value) << SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Pos))
#define SILEX_RNG_CONTROL_AIS31CONF2_Msk      _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_CONTROL_AIS31CONF2) Register Mask  */


/* -------- SILEX_RNG_CONTROL_AIS31STATUS : (SILEX Offset: 0x1054) (R/W 32) AIS31 status register. -------- */
#define SILEX_RNG_CONTROL_AIS31STATUS_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_AIS31STATUS) AIS31 status register.  Reset Value */

#define SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_AIS31STATUS) Number of preliminary noise alarms since counter was last cleared. Position */
#define SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Msk (_U_(0xFFFF) << SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Pos) /**< (SILEX_RNG_CONTROL_AIS31STATUS) Number of preliminary noise alarms since counter was last cleared. Mask */
#define SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS(value) (SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Msk & ((value) << SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Pos))
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Pos _U_(16)                                              /**< (SILEX_RNG_CONTROL_AIS31STATUS) Last preliminary noise alarm occurred due to history value out of range. Position */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Msk (_U_(0x1) << SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Pos) /**< (SILEX_RNG_CONTROL_AIS31STATUS) Last preliminary noise alarm occurred due to history value out of range. Mask */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG(value) (SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Msk & ((value) << SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Pos))
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Pos _U_(17)                                              /**< (SILEX_RNG_CONTROL_AIS31STATUS) Last preliminary noise alarm occurred due to consecutive high X**2. Position */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Msk (_U_(0x1) << SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Pos) /**< (SILEX_RNG_CONTROL_AIS31STATUS) Last preliminary noise alarm occurred due to consecutive high X**2. Mask */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP(value) (SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Msk & ((value) << SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Pos))
#define SILEX_RNG_CONTROL_AIS31STATUS_Msk     _U_(0x0003FFFF)                                      /**< (SILEX_RNG_CONTROL_AIS31STATUS) Register Mask  */


/* -------- SILEX_RNG_CONTROL_HWCONFIG : (SILEX Offset: 0x1058) ( R/ 32) Hardware configuration register. -------- */
#define SILEX_RNG_CONTROL_HWCONFIG_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_CONTROL_HWCONFIG) Hardware configuration register.  Reset Value */

#define SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Pos _U_(0)                                               /**< (SILEX_RNG_CONTROL_HWCONFIG) Generic g_NumRings value. Position */
#define SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Msk (_U_(0xFF) << SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Pos) /**< (SILEX_RNG_CONTROL_HWCONFIG) Generic g_NumRings value. Mask */
#define SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS(value) (SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Msk & ((value) << SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Pos))
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31_Pos  _U_(8)                                               /**< (SILEX_RNG_CONTROL_HWCONFIG) Generic g_AIS31 value. Position */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31_Msk  (_U_(0x1) << SILEX_RNG_CONTROL_HWCONFIG_AIS31_Pos)   /**< (SILEX_RNG_CONTROL_HWCONFIG) Generic g_AIS31 value. Mask */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31(value) (SILEX_RNG_CONTROL_HWCONFIG_AIS31_Msk & ((value) << SILEX_RNG_CONTROL_HWCONFIG_AIS31_Pos))
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Pos _U_(9)                                               /**< (SILEX_RNG_CONTROL_HWCONFIG) Generic g_AIS31Full value. Position */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Msk (_U_(0x1) << SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Pos) /**< (SILEX_RNG_CONTROL_HWCONFIG) Generic g_AIS31Full value. Mask */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31Full(value) (SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Msk & ((value) << SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Pos))
#define SILEX_RNG_CONTROL_HWCONFIG_Msk        _U_(0x000003FF)                                      /**< (SILEX_RNG_CONTROL_HWCONFIG) Register Mask  */

#define SILEX_RNG_CONTROL_HWCONFIG_AIS_Pos    _U_(8)                                               /**< (SILEX_RNG_CONTROL_HWCONFIG Position) Generic g_AIS3x value. */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS_Msk    (_U_(0x1) << SILEX_RNG_CONTROL_HWCONFIG_AIS_Pos)     /**< (SILEX_RNG_CONTROL_HWCONFIG Mask) AIS */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS(value) (SILEX_RNG_CONTROL_HWCONFIG_AIS_Msk & ((value) << SILEX_RNG_CONTROL_HWCONFIG_AIS_Pos)) 

/* -------- SILEX_PK_POINTERS : (SILEX Offset: 0x2000) (R/W 32) Pointers register. -------- */
#define SILEX_PK_POINTERS_RESETVALUE          _U_(0x00)                                            /**<  (SILEX_PK_POINTERS) Pointers register.  Reset Value */

#define SILEX_PK_POINTERS_OPPTRA_Pos          _U_(0)                                               /**< (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines where operand A is located in memory (location 0x0 to 0xF). Position */
#define SILEX_PK_POINTERS_OPPTRA_Msk          (_U_(0xF) << SILEX_PK_POINTERS_OPPTRA_Pos)           /**< (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines where operand A is located in memory (location 0x0 to 0xF). Mask */
#define SILEX_PK_POINTERS_OPPTRA(value)       (SILEX_PK_POINTERS_OPPTRA_Msk & ((value) << SILEX_PK_POINTERS_OPPTRA_Pos))
#define SILEX_PK_POINTERS_OPPTRB_Pos          _U_(8)                                               /**< (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines where operand B is located in memory (location 0x0 to 0xF). Position */
#define SILEX_PK_POINTERS_OPPTRB_Msk          (_U_(0xF) << SILEX_PK_POINTERS_OPPTRB_Pos)           /**< (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines where operand B is located in memory (location 0x0 to 0xF). Mask */
#define SILEX_PK_POINTERS_OPPTRB(value)       (SILEX_PK_POINTERS_OPPTRB_Msk & ((value) << SILEX_PK_POINTERS_OPPTRB_Pos))
#define SILEX_PK_POINTERS_OPPTRC_Pos          _U_(16)                                              /**< (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines the location (0x0 to 0xF) where the result will be stored in memory. Position */
#define SILEX_PK_POINTERS_OPPTRC_Msk          (_U_(0xF) << SILEX_PK_POINTERS_OPPTRC_Pos)           /**< (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines the location (0x0 to 0xF) where the result will be stored in memory. Mask */
#define SILEX_PK_POINTERS_OPPTRC(value)       (SILEX_PK_POINTERS_OPPTRC_Msk & ((value) << SILEX_PK_POINTERS_OPPTRC_Pos))
#define SILEX_PK_POINTERS_OPPTRN_Pos          _U_(24)                                              /**< (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines the location where the modulus is located in memory (location 0x0 to 0xF). Position */
#define SILEX_PK_POINTERS_OPPTRN_Msk          (_U_(0xF) << SILEX_PK_POINTERS_OPPTRN_Pos)           /**< (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines the location where the modulus is located in memory (location 0x0 to 0xF). Mask */
#define SILEX_PK_POINTERS_OPPTRN(value)       (SILEX_PK_POINTERS_OPPTRN_Msk & ((value) << SILEX_PK_POINTERS_OPPTRN_Pos))
#define SILEX_PK_POINTERS_Msk                 _U_(0x0F0F0F0F)                                      /**< (SILEX_PK_POINTERS) Register Mask  */


/* -------- SILEX_PK_COMMAND : (SILEX Offset: 0x2004) (R/W 32) Command register. -------- */
#define SILEX_PK_COMMAND_RESETVALUE           _U_(0x0F)                                            /**<  (SILEX_PK_COMMAND) Command register.  Reset Value */

#define SILEX_PK_COMMAND_OPEADDR_Pos          _U_(0)                                               /**< (SILEX_PK_COMMAND) This field defines the operation to be performed. See documentation for more details. Position */
#define SILEX_PK_COMMAND_OPEADDR_Msk          (_U_(0x7F) << SILEX_PK_COMMAND_OPEADDR_Pos)          /**< (SILEX_PK_COMMAND) This field defines the operation to be performed. See documentation for more details. Mask */
#define SILEX_PK_COMMAND_OPEADDR(value)       (SILEX_PK_COMMAND_OPEADDR_Msk & ((value) << SILEX_PK_COMMAND_OPEADDR_Pos))
#define SILEX_PK_COMMAND_FIELDF_Pos           _U_(7)                                               /**< (SILEX_PK_COMMAND) '0': Field is GF(p) '1': Field is GF(2**m) Position */
#define SILEX_PK_COMMAND_FIELDF_Msk           (_U_(0x1) << SILEX_PK_COMMAND_FIELDF_Pos)            /**< (SILEX_PK_COMMAND) '0': Field is GF(p) '1': Field is GF(2**m) Mask */
#define SILEX_PK_COMMAND_FIELDF(value)        (SILEX_PK_COMMAND_FIELDF_Msk & ((value) << SILEX_PK_COMMAND_FIELDF_Pos))
#define SILEX_PK_COMMAND_OPBYTESM1_Pos        _U_(8)                                               /**< (SILEX_PK_COMMAND) This field defines the size (= number of bytes minus one) of the operands for the current operation. Possible values are limited by the maximum supported operand size. Examples: - 0x014 -> ECC on curve K-163 - 0x01F -> ECC on curve P-256 - 0x02F -> ECC on curve P-384 - 0x033 -> ECC on curve K-409 - 0x041 -> ECC on curve P-521 - 0x07F -> 1024-bit RSA - 0x09F -> 1280-bit RSA - 0x1FF -> 4096-bit RSA - 0x3FF -> 8192-bit RSA Position */
#define SILEX_PK_COMMAND_OPBYTESM1_Msk        (_U_(0x3FF) << SILEX_PK_COMMAND_OPBYTESM1_Pos)       /**< (SILEX_PK_COMMAND) This field defines the size (= number of bytes minus one) of the operands for the current operation. Possible values are limited by the maximum supported operand size. Examples: - 0x014 -> ECC on curve K-163 - 0x01F -> ECC on curve P-256 - 0x02F -> ECC on curve P-384 - 0x033 -> ECC on curve K-409 - 0x041 -> ECC on curve P-521 - 0x07F -> 1024-bit RSA - 0x09F -> 1280-bit RSA - 0x1FF -> 4096-bit RSA - 0x3FF -> 8192-bit RSA Mask */
#define SILEX_PK_COMMAND_OPBYTESM1(value)     (SILEX_PK_COMMAND_OPBYTESM1_Msk & ((value) << SILEX_PK_COMMAND_OPBYTESM1_Pos))
#define SILEX_PK_COMMAND_RANDMOD_Pos          _U_(19)                                              /**< (SILEX_PK_COMMAND) Enable randomization of modulus (counter-measure). Position */
#define SILEX_PK_COMMAND_RANDMOD_Msk          (_U_(0x1) << SILEX_PK_COMMAND_RANDMOD_Pos)           /**< (SILEX_PK_COMMAND) Enable randomization of modulus (counter-measure). Mask */
#define SILEX_PK_COMMAND_RANDMOD(value)       (SILEX_PK_COMMAND_RANDMOD_Msk & ((value) << SILEX_PK_COMMAND_RANDMOD_Pos))
#define SILEX_PK_COMMAND_SELCURVE_Pos         _U_(20)                                              /**< (SILEX_PK_COMMAND) Enable accelerator for specific curve modulus: 0x0: No acceleration (default) 0x1: P256 0x2: P384 0x3: P521 0x4: P192 0x5: Curve25519 0x6: Ed25519 This field has no effect when the optional acceleration hardware is not included. Position */
#define SILEX_PK_COMMAND_SELCURVE_Msk         (_U_(0x7) << SILEX_PK_COMMAND_SELCURVE_Pos)          /**< (SILEX_PK_COMMAND) Enable accelerator for specific curve modulus: 0x0: No acceleration (default) 0x1: P256 0x2: P384 0x3: P521 0x4: P192 0x5: Curve25519 0x6: Ed25519 This field has no effect when the optional acceleration hardware is not included. Mask */
#define SILEX_PK_COMMAND_SELCURVE(value)      (SILEX_PK_COMMAND_SELCURVE_Msk & ((value) << SILEX_PK_COMMAND_SELCURVE_Pos))
#define SILEX_PK_COMMAND_RANDKE_Pos           _U_(24)                                              /**< (SILEX_PK_COMMAND) Enable randomization of exponent/scalar (counter-measure). Position */
#define SILEX_PK_COMMAND_RANDKE_Msk           (_U_(0x1) << SILEX_PK_COMMAND_RANDKE_Pos)            /**< (SILEX_PK_COMMAND) Enable randomization of exponent/scalar (counter-measure). Mask */
#define SILEX_PK_COMMAND_RANDKE(value)        (SILEX_PK_COMMAND_RANDKE_Msk & ((value) << SILEX_PK_COMMAND_RANDKE_Pos))
#define SILEX_PK_COMMAND_RANDPROJ_Pos         _U_(25)                                              /**< (SILEX_PK_COMMAND) Enable randomization of projective coordinates (counter-measure). Position */
#define SILEX_PK_COMMAND_RANDPROJ_Msk         (_U_(0x1) << SILEX_PK_COMMAND_RANDPROJ_Pos)          /**< (SILEX_PK_COMMAND) Enable randomization of projective coordinates (counter-measure). Mask */
#define SILEX_PK_COMMAND_RANDPROJ(value)      (SILEX_PK_COMMAND_RANDPROJ_Msk & ((value) << SILEX_PK_COMMAND_RANDPROJ_Pos))
#define SILEX_PK_COMMAND_EDWARDS_Pos          _U_(26)                                              /**< (SILEX_PK_COMMAND) Enable Edwards curve (see operation description). Position */
#define SILEX_PK_COMMAND_EDWARDS_Msk          (_U_(0x1) << SILEX_PK_COMMAND_EDWARDS_Pos)           /**< (SILEX_PK_COMMAND) Enable Edwards curve (see operation description). Mask */
#define SILEX_PK_COMMAND_EDWARDS(value)       (SILEX_PK_COMMAND_EDWARDS_Msk & ((value) << SILEX_PK_COMMAND_EDWARDS_Pos))
#define SILEX_PK_COMMAND_SWAPBYTES_Pos        _U_(28)                                              /**< (SILEX_PK_COMMAND) Swap the bytes on AHB interface: '0': Native format (little endian) '1': Byte swapped (big endian) See also section 4.2.1. This bit must be programmed before writing/reading any data in data memory. Position */
#define SILEX_PK_COMMAND_SWAPBYTES_Msk        (_U_(0x1) << SILEX_PK_COMMAND_SWAPBYTES_Pos)         /**< (SILEX_PK_COMMAND) Swap the bytes on AHB interface: '0': Native format (little endian) '1': Byte swapped (big endian) See also section 4.2.1. This bit must be programmed before writing/reading any data in data memory. Mask */
#define SILEX_PK_COMMAND_SWAPBYTES(value)     (SILEX_PK_COMMAND_SWAPBYTES_Msk & ((value) << SILEX_PK_COMMAND_SWAPBYTES_Pos))
#define SILEX_PK_COMMAND_FLAGA_Pos            _U_(29)                                              /**< (SILEX_PK_COMMAND) See operation description. Position */
#define SILEX_PK_COMMAND_FLAGA_Msk            (_U_(0x1) << SILEX_PK_COMMAND_FLAGA_Pos)             /**< (SILEX_PK_COMMAND) See operation description. Mask */
#define SILEX_PK_COMMAND_FLAGA(value)         (SILEX_PK_COMMAND_FLAGA_Msk & ((value) << SILEX_PK_COMMAND_FLAGA_Pos))
#define SILEX_PK_COMMAND_FLAGB_Pos            _U_(30)                                              /**< (SILEX_PK_COMMAND) See operation description. Position */
#define SILEX_PK_COMMAND_FLAGB_Msk            (_U_(0x1) << SILEX_PK_COMMAND_FLAGB_Pos)             /**< (SILEX_PK_COMMAND) See operation description. Mask */
#define SILEX_PK_COMMAND_FLAGB(value)         (SILEX_PK_COMMAND_FLAGB_Msk & ((value) << SILEX_PK_COMMAND_FLAGB_Pos))
#define SILEX_PK_COMMAND_CALCR2_Pos           _U_(31)                                              /**< (SILEX_PK_COMMAND) This bit indicates if the IP has to calculate R**2 mod N for the next operation. This bit must be set to '1' when a new prime number has been programmed. This bit is used for primitive operations and ignored for the other operations. '0': don't recalculate R**2 mod N '1': re-calculate R**2 mod N Position */
#define SILEX_PK_COMMAND_CALCR2_Msk           (_U_(0x1) << SILEX_PK_COMMAND_CALCR2_Pos)            /**< (SILEX_PK_COMMAND) This bit indicates if the IP has to calculate R**2 mod N for the next operation. This bit must be set to '1' when a new prime number has been programmed. This bit is used for primitive operations and ignored for the other operations. '0': don't recalculate R**2 mod N '1': re-calculate R**2 mod N Mask */
#define SILEX_PK_COMMAND_CALCR2(value)        (SILEX_PK_COMMAND_CALCR2_Msk & ((value) << SILEX_PK_COMMAND_CALCR2_Pos))
#define SILEX_PK_COMMAND_Msk                  _U_(0xF77BFFFF)                                      /**< (SILEX_PK_COMMAND) Register Mask  */

#define SILEX_PK_COMMAND_CALCR_Pos            _U_(31)                                              /**< (SILEX_PK_COMMAND Position) This bit indicates if the IP has to calculate R**2 mod N for the next operation. This bit must be set to 'x' when a new prime number has been programmed. This bit is used for primitive operations and ignored for the other operations. 'x': don't recalculate R**2 mod N 'x': re-calculate R**2 mod N */
#define SILEX_PK_COMMAND_CALCR_Msk            (_U_(0x1) << SILEX_PK_COMMAND_CALCR_Pos)             /**< (SILEX_PK_COMMAND Mask) CALCR */
#define SILEX_PK_COMMAND_CALCR(value)         (SILEX_PK_COMMAND_CALCR_Msk & ((value) << SILEX_PK_COMMAND_CALCR_Pos)) 

/* -------- SILEX_PK_CONTROL : (SILEX Offset: 0x2008) ( /W 32) Command register. -------- */
#define SILEX_PK_CONTROL_RESETVALUE           _U_(0x00)                                            /**<  (SILEX_PK_CONTROL) Command register.  Reset Value */

#define SILEX_PK_CONTROL_START_Pos            _U_(0)                                               /**< (SILEX_PK_CONTROL) Writing a '1' starts the processing. Position */
#define SILEX_PK_CONTROL_START_Msk            (_U_(0x1) << SILEX_PK_CONTROL_START_Pos)             /**< (SILEX_PK_CONTROL) Writing a '1' starts the processing. Mask */
#define SILEX_PK_CONTROL_START(value)         (SILEX_PK_CONTROL_START_Msk & ((value) << SILEX_PK_CONTROL_START_Pos))
#define SILEX_PK_CONTROL_CLEARIRQ_Pos         _U_(1)                                               /**< (SILEX_PK_CONTROL) Writing a '1' clears the IRQ output. Position */
#define SILEX_PK_CONTROL_CLEARIRQ_Msk         (_U_(0x1) << SILEX_PK_CONTROL_CLEARIRQ_Pos)          /**< (SILEX_PK_CONTROL) Writing a '1' clears the IRQ output. Mask */
#define SILEX_PK_CONTROL_CLEARIRQ(value)      (SILEX_PK_CONTROL_CLEARIRQ_Msk & ((value) << SILEX_PK_CONTROL_CLEARIRQ_Pos))
#define SILEX_PK_CONTROL_Msk                  _U_(0x00000003)                                      /**< (SILEX_PK_CONTROL) Register Mask  */


/* -------- SILEX_PK_STATUS : (SILEX Offset: 0x200C) ( R/ 32) Status register. -------- */
#define SILEX_PK_STATUS_RESETVALUE            _U_(0x00)                                            /**<  (SILEX_PK_STATUS) Status register.  Reset Value */

#define SILEX_PK_STATUS_ERRORFLAGS_Pos        _U_(4)                                               /**< (SILEX_PK_STATUS) These bits indicate an error condition. They are updated at the end of the operation. They are cleared when starting a new operation. See documentation for more details. Position */
#define SILEX_PK_STATUS_ERRORFLAGS_Msk        (_U_(0xFFF) << SILEX_PK_STATUS_ERRORFLAGS_Pos)       /**< (SILEX_PK_STATUS) These bits indicate an error condition. They are updated at the end of the operation. They are cleared when starting a new operation. See documentation for more details. Mask */
#define SILEX_PK_STATUS_ERRORFLAGS(value)     (SILEX_PK_STATUS_ERRORFLAGS_Msk & ((value) << SILEX_PK_STATUS_ERRORFLAGS_Pos))
#define SILEX_PK_STATUS_PK_BUSY_Pos           _U_(16)                                              /**< (SILEX_PK_STATUS) This bit reflects the BUSY output value. It is set when the operation starts and it is cleared when the operation is finished. Position */
#define SILEX_PK_STATUS_PK_BUSY_Msk           (_U_(0x1) << SILEX_PK_STATUS_PK_BUSY_Pos)            /**< (SILEX_PK_STATUS) This bit reflects the BUSY output value. It is set when the operation starts and it is cleared when the operation is finished. Mask */
#define SILEX_PK_STATUS_PK_BUSY(value)        (SILEX_PK_STATUS_PK_BUSY_Msk & ((value) << SILEX_PK_STATUS_PK_BUSY_Pos))
#define SILEX_PK_STATUS_INTRPTSTATUS_Pos      _U_(17)                                              /**< (SILEX_PK_STATUS) This bit reflects the IRQ output value. It is set when the operation is finished. It is cleared when the CPU writes the bit 1 of Control Register. Position */
#define SILEX_PK_STATUS_INTRPTSTATUS_Msk      (_U_(0x1) << SILEX_PK_STATUS_INTRPTSTATUS_Pos)       /**< (SILEX_PK_STATUS) This bit reflects the IRQ output value. It is set when the operation is finished. It is cleared when the CPU writes the bit 1 of Control Register. Mask */
#define SILEX_PK_STATUS_INTRPTSTATUS(value)   (SILEX_PK_STATUS_INTRPTSTATUS_Msk & ((value) << SILEX_PK_STATUS_INTRPTSTATUS_Pos))
#define SILEX_PK_STATUS_FAILPTR_Pos           _U_(24)                                              /**< (SILEX_PK_STATUS) These bits indicate which data location generated the error flag. They are not available for all error flags. Position */
#define SILEX_PK_STATUS_FAILPTR_Msk           (_U_(0x1F) << SILEX_PK_STATUS_FAILPTR_Pos)           /**< (SILEX_PK_STATUS) These bits indicate which data location generated the error flag. They are not available for all error flags. Mask */
#define SILEX_PK_STATUS_FAILPTR(value)        (SILEX_PK_STATUS_FAILPTR_Msk & ((value) << SILEX_PK_STATUS_FAILPTR_Pos))
#define SILEX_PK_STATUS_Msk                   _U_(0x1F03FFF0)                                      /**< (SILEX_PK_STATUS) Register Mask  */


/* -------- SILEX_PK_TIMER : (SILEX Offset: 0x2014) (R/W 32) Timer register. -------- */
#define SILEX_PK_TIMER_RESETVALUE             _U_(0x00)                                            /**<  (SILEX_PK_TIMER) Timer register.  Reset Value */

#define SILEX_PK_TIMER_TIMER_Pos              _U_(0)                                               /**< (SILEX_PK_TIMER) Number of core clock cycles. Position */
#define SILEX_PK_TIMER_TIMER_Msk              (_U_(0xFFFFFFFF) << SILEX_PK_TIMER_TIMER_Pos)        /**< (SILEX_PK_TIMER) Number of core clock cycles. Mask */
#define SILEX_PK_TIMER_TIMER(value)           (SILEX_PK_TIMER_TIMER_Msk & ((value) << SILEX_PK_TIMER_TIMER_Pos))
#define SILEX_PK_TIMER_Msk                    _U_(0xFFFFFFFF)                                      /**< (SILEX_PK_TIMER) Register Mask  */


/* -------- SILEX_PK_HWCONFIG : (SILEX Offset: 0x2018) ( R/ 32) Hardware configuration register. -------- */
#define SILEX_PK_HWCONFIG_RESETVALUE          _U_(0x00)                                            /**<  (SILEX_PK_HWCONFIG) Hardware configuration register.  Reset Value */

#define SILEX_PK_HWCONFIG_MAXOPSIZE_Pos       _U_(0)                                               /**< (SILEX_PK_HWCONFIG) Maximum operand size (number of bytes). Position */
#define SILEX_PK_HWCONFIG_MAXOPSIZE_Msk       (_U_(0xFFF) << SILEX_PK_HWCONFIG_MAXOPSIZE_Pos)      /**< (SILEX_PK_HWCONFIG) Maximum operand size (number of bytes). Mask */
#define SILEX_PK_HWCONFIG_MAXOPSIZE(value)    (SILEX_PK_HWCONFIG_MAXOPSIZE_Msk & ((value) << SILEX_PK_HWCONFIG_MAXOPSIZE_Pos))
#define SILEX_PK_HWCONFIG_NBMULT_Pos          _U_(12)                                              /**< (SILEX_PK_HWCONFIG) Number of multipliers: 0x0: 1 multiplier 0x1: 4 multipliers 0x2: 16 multipliers 0x4: 64 multipliers 0x8: 256 multipliers Position */
#define SILEX_PK_HWCONFIG_NBMULT_Msk          (_U_(0xF) << SILEX_PK_HWCONFIG_NBMULT_Pos)           /**< (SILEX_PK_HWCONFIG) Number of multipliers: 0x0: 1 multiplier 0x1: 4 multipliers 0x2: 16 multipliers 0x4: 64 multipliers 0x8: 256 multipliers Mask */
#define SILEX_PK_HWCONFIG_NBMULT(value)       (SILEX_PK_HWCONFIG_NBMULT_Msk & ((value) << SILEX_PK_HWCONFIG_NBMULT_Pos))
#define SILEX_PK_HWCONFIG_PRIMEFIELD_Pos      _U_(16)                                              /**< (SILEX_PK_HWCONFIG) Support prime field. Position */
#define SILEX_PK_HWCONFIG_PRIMEFIELD_Msk      (_U_(0x1) << SILEX_PK_HWCONFIG_PRIMEFIELD_Pos)       /**< (SILEX_PK_HWCONFIG) Support prime field. Mask */
#define SILEX_PK_HWCONFIG_PRIMEFIELD(value)   (SILEX_PK_HWCONFIG_PRIMEFIELD_Msk & ((value) << SILEX_PK_HWCONFIG_PRIMEFIELD_Pos))
#define SILEX_PK_HWCONFIG_BINARYFIELD_Pos     _U_(17)                                              /**< (SILEX_PK_HWCONFIG) Support binary field. Position */
#define SILEX_PK_HWCONFIG_BINARYFIELD_Msk     (_U_(0x1) << SILEX_PK_HWCONFIG_BINARYFIELD_Pos)      /**< (SILEX_PK_HWCONFIG) Support binary field. Mask */
#define SILEX_PK_HWCONFIG_BINARYFIELD(value)  (SILEX_PK_HWCONFIG_BINARYFIELD_Msk & ((value) << SILEX_PK_HWCONFIG_BINARYFIELD_Pos))
#define SILEX_PK_HWCONFIG_P256_Pos            _U_(20)                                              /**< (SILEX_PK_HWCONFIG) Support ECC P256 acceleration. Position */
#define SILEX_PK_HWCONFIG_P256_Msk            (_U_(0x1) << SILEX_PK_HWCONFIG_P256_Pos)             /**< (SILEX_PK_HWCONFIG) Support ECC P256 acceleration. Mask */
#define SILEX_PK_HWCONFIG_P256(value)         (SILEX_PK_HWCONFIG_P256_Msk & ((value) << SILEX_PK_HWCONFIG_P256_Pos))
#define SILEX_PK_HWCONFIG_P384_Pos            _U_(21)                                              /**< (SILEX_PK_HWCONFIG) Support ECC P384 acceleration. Position */
#define SILEX_PK_HWCONFIG_P384_Msk            (_U_(0x1) << SILEX_PK_HWCONFIG_P384_Pos)             /**< (SILEX_PK_HWCONFIG) Support ECC P384 acceleration. Mask */
#define SILEX_PK_HWCONFIG_P384(value)         (SILEX_PK_HWCONFIG_P384_Msk & ((value) << SILEX_PK_HWCONFIG_P384_Pos))
#define SILEX_PK_HWCONFIG_P521_Pos            _U_(22)                                              /**< (SILEX_PK_HWCONFIG) Support ECC P521 acceleration. Position */
#define SILEX_PK_HWCONFIG_P521_Msk            (_U_(0x1) << SILEX_PK_HWCONFIG_P521_Pos)             /**< (SILEX_PK_HWCONFIG) Support ECC P521 acceleration. Mask */
#define SILEX_PK_HWCONFIG_P521(value)         (SILEX_PK_HWCONFIG_P521_Msk & ((value) << SILEX_PK_HWCONFIG_P521_Pos))
#define SILEX_PK_HWCONFIG_P192_Pos            _U_(23)                                              /**< (SILEX_PK_HWCONFIG) Support ECC P192 acceleration. Position */
#define SILEX_PK_HWCONFIG_P192_Msk            (_U_(0x1) << SILEX_PK_HWCONFIG_P192_Pos)             /**< (SILEX_PK_HWCONFIG) Support ECC P192 acceleration. Mask */
#define SILEX_PK_HWCONFIG_P192(value)         (SILEX_PK_HWCONFIG_P192_Msk & ((value) << SILEX_PK_HWCONFIG_P192_Pos))
#define SILEX_PK_HWCONFIG_X25519_Pos          _U_(24)                                              /**< (SILEX_PK_HWCONFIG) Support Curve25519/Ed25519 acceleration. Position */
#define SILEX_PK_HWCONFIG_X25519_Msk          (_U_(0x1) << SILEX_PK_HWCONFIG_X25519_Pos)           /**< (SILEX_PK_HWCONFIG) Support Curve25519/Ed25519 acceleration. Mask */
#define SILEX_PK_HWCONFIG_X25519(value)       (SILEX_PK_HWCONFIG_X25519_Msk & ((value) << SILEX_PK_HWCONFIG_X25519_Pos))
#define SILEX_PK_HWCONFIG_AHBMASTER_Pos       _U_(25)                                              /**< (SILEX_PK_HWCONFIG) '0': Memory access through AHB Slave and internally in the PKE.                                                                             '1': Memory access through AHB Master, outside the PKE. Position */
#define SILEX_PK_HWCONFIG_AHBMASTER_Msk       (_U_(0x1) << SILEX_PK_HWCONFIG_AHBMASTER_Pos)        /**< (SILEX_PK_HWCONFIG) '0': Memory access through AHB Slave and internally in the PKE.                                                                             '1': Memory access through AHB Master, outside the PKE. Mask */
#define SILEX_PK_HWCONFIG_AHBMASTER(value)    (SILEX_PK_HWCONFIG_AHBMASTER_Msk & ((value) << SILEX_PK_HWCONFIG_AHBMASTER_Pos))
#define SILEX_PK_HWCONFIG_DISABLESMX_Pos      _U_(29)                                              /**< (SILEX_PK_HWCONFIG) State of DisableSMx input (high when SM2/SM9 operations are disabled). Position */
#define SILEX_PK_HWCONFIG_DISABLESMX_Msk      (_U_(0x1) << SILEX_PK_HWCONFIG_DISABLESMX_Pos)       /**< (SILEX_PK_HWCONFIG) State of DisableSMx input (high when SM2/SM9 operations are disabled). Mask */
#define SILEX_PK_HWCONFIG_DISABLESMX(value)   (SILEX_PK_HWCONFIG_DISABLESMX_Msk & ((value) << SILEX_PK_HWCONFIG_DISABLESMX_Pos))
#define SILEX_PK_HWCONFIG_DISABLECLRMEM_Pos   _U_(30)                                              /**< (SILEX_PK_HWCONFIG) State of DisableClrMem input (high when automatic clear of the RAM after reset is disabled). Position */
#define SILEX_PK_HWCONFIG_DISABLECLRMEM_Msk   (_U_(0x1) << SILEX_PK_HWCONFIG_DISABLECLRMEM_Pos)    /**< (SILEX_PK_HWCONFIG) State of DisableClrMem input (high when automatic clear of the RAM after reset is disabled). Mask */
#define SILEX_PK_HWCONFIG_DISABLECLRMEM(value) (SILEX_PK_HWCONFIG_DISABLECLRMEM_Msk & ((value) << SILEX_PK_HWCONFIG_DISABLECLRMEM_Pos))
#define SILEX_PK_HWCONFIG_DISABLECM_Pos       _U_(31)                                              /**< (SILEX_PK_HWCONFIG) State of DisableCM input (high when counter-measures are disabled). Position */
#define SILEX_PK_HWCONFIG_DISABLECM_Msk       (_U_(0x1) << SILEX_PK_HWCONFIG_DISABLECM_Pos)        /**< (SILEX_PK_HWCONFIG) State of DisableCM input (high when counter-measures are disabled). Mask */
#define SILEX_PK_HWCONFIG_DISABLECM(value)    (SILEX_PK_HWCONFIG_DISABLECM_Msk & ((value) << SILEX_PK_HWCONFIG_DISABLECM_Pos))
#define SILEX_PK_HWCONFIG_Msk                 _U_(0xE3F3FFFF)                                      /**< (SILEX_PK_HWCONFIG) Register Mask  */

#define SILEX_PK_HWCONFIG_P_Pos               _U_(20)                                              /**< (SILEX_PK_HWCONFIG Position) Support ECC P256 acceleration. */
#define SILEX_PK_HWCONFIG_P_Msk               (_U_(0xF) << SILEX_PK_HWCONFIG_P_Pos)                /**< (SILEX_PK_HWCONFIG Mask) P */
#define SILEX_PK_HWCONFIG_P(value)            (SILEX_PK_HWCONFIG_P_Msk & ((value) << SILEX_PK_HWCONFIG_P_Pos)) 
#define SILEX_PK_HWCONFIG_X_Pos               _U_(24)                                              /**< (SILEX_PK_HWCONFIG Position) Support Curve255x9/Ed255x9 acceleration. */
#define SILEX_PK_HWCONFIG_X_Msk               (_U_(0x1) << SILEX_PK_HWCONFIG_X_Pos)                /**< (SILEX_PK_HWCONFIG Mask) X */
#define SILEX_PK_HWCONFIG_X(value)            (SILEX_PK_HWCONFIG_X_Msk & ((value) << SILEX_PK_HWCONFIG_X_Pos)) 

/* -------- SILEX_PK_OPSIZE : (SILEX Offset: 0x201C) (R/W 32) Operand size register. -------- */
#define SILEX_PK_OPSIZE_RESETVALUE            _U_(0x1000)                                          /**<  (SILEX_PK_OPSIZE) Operand size register.  Reset Value */

#define SILEX_PK_OPSIZE_OPSIZE_Pos            _U_(0)                                               /**< (SILEX_PK_OPSIZE) Operand size (number of bytes): 0x0100: 256 0x0209: 521 0x0800: 2048 0x0C00: 3072 0x1000: 4096 This register is used when the memory is accessed via AHB Master Position */
#define SILEX_PK_OPSIZE_OPSIZE_Msk            (_U_(0x1FFF) << SILEX_PK_OPSIZE_OPSIZE_Pos)          /**< (SILEX_PK_OPSIZE) Operand size (number of bytes): 0x0100: 256 0x0209: 521 0x0800: 2048 0x0C00: 3072 0x1000: 4096 This register is used when the memory is accessed via AHB Master Mask */
#define SILEX_PK_OPSIZE_OPSIZE(value)         (SILEX_PK_OPSIZE_OPSIZE_Msk & ((value) << SILEX_PK_OPSIZE_OPSIZE_Pos))
#define SILEX_PK_OPSIZE_Msk                   _U_(0x00001FFF)                                      /**< (SILEX_PK_OPSIZE) Register Mask  */


/* -------- SILEX_PK_MEMOFFSET : (SILEX Offset: 0x2020) (R/W 32) Memory offset register. -------- */
#define SILEX_PK_MEMOFFSET_RESETVALUE         _U_(0x00)                                            /**<  (SILEX_PK_MEMOFFSET) Memory offset register.  Reset Value */

#define SILEX_PK_MEMOFFSET_MEMOFFSET_Pos      _U_(0)                                               /**< (SILEX_PK_MEMOFFSET) Memory offset for AHB Master Position */
#define SILEX_PK_MEMOFFSET_MEMOFFSET_Msk      (_U_(0xFFFFFFFF) << SILEX_PK_MEMOFFSET_MEMOFFSET_Pos) /**< (SILEX_PK_MEMOFFSET) Memory offset for AHB Master Mask */
#define SILEX_PK_MEMOFFSET_MEMOFFSET(value)   (SILEX_PK_MEMOFFSET_MEMOFFSET_Msk & ((value) << SILEX_PK_MEMOFFSET_MEMOFFSET_Pos))
#define SILEX_PK_MEMOFFSET_Msk                _U_(0xFFFFFFFF)                                      /**< (SILEX_PK_MEMOFFSET) Register Mask  */


/* -------- SILEX_PK_MICROCODEOFFSET : (SILEX Offset: 0x2024) (R/W 32) MicroCode offset register. -------- */
#define SILEX_PK_MICROCODEOFFSET_RESETVALUE   _U_(0x00)                                            /**<  (SILEX_PK_MICROCODEOFFSET) MicroCode offset register.  Reset Value */

#define SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Pos _U_(0)                                               /**< (SILEX_PK_MICROCODEOFFSET) MicroCode offset for AHB Master Position */
#define SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Msk (_U_(0xFFFFFFFF) << SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Pos) /**< (SILEX_PK_MICROCODEOFFSET) MicroCode offset for AHB Master Mask */
#define SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET(value) (SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Msk & ((value) << SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Pos))
#define SILEX_PK_MICROCODEOFFSET_Msk          _U_(0xFFFFFFFF)                                      /**< (SILEX_PK_MICROCODEOFFSET) Register Mask  */


/* -------- SILEX_RNG_DATA_CONTROL : (SILEX Offset: 0x4000) (R/W 32) Control register -------- */
#define SILEX_RNG_DATA_CONTROL_RESETVALUE     _U_(0x00)                                            /**<  (SILEX_RNG_DATA_CONTROL) Control register  Reset Value */

#define SILEX_RNG_DATA_CONTROL_ENABLE_Pos     _U_(0)                                               /**< (SILEX_RNG_DATA_CONTROL) Enable the NDRNG. Position */
#define SILEX_RNG_DATA_CONTROL_ENABLE_Msk     (_U_(0x1) << SILEX_RNG_DATA_CONTROL_ENABLE_Pos)      /**< (SILEX_RNG_DATA_CONTROL) Enable the NDRNG. Mask */
#define SILEX_RNG_DATA_CONTROL_ENABLE(value)  (SILEX_RNG_DATA_CONTROL_ENABLE_Msk & ((value) << SILEX_RNG_DATA_CONTROL_ENABLE_Pos))
#define SILEX_RNG_DATA_CONTROL_LFSREN_Pos     _U_(1)                                               /**< (SILEX_RNG_DATA_CONTROL) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Position */
#define SILEX_RNG_DATA_CONTROL_LFSREN_Msk     (_U_(0x1) << SILEX_RNG_DATA_CONTROL_LFSREN_Pos)      /**< (SILEX_RNG_DATA_CONTROL) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Mask */
#define SILEX_RNG_DATA_CONTROL_LFSREN(value)  (SILEX_RNG_DATA_CONTROL_LFSREN_Msk & ((value) << SILEX_RNG_DATA_CONTROL_LFSREN_Pos))
#define SILEX_RNG_DATA_CONTROL_TESTEN_Pos     _U_(2)                                               /**< (SILEX_RNG_DATA_CONTROL) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Position */
#define SILEX_RNG_DATA_CONTROL_TESTEN_Msk     (_U_(0x1) << SILEX_RNG_DATA_CONTROL_TESTEN_Pos)      /**< (SILEX_RNG_DATA_CONTROL) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Mask */
#define SILEX_RNG_DATA_CONTROL_TESTEN(value)  (SILEX_RNG_DATA_CONTROL_TESTEN_Msk & ((value) << SILEX_RNG_DATA_CONTROL_TESTEN_Pos))
#define SILEX_RNG_DATA_CONTROL_CONDBYPASS_Pos _U_(3)                                               /**< (SILEX_RNG_DATA_CONTROL) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Position */
#define SILEX_RNG_DATA_CONTROL_CONDBYPASS_Msk (_U_(0x1) << SILEX_RNG_DATA_CONTROL_CONDBYPASS_Pos)  /**< (SILEX_RNG_DATA_CONTROL) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Mask */
#define SILEX_RNG_DATA_CONTROL_CONDBYPASS(value) (SILEX_RNG_DATA_CONTROL_CONDBYPASS_Msk & ((value) << SILEX_RNG_DATA_CONTROL_CONDBYPASS_Pos))
#define SILEX_RNG_DATA_CONTROL_INTENREP_Pos   _U_(4)                                               /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for Repetition Count Test failure. Position */
#define SILEX_RNG_DATA_CONTROL_INTENREP_Msk   (_U_(0x1) << SILEX_RNG_DATA_CONTROL_INTENREP_Pos)    /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for Repetition Count Test failure. Mask */
#define SILEX_RNG_DATA_CONTROL_INTENREP(value) (SILEX_RNG_DATA_CONTROL_INTENREP_Msk & ((value) << SILEX_RNG_DATA_CONTROL_INTENREP_Pos))
#define SILEX_RNG_DATA_CONTROL_INTENPROP_Pos  _U_(5)                                               /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Position */
#define SILEX_RNG_DATA_CONTROL_INTENPROP_Msk  (_U_(0x1) << SILEX_RNG_DATA_CONTROL_INTENPROP_Pos)   /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Mask */
#define SILEX_RNG_DATA_CONTROL_INTENPROP(value) (SILEX_RNG_DATA_CONTROL_INTENPROP_Msk & ((value) << SILEX_RNG_DATA_CONTROL_INTENPROP_Pos))
#define SILEX_RNG_DATA_CONTROL_INTENFULL_Pos  _U_(7)                                               /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for FIFO full. Position */
#define SILEX_RNG_DATA_CONTROL_INTENFULL_Msk  (_U_(0x1) << SILEX_RNG_DATA_CONTROL_INTENFULL_Pos)   /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for FIFO full. Mask */
#define SILEX_RNG_DATA_CONTROL_INTENFULL(value) (SILEX_RNG_DATA_CONTROL_INTENFULL_Msk & ((value) << SILEX_RNG_DATA_CONTROL_INTENFULL_Pos))
#define SILEX_RNG_DATA_CONTROL_SOFTRST_Pos    _U_(8)                                               /**< (SILEX_RNG_DATA_CONTROL) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Position */
#define SILEX_RNG_DATA_CONTROL_SOFTRST_Msk    (_U_(0x1) << SILEX_RNG_DATA_CONTROL_SOFTRST_Pos)     /**< (SILEX_RNG_DATA_CONTROL) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Mask */
#define SILEX_RNG_DATA_CONTROL_SOFTRST(value) (SILEX_RNG_DATA_CONTROL_SOFTRST_Msk & ((value) << SILEX_RNG_DATA_CONTROL_SOFTRST_Pos))
#define SILEX_RNG_DATA_CONTROL_INTENPRE_Pos   _U_(9)                                               /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for AIS31 preliminary noise alarm. Position */
#define SILEX_RNG_DATA_CONTROL_INTENPRE_Msk   (_U_(0x1) << SILEX_RNG_DATA_CONTROL_INTENPRE_Pos)    /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for AIS31 preliminary noise alarm. Mask */
#define SILEX_RNG_DATA_CONTROL_INTENPRE(value) (SILEX_RNG_DATA_CONTROL_INTENPRE_Msk & ((value) << SILEX_RNG_DATA_CONTROL_INTENPRE_Pos))
#define SILEX_RNG_DATA_CONTROL_INTENALM_Pos   _U_(10)                                              /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for AIS31 noise alarm. Position */
#define SILEX_RNG_DATA_CONTROL_INTENALM_Msk   (_U_(0x1) << SILEX_RNG_DATA_CONTROL_INTENALM_Pos)    /**< (SILEX_RNG_DATA_CONTROL) Interrupt enable for AIS31 noise alarm. Mask */
#define SILEX_RNG_DATA_CONTROL_INTENALM(value) (SILEX_RNG_DATA_CONTROL_INTENALM_Msk & ((value) << SILEX_RNG_DATA_CONTROL_INTENALM_Pos))
#define SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Pos _U_(11)                                              /**< (SILEX_RNG_DATA_CONTROL) Force oscillators to run when FIFO is full. Position */
#define SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Msk (_U_(0x1) << SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Pos) /**< (SILEX_RNG_DATA_CONTROL) Force oscillators to run when FIFO is full. Mask */
#define SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS(value) (SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Msk & ((value) << SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Pos))
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Pos _U_(12)                                              /**< (SILEX_RNG_DATA_CONTROL) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Position */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Msk (_U_(0x1) << SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Pos) /**< (SILEX_RNG_DATA_CONTROL) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Mask */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS(value) (SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Msk & ((value) << SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Pos))
#define SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Pos _U_(13)                                              /**< (SILEX_RNG_DATA_CONTROL) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Position */
#define SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Msk (_U_(0x1) << SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Pos) /**< (SILEX_RNG_DATA_CONTROL) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Mask */
#define SILEX_RNG_DATA_CONTROL_AIS31BYPASS(value) (SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Msk & ((value) << SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Pos))
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Pos _U_(14)                                              /**< (SILEX_RNG_DATA_CONTROL) Select input to health test module: 0: Before conditioning, 1: After conditioning. Position */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Msk (_U_(0x1) << SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Pos) /**< (SILEX_RNG_DATA_CONTROL) Select input to health test module: 0: Before conditioning, 1: After conditioning. Mask */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL(value) (SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Msk & ((value) << SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Pos))
#define SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Pos _U_(15)                                              /**< (SILEX_RNG_DATA_CONTROL) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Position */
#define SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Msk (_U_(0x1) << SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Pos) /**< (SILEX_RNG_DATA_CONTROL) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Mask */
#define SILEX_RNG_DATA_CONTROL_AIS31TESTSEL(value) (SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Msk & ((value) << SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Pos))
#define SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Pos _U_(16)                                              /**< (SILEX_RNG_DATA_CONTROL) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Position */
#define SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Msk (_U_(0xF) << SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Pos) /**< (SILEX_RNG_DATA_CONTROL) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Mask */
#define SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS(value) (SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Msk & ((value) << SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Pos))
#define SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Pos _U_(20)                                              /**< (SILEX_RNG_DATA_CONTROL) Enable write of the samples in the FIFO during start-up. Position */
#define SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Msk (_U_(0x1) << SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Pos) /**< (SILEX_RNG_DATA_CONTROL) Enable write of the samples in the FIFO during start-up. Mask */
#define SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP(value) (SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Msk & ((value) << SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Pos))
#define SILEX_RNG_DATA_CONTROL_Msk            _U_(0x001FFFBF)                                      /**< (SILEX_RNG_DATA_CONTROL) Register Mask  */


/* -------- SILEX_RNG_DATA_FIFOLEVEL : (SILEX Offset: 0x4004) (R/W 32) FIFO level register. -------- */
#define SILEX_RNG_DATA_FIFOLEVEL_RESETVALUE   _U_(0x00)                                            /**<  (SILEX_RNG_DATA_FIFOLEVEL) FIFO level register.  Reset Value */

#define SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_FIFOLEVEL) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Position */
#define SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Pos) /**< (SILEX_RNG_DATA_FIFOLEVEL) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Mask */
#define SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL(value) (SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Msk & ((value) << SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Pos))
#define SILEX_RNG_DATA_FIFOLEVEL_Msk          _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_FIFOLEVEL) Register Mask  */


/* -------- SILEX_RNG_DATA_FIFOTHRESHOLD : (SILEX Offset: 0x4008) (R/W 32) FIFO threshold register. -------- */
#define SILEX_RNG_DATA_FIFOTHRESHOLD_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_DATA_FIFOTHRESHOLD) FIFO threshold register.  Reset Value */

#define SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_FIFOTHRESHOLD) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Position */
#define SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos) /**< (SILEX_RNG_DATA_FIFOTHRESHOLD) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Mask */
#define SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD(value) (SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Msk & ((value) << SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos))
#define SILEX_RNG_DATA_FIFOTHRESHOLD_Msk      _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_FIFOTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_DATA_FIFODEPTH : (SILEX Offset: 0x400C) ( R/ 32) FIFO depth register. -------- */
#define SILEX_RNG_DATA_FIFODEPTH_RESETVALUE   _U_(0x00)                                            /**<  (SILEX_RNG_DATA_FIFODEPTH) FIFO depth register.  Reset Value */

#define SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_FIFODEPTH) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Position */
#define SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Pos) /**< (SILEX_RNG_DATA_FIFODEPTH) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Mask */
#define SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH(value) (SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Msk & ((value) << SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Pos))
#define SILEX_RNG_DATA_FIFODEPTH_Msk          _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_FIFODEPTH) Register Mask  */


/* -------- SILEX_RNG_DATA_KEY0 : (SILEX Offset: 0x4010) (R/W 32) Key register (MSB). -------- */
#define SILEX_RNG_DATA_KEY0_RESETVALUE        _U_(0x00)                                            /**<  (SILEX_RNG_DATA_KEY0) Key register (MSB).  Reset Value */

#define SILEX_RNG_DATA_KEY0_KEY0_Pos          _U_(0)                                               /**< (SILEX_RNG_DATA_KEY0) Key register (MSB). Position */
#define SILEX_RNG_DATA_KEY0_KEY0_Msk          (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_KEY0_KEY0_Pos)    /**< (SILEX_RNG_DATA_KEY0) Key register (MSB). Mask */
#define SILEX_RNG_DATA_KEY0_KEY0(value)       (SILEX_RNG_DATA_KEY0_KEY0_Msk & ((value) << SILEX_RNG_DATA_KEY0_KEY0_Pos))
#define SILEX_RNG_DATA_KEY0_Msk               _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_KEY0) Register Mask  */


/* -------- SILEX_RNG_DATA_KEY1 : (SILEX Offset: 0x4014) (R/W 32) Key register. -------- */
#define SILEX_RNG_DATA_KEY1_RESETVALUE        _U_(0x00)                                            /**<  (SILEX_RNG_DATA_KEY1) Key register.  Reset Value */

#define SILEX_RNG_DATA_KEY1_KEY1_Pos          _U_(0)                                               /**< (SILEX_RNG_DATA_KEY1) Key register. Position */
#define SILEX_RNG_DATA_KEY1_KEY1_Msk          (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_KEY1_KEY1_Pos)    /**< (SILEX_RNG_DATA_KEY1) Key register. Mask */
#define SILEX_RNG_DATA_KEY1_KEY1(value)       (SILEX_RNG_DATA_KEY1_KEY1_Msk & ((value) << SILEX_RNG_DATA_KEY1_KEY1_Pos))
#define SILEX_RNG_DATA_KEY1_Msk               _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_KEY1) Register Mask  */


/* -------- SILEX_RNG_DATA_KEY2 : (SILEX Offset: 0x4018) (R/W 32) Key register. -------- */
#define SILEX_RNG_DATA_KEY2_RESETVALUE        _U_(0x00)                                            /**<  (SILEX_RNG_DATA_KEY2) Key register.  Reset Value */

#define SILEX_RNG_DATA_KEY2_KEY2_Pos          _U_(0)                                               /**< (SILEX_RNG_DATA_KEY2) Key register. Position */
#define SILEX_RNG_DATA_KEY2_KEY2_Msk          (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_KEY2_KEY2_Pos)    /**< (SILEX_RNG_DATA_KEY2) Key register. Mask */
#define SILEX_RNG_DATA_KEY2_KEY2(value)       (SILEX_RNG_DATA_KEY2_KEY2_Msk & ((value) << SILEX_RNG_DATA_KEY2_KEY2_Pos))
#define SILEX_RNG_DATA_KEY2_Msk               _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_KEY2) Register Mask  */


/* -------- SILEX_RNG_DATA_KEY3 : (SILEX Offset: 0x401C) (R/W 32) Key register (LSB). -------- */
#define SILEX_RNG_DATA_KEY3_RESETVALUE        _U_(0x00)                                            /**<  (SILEX_RNG_DATA_KEY3) Key register (LSB).  Reset Value */

#define SILEX_RNG_DATA_KEY3_KEY3_Pos          _U_(0)                                               /**< (SILEX_RNG_DATA_KEY3) Key register (LSB). Position */
#define SILEX_RNG_DATA_KEY3_KEY3_Msk          (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_KEY3_KEY3_Pos)    /**< (SILEX_RNG_DATA_KEY3) Key register (LSB). Mask */
#define SILEX_RNG_DATA_KEY3_KEY3(value)       (SILEX_RNG_DATA_KEY3_KEY3_Msk & ((value) << SILEX_RNG_DATA_KEY3_KEY3_Pos))
#define SILEX_RNG_DATA_KEY3_Msk               _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_KEY3) Register Mask  */


/* -------- SILEX_RNG_DATA_TESTDATA : (SILEX Offset: 0x4020) ( /W 32) Test data register. -------- */
#define SILEX_RNG_DATA_TESTDATA_RESETVALUE    _U_(0x00)                                            /**<  (SILEX_RNG_DATA_TESTDATA) Test data register.  Reset Value */

#define SILEX_RNG_DATA_TESTDATA_TESTDATA_Pos  _U_(0)                                               /**< (SILEX_RNG_DATA_TESTDATA) Test data register. Position */
#define SILEX_RNG_DATA_TESTDATA_TESTDATA_Msk  (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_TESTDATA_TESTDATA_Pos) /**< (SILEX_RNG_DATA_TESTDATA) Test data register. Mask */
#define SILEX_RNG_DATA_TESTDATA_TESTDATA(value) (SILEX_RNG_DATA_TESTDATA_TESTDATA_Msk & ((value) << SILEX_RNG_DATA_TESTDATA_TESTDATA_Pos))
#define SILEX_RNG_DATA_TESTDATA_Msk           _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_TESTDATA) Register Mask  */


/* -------- SILEX_RNG_DATA_REPEATTHRESHOLD : (SILEX Offset: 0x4024) (R/W 32) Repetition Test Count Cut-Off value. -------- */
#define SILEX_RNG_DATA_REPEATTHRESHOLD_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_DATA_REPEATTHRESHOLD) Repetition Test Count Cut-Off value.  Reset Value */

#define SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Position */
#define SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos) /**< (SILEX_RNG_DATA_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Mask */
#define SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD(value) (SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Msk & ((value) << SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos))
#define SILEX_RNG_DATA_REPEATTHRESHOLD_Msk    _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_REPEATTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_DATA_PROPTHRESHOLD : (SILEX Offset: 0x4028) (R/W 32) Adaptive Proportion Test (1024-sample window) Cut-Off value. -------- */
#define SILEX_RNG_DATA_PROPTHRESHOLD_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_DATA_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value.  Reset Value */

#define SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Position */
#define SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Pos) /**< (SILEX_RNG_DATA_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Mask */
#define SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD(value) (SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Msk & ((value) << SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Pos))
#define SILEX_RNG_DATA_PROPTHRESHOLD_Msk      _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_PROPTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_DATA_STATUS : (SILEX Offset: 0x4030) (R/W 32) Status register. -------- */
#define SILEX_RNG_DATA_STATUS_RESETVALUE      _U_(0x00)                                            /**<  (SILEX_RNG_DATA_STATUS) Status register.  Reset Value */

#define SILEX_RNG_DATA_STATUS_TESTDATABUSY_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_STATUS) High when data written to TestData register is being processed. (see section 4.7) Position */
#define SILEX_RNG_DATA_STATUS_TESTDATABUSY_Msk (_U_(0x1) << SILEX_RNG_DATA_STATUS_TESTDATABUSY_Pos) /**< (SILEX_RNG_DATA_STATUS) High when data written to TestData register is being processed. (see section 4.7) Mask */
#define SILEX_RNG_DATA_STATUS_TESTDATABUSY(value) (SILEX_RNG_DATA_STATUS_TESTDATABUSY_Msk & ((value) << SILEX_RNG_DATA_STATUS_TESTDATABUSY_Pos))
#define SILEX_RNG_DATA_STATUS_STATE_Pos       _U_(1)                                               /**< (SILEX_RNG_DATA_STATUS) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Position */
#define SILEX_RNG_DATA_STATUS_STATE_Msk       (_U_(0x7) << SILEX_RNG_DATA_STATUS_STATE_Pos)        /**< (SILEX_RNG_DATA_STATUS) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Mask */
#define SILEX_RNG_DATA_STATUS_STATE(value)    (SILEX_RNG_DATA_STATUS_STATE_Msk & ((value) << SILEX_RNG_DATA_STATUS_STATE_Pos))
#define SILEX_RNG_DATA_STATUS_REPFAIL_Pos     _U_(4)                                               /**< (SILEX_RNG_DATA_STATUS) NIST-800-90B repetition Count Test interrupt status. Position */
#define SILEX_RNG_DATA_STATUS_REPFAIL_Msk     (_U_(0x1) << SILEX_RNG_DATA_STATUS_REPFAIL_Pos)      /**< (SILEX_RNG_DATA_STATUS) NIST-800-90B repetition Count Test interrupt status. Mask */
#define SILEX_RNG_DATA_STATUS_REPFAIL(value)  (SILEX_RNG_DATA_STATUS_REPFAIL_Msk & ((value) << SILEX_RNG_DATA_STATUS_REPFAIL_Pos))
#define SILEX_RNG_DATA_STATUS_PROPFAIL_Pos    _U_(5)                                               /**< (SILEX_RNG_DATA_STATUS) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Position */
#define SILEX_RNG_DATA_STATUS_PROPFAIL_Msk    (_U_(0x1) << SILEX_RNG_DATA_STATUS_PROPFAIL_Pos)     /**< (SILEX_RNG_DATA_STATUS) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Mask */
#define SILEX_RNG_DATA_STATUS_PROPFAIL(value) (SILEX_RNG_DATA_STATUS_PROPFAIL_Msk & ((value) << SILEX_RNG_DATA_STATUS_PROPFAIL_Pos))
#define SILEX_RNG_DATA_STATUS_FULLINT_Pos     _U_(7)                                               /**< (SILEX_RNG_DATA_STATUS) FIFO full status. Position */
#define SILEX_RNG_DATA_STATUS_FULLINT_Msk     (_U_(0x1) << SILEX_RNG_DATA_STATUS_FULLINT_Pos)      /**< (SILEX_RNG_DATA_STATUS) FIFO full status. Mask */
#define SILEX_RNG_DATA_STATUS_FULLINT(value)  (SILEX_RNG_DATA_STATUS_FULLINT_Msk & ((value) << SILEX_RNG_DATA_STATUS_FULLINT_Pos))
#define SILEX_RNG_DATA_STATUS_PREINT_Pos      _U_(8)                                               /**< (SILEX_RNG_DATA_STATUS) AIS31 preliminary noise alarm interrupt status. Position */
#define SILEX_RNG_DATA_STATUS_PREINT_Msk      (_U_(0x1) << SILEX_RNG_DATA_STATUS_PREINT_Pos)       /**< (SILEX_RNG_DATA_STATUS) AIS31 preliminary noise alarm interrupt status. Mask */
#define SILEX_RNG_DATA_STATUS_PREINT(value)   (SILEX_RNG_DATA_STATUS_PREINT_Msk & ((value) << SILEX_RNG_DATA_STATUS_PREINT_Pos))
#define SILEX_RNG_DATA_STATUS_ALMINT_Pos      _U_(9)                                               /**< (SILEX_RNG_DATA_STATUS) AIS31 noise alarm interrupt status. Position */
#define SILEX_RNG_DATA_STATUS_ALMINT_Msk      (_U_(0x1) << SILEX_RNG_DATA_STATUS_ALMINT_Pos)       /**< (SILEX_RNG_DATA_STATUS) AIS31 noise alarm interrupt status. Mask */
#define SILEX_RNG_DATA_STATUS_ALMINT(value)   (SILEX_RNG_DATA_STATUS_ALMINT_Msk & ((value) << SILEX_RNG_DATA_STATUS_ALMINT_Pos))
#define SILEX_RNG_DATA_STATUS_STARTUPFAIL_Pos _U_(10)                                              /**< (SILEX_RNG_DATA_STATUS) Start-up test failure. Position */
#define SILEX_RNG_DATA_STATUS_STARTUPFAIL_Msk (_U_(0x1) << SILEX_RNG_DATA_STATUS_STARTUPFAIL_Pos)  /**< (SILEX_RNG_DATA_STATUS) Start-up test failure. Mask */
#define SILEX_RNG_DATA_STATUS_STARTUPFAIL(value) (SILEX_RNG_DATA_STATUS_STARTUPFAIL_Msk & ((value) << SILEX_RNG_DATA_STATUS_STARTUPFAIL_Pos))
#define SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Pos _U_(11)                                              /**< (SILEX_RNG_DATA_STATUS) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Position */
#define SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Msk (_U_(0x1) << SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Pos)  /**< (SILEX_RNG_DATA_STATUS) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Mask */
#define SILEX_RNG_DATA_STATUS_FIFOACCFAIL(value) (SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Msk & ((value) << SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Pos))
#define SILEX_RNG_DATA_STATUS_Msk             _U_(0x00000FBF)                                      /**< (SILEX_RNG_DATA_STATUS) Register Mask  */


/* -------- SILEX_RNG_DATA_INITWAITVAL : (SILEX Offset: 0x4034) (R/W 32) Initial wait counter value. -------- */
#define SILEX_RNG_DATA_INITWAITVAL_RESETVALUE _U_(0xFFFF)                                          /**<  (SILEX_RNG_DATA_INITWAITVAL) Initial wait counter value.  Reset Value */

#define SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_INITWAITVAL) Number of clock cycles to wait before sampling data from the noise source. Position */
#define SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Msk (_U_(0xFFFF) << SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Pos) /**< (SILEX_RNG_DATA_INITWAITVAL) Number of clock cycles to wait before sampling data from the noise source. Mask */
#define SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL(value) (SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Msk & ((value) << SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Pos))
#define SILEX_RNG_DATA_INITWAITVAL_Msk        _U_(0x0000FFFF)                                      /**< (SILEX_RNG_DATA_INITWAITVAL) Register Mask  */


/* -------- SILEX_RNG_DATA_DISABLEOSC0 : (SILEX Offset: 0x4038) (R/W 32) Disable oscillator rings #0 to #31. -------- */
#define SILEX_RNG_DATA_DISABLEOSC0_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_DATA_DISABLEOSC0) Disable oscillator rings #0 to #31.  Reset Value */

#define SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_DISABLEOSC0) Disable oscillator rings #0 to #31. Position */
#define SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Pos) /**< (SILEX_RNG_DATA_DISABLEOSC0) Disable oscillator rings #0 to #31. Mask */
#define SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0(value) (SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Msk & ((value) << SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Pos))
#define SILEX_RNG_DATA_DISABLEOSC0_Msk        _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_DISABLEOSC0) Register Mask  */


/* -------- SILEX_RNG_DATA_DISABLEOSC1 : (SILEX Offset: 0x403C) (R/W 32) Disable oscillator rings #32 to #63. -------- */
#define SILEX_RNG_DATA_DISABLEOSC1_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_DATA_DISABLEOSC1) Disable oscillator rings #32 to #63.  Reset Value */

#define SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_DISABLEOSC1) Disable oscillator rings #32 to #63. Position */
#define SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Msk (_U_(0xFFFFFFFF) << SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Pos) /**< (SILEX_RNG_DATA_DISABLEOSC1) Disable oscillator rings #32 to #63. Mask */
#define SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1(value) (SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Msk & ((value) << SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Pos))
#define SILEX_RNG_DATA_DISABLEOSC1_Msk        _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_DISABLEOSC1) Register Mask  */


/* -------- SILEX_RNG_DATA_SWOFFTMRVAL : (SILEX Offset: 0x4040) (R/W 32) Switch off timer value. -------- */
#define SILEX_RNG_DATA_SWOFFTMRVAL_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_DATA_SWOFFTMRVAL) Switch off timer value.  Reset Value */

#define SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_SWOFFTMRVAL) Number of clk cycles to wait before stopping the rings after the FIFO is full. Position */
#define SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Msk (_U_(0xFFFF) << SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Pos) /**< (SILEX_RNG_DATA_SWOFFTMRVAL) Number of clk cycles to wait before stopping the rings after the FIFO is full. Mask */
#define SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL(value) (SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Msk & ((value) << SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Pos))
#define SILEX_RNG_DATA_SWOFFTMRVAL_Msk        _U_(0x0000FFFF)                                      /**< (SILEX_RNG_DATA_SWOFFTMRVAL) Register Mask  */


/* -------- SILEX_RNG_DATA_CLKDIV : (SILEX Offset: 0x4044) (R/W 32) Sample clock divider. -------- */
#define SILEX_RNG_DATA_CLKDIV_RESETVALUE      _U_(0x00)                                            /**<  (SILEX_RNG_DATA_CLKDIV) Sample clock divider.  Reset Value */

#define SILEX_RNG_DATA_CLKDIV_CLKDIV_Pos      _U_(0)                                               /**< (SILEX_RNG_DATA_CLKDIV) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Position */
#define SILEX_RNG_DATA_CLKDIV_CLKDIV_Msk      (_U_(0xFF) << SILEX_RNG_DATA_CLKDIV_CLKDIV_Pos)      /**< (SILEX_RNG_DATA_CLKDIV) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Mask */
#define SILEX_RNG_DATA_CLKDIV_CLKDIV(value)   (SILEX_RNG_DATA_CLKDIV_CLKDIV_Msk & ((value) << SILEX_RNG_DATA_CLKDIV_CLKDIV_Pos))
#define SILEX_RNG_DATA_CLKDIV_Msk             _U_(0x000000FF)                                      /**< (SILEX_RNG_DATA_CLKDIV) Register Mask  */


/* -------- SILEX_RNG_DATA_AIS31CONF0 : (SILEX Offset: 0x4048) (R/W 32) AIS31 configuration register 0. -------- */
#define SILEX_RNG_DATA_AIS31CONF0_RESETVALUE  _U_(0x00)                                            /**<  (SILEX_RNG_DATA_AIS31CONF0) AIS31 configuration register 0.  Reset Value */

#define SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_AIS31CONF0) Start-up test threshold. Position */
#define SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Msk (_U_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Pos) /**< (SILEX_RNG_DATA_AIS31CONF0) Start-up test threshold. Mask */
#define SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD(value) (SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Msk & ((value) << SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Pos))
#define SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Pos _U_(16)                                              /**< (SILEX_RNG_DATA_AIS31CONF0) Online threshold. Position */
#define SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Msk (_U_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Pos) /**< (SILEX_RNG_DATA_AIS31CONF0) Online threshold. Mask */
#define SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD(value) (SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Msk & ((value) << SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Pos))
#define SILEX_RNG_DATA_AIS31CONF0_Msk         _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_AIS31CONF0) Register Mask  */


/* -------- SILEX_RNG_DATA_AIS31CONF1 : (SILEX Offset: 0x404C) (R/W 32) AIS31 configuration register 1. -------- */
#define SILEX_RNG_DATA_AIS31CONF1_RESETVALUE  _U_(0x00)                                            /**<  (SILEX_RNG_DATA_AIS31CONF1) AIS31 configuration register 1.  Reset Value */

#define SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_AIS31CONF1) Online repeat threshold. Position */
#define SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Msk (_U_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Pos) /**< (SILEX_RNG_DATA_AIS31CONF1) Online repeat threshold. Mask */
#define SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD(value) (SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Msk & ((value) << SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Pos))
#define SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Pos _U_(16)                                              /**< (SILEX_RNG_DATA_AIS31CONF1) Expected history value. Position */
#define SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Msk (_U_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Pos) /**< (SILEX_RNG_DATA_AIS31CONF1) Expected history value. Mask */
#define SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE(value) (SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Msk & ((value) << SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Pos))
#define SILEX_RNG_DATA_AIS31CONF1_Msk         _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_AIS31CONF1) Register Mask  */


/* -------- SILEX_RNG_DATA_AIS31CONF2 : (SILEX Offset: 0x4050) (R/W 32) AIS31 configuration register 2. -------- */
#define SILEX_RNG_DATA_AIS31CONF2_RESETVALUE  _U_(0x00)                                            /**<  (SILEX_RNG_DATA_AIS31CONF2) AIS31 configuration register 2.  Reset Value */

#define SILEX_RNG_DATA_AIS31CONF2_HMIN_Pos    _U_(0)                                               /**< (SILEX_RNG_DATA_AIS31CONF2) Minimum allowed history value. Position */
#define SILEX_RNG_DATA_AIS31CONF2_HMIN_Msk    (_U_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF2_HMIN_Pos)  /**< (SILEX_RNG_DATA_AIS31CONF2) Minimum allowed history value. Mask */
#define SILEX_RNG_DATA_AIS31CONF2_HMIN(value) (SILEX_RNG_DATA_AIS31CONF2_HMIN_Msk & ((value) << SILEX_RNG_DATA_AIS31CONF2_HMIN_Pos))
#define SILEX_RNG_DATA_AIS31CONF2_HMAX_Pos    _U_(16)                                              /**< (SILEX_RNG_DATA_AIS31CONF2) Maximum allowed history value. Position */
#define SILEX_RNG_DATA_AIS31CONF2_HMAX_Msk    (_U_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF2_HMAX_Pos)  /**< (SILEX_RNG_DATA_AIS31CONF2) Maximum allowed history value. Mask */
#define SILEX_RNG_DATA_AIS31CONF2_HMAX(value) (SILEX_RNG_DATA_AIS31CONF2_HMAX_Msk & ((value) << SILEX_RNG_DATA_AIS31CONF2_HMAX_Pos))
#define SILEX_RNG_DATA_AIS31CONF2_Msk         _U_(0xFFFFFFFF)                                      /**< (SILEX_RNG_DATA_AIS31CONF2) Register Mask  */


/* -------- SILEX_RNG_DATA_AIS31STATUS : (SILEX Offset: 0x4054) (R/W 32) AIS31 status register. -------- */
#define SILEX_RNG_DATA_AIS31STATUS_RESETVALUE _U_(0x00)                                            /**<  (SILEX_RNG_DATA_AIS31STATUS) AIS31 status register.  Reset Value */

#define SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_AIS31STATUS) Number of preliminary noise alarms since counter was last cleared. Position */
#define SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Msk (_U_(0xFFFF) << SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Pos) /**< (SILEX_RNG_DATA_AIS31STATUS) Number of preliminary noise alarms since counter was last cleared. Mask */
#define SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS(value) (SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Msk & ((value) << SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Pos))
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Pos _U_(16)                                              /**< (SILEX_RNG_DATA_AIS31STATUS) Last preliminary noise alarm occurred due to history value out of range. Position */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Msk (_U_(0x1) << SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Pos) /**< (SILEX_RNG_DATA_AIS31STATUS) Last preliminary noise alarm occurred due to history value out of range. Mask */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG(value) (SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Msk & ((value) << SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Pos))
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Pos _U_(17)                                              /**< (SILEX_RNG_DATA_AIS31STATUS) Last preliminary noise alarm occurred due to consecutive high X**2. Position */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Msk (_U_(0x1) << SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Pos) /**< (SILEX_RNG_DATA_AIS31STATUS) Last preliminary noise alarm occurred due to consecutive high X**2. Mask */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP(value) (SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Msk & ((value) << SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Pos))
#define SILEX_RNG_DATA_AIS31STATUS_Msk        _U_(0x0003FFFF)                                      /**< (SILEX_RNG_DATA_AIS31STATUS) Register Mask  */


/* -------- SILEX_RNG_DATA_HWCONFIG : (SILEX Offset: 0x4058) ( R/ 32) Hardware configuration register. -------- */
#define SILEX_RNG_DATA_HWCONFIG_RESETVALUE    _U_(0x00)                                            /**<  (SILEX_RNG_DATA_HWCONFIG) Hardware configuration register.  Reset Value */

#define SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Pos _U_(0)                                               /**< (SILEX_RNG_DATA_HWCONFIG) Generic g_NumRings value. Position */
#define SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Msk (_U_(0xFF) << SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Pos) /**< (SILEX_RNG_DATA_HWCONFIG) Generic g_NumRings value. Mask */
#define SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS(value) (SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Msk & ((value) << SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Pos))
#define SILEX_RNG_DATA_HWCONFIG_AIS31_Pos     _U_(8)                                               /**< (SILEX_RNG_DATA_HWCONFIG) Generic g_AIS31 value. Position */
#define SILEX_RNG_DATA_HWCONFIG_AIS31_Msk     (_U_(0x1) << SILEX_RNG_DATA_HWCONFIG_AIS31_Pos)      /**< (SILEX_RNG_DATA_HWCONFIG) Generic g_AIS31 value. Mask */
#define SILEX_RNG_DATA_HWCONFIG_AIS31(value)  (SILEX_RNG_DATA_HWCONFIG_AIS31_Msk & ((value) << SILEX_RNG_DATA_HWCONFIG_AIS31_Pos))
#define SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Pos _U_(9)                                               /**< (SILEX_RNG_DATA_HWCONFIG) Generic g_AIS31Full value. Position */
#define SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Msk (_U_(0x1) << SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Pos)  /**< (SILEX_RNG_DATA_HWCONFIG) Generic g_AIS31Full value. Mask */
#define SILEX_RNG_DATA_HWCONFIG_AIS31FULL(value) (SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Msk & ((value) << SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Pos))
#define SILEX_RNG_DATA_HWCONFIG_Msk           _U_(0x000003FF)                                      /**< (SILEX_RNG_DATA_HWCONFIG) Register Mask  */

#define SILEX_RNG_DATA_HWCONFIG_AIS_Pos       _U_(8)                                               /**< (SILEX_RNG_DATA_HWCONFIG Position) Generic g_AIS3x value. */
#define SILEX_RNG_DATA_HWCONFIG_AIS_Msk       (_U_(0x1) << SILEX_RNG_DATA_HWCONFIG_AIS_Pos)        /**< (SILEX_RNG_DATA_HWCONFIG Mask) AIS */
#define SILEX_RNG_DATA_HWCONFIG_AIS(value)    (SILEX_RNG_DATA_HWCONFIG_AIS_Msk & ((value) << SILEX_RNG_DATA_HWCONFIG_AIS_Pos)) 

/** \brief SILEX register offsets definitions */
#define SILEX_DMA_FETCH_ADDR_LSB_REG_OFST (0x00)              /* (SILEX_DMA_FETCH_ADDR_LSB)  Offset */
#define SILEX_DMA_FETCH_ADDR_MSB_REG_OFST (0x04)              /* (SILEX_DMA_FETCH_ADDR_MSB)  Offset */
#define SILEX_DMA_FETCH_LEN_REG_OFST   (0x08)              /* (SILEX_DMA_FETCH_LEN)  Offset */
#define SILEX_DMA_FETCH_TAG_REG_OFST   (0x0C)              /* (SILEX_DMA_FETCH_TAG)  Offset */
#define SILEX_DMA_PUSH_ADDR_LSB_REG_OFST (0x10)              /* (SILEX_DMA_PUSH_ADDR_LSB)  Offset */
#define SILEX_DMA_PUSH_ADDR_MSB_REG_OFST (0x14)              /* (SILEX_DMA_PUSH_ADDR_MSB)  Offset */
#define SILEX_DMA_PUSH_LEN_REG_OFST    (0x18)              /* (SILEX_DMA_PUSH_LEN)  Offset */
#define SILEX_DMA_INT_EN_REG_OFST      (0x1C)              /* (SILEX_DMA_INT_EN)  Offset */
#define SILEX_DMA_INT_ENSET_REG_OFST   (0x20)              /* (SILEX_DMA_INT_ENSET)  Offset */
#define SILEX_DMA_INT_ENCLR_REG_OFST   (0x24)              /* (SILEX_DMA_INT_ENCLR)  Offset */
#define SILEX_DMA_INT_STATRAW_REG_OFST (0x28)              /* (SILEX_DMA_INT_STATRAW)  Offset */
#define SILEX_DMA_INT_STAT_REG_OFST    (0x2C)              /* (SILEX_DMA_INT_STAT)  Offset */
#define SILEX_DMA_INT_STATCLR_REG_OFST (0x30)              /* (SILEX_DMA_INT_STATCLR)  Offset */
#define SILEX_DMA_CONFIG_REG_OFST      (0x34)              /* (SILEX_DMA_CONFIG)  Offset */
#define SILEX_DMA_START_REG_OFST       (0x38)              /* (SILEX_DMA_START)  Offset */
#define SILEX_DMA_STATUS_REG_OFST      (0x3C)              /* (SILEX_DMA_STATUS)  Offset */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_REG_OFST (0x400)             /* (SILEX_HWCONF_INCL_IPS_HW_CFG)  Offset */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_REG_OFST (0x404)             /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1)  Offset */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_REG_OFST (0x408)             /* (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration. Offset */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_REG_OFST (0x40C)             /* (SILEX_HWCONF_BA413_HASH_HW_CFG)  Offset */
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_REG_OFST (0x410)             /* (SILEX_HWCONF_BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. Offset */
#define SILEX_HWCONF_BA419_SM4_HW_CFG_REG_OFST (0x414)             /* (SILEX_HWCONF_BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. Offset */
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_REG_OFST (0x418)             /* (SILEX_HWCONF_BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration. Offset */
#define SILEX_RNG_CONTROL_CONTROL_REG_OFST (0x1000)            /* (SILEX_RNG_CONTROL_CONTROL) Control register Offset */
#define SILEX_RNG_CONTROL_FIFOLEVEL_REG_OFST (0x1004)            /* (SILEX_RNG_CONTROL_FIFOLEVEL) FIFO level register. Offset */
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_REG_OFST (0x1008)            /* (SILEX_RNG_CONTROL_FIFOTHRESHOLD) FIFO threshold register. Offset */
#define SILEX_RNG_CONTROL_FIFODEPTH_REG_OFST (0x100C)            /* (SILEX_RNG_CONTROL_FIFODEPTH) FIFO depth register. Offset */
#define SILEX_RNG_CONTROL_KEY0_REG_OFST (0x1010)            /* (SILEX_RNG_CONTROL_KEY0) Key register (MSB). Offset */
#define SILEX_RNG_CONTROL_KEY1_REG_OFST (0x1014)            /* (SILEX_RNG_CONTROL_KEY1) Key register. Offset */
#define SILEX_RNG_CONTROL_KEY2_REG_OFST (0x1018)            /* (SILEX_RNG_CONTROL_KEY2) Key register. Offset */
#define SILEX_RNG_CONTROL_KEY3_REG_OFST (0x101C)            /* (SILEX_RNG_CONTROL_KEY3) Key register (LSB). Offset */
#define SILEX_RNG_CONTROL_TESTDATA_REG_OFST (0x1020)            /* (SILEX_RNG_CONTROL_TESTDATA) Test data register. Offset */
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_REG_OFST (0x1024)            /* (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Offset */
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_REG_OFST (0x1028)            /* (SILEX_RNG_CONTROL_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Offset */
#define SILEX_RNG_CONTROL_STATUS_REG_OFST (0x1030)            /* (SILEX_RNG_CONTROL_STATUS) Status register. Offset */
#define SILEX_RNG_CONTROL_INITWAITVAL_REG_OFST (0x1034)            /* (SILEX_RNG_CONTROL_INITWAITVAL) Initial wait counter value. Offset */
#define SILEX_RNG_CONTROL_DISABLEOSC0_REG_OFST (0x1038)            /* (SILEX_RNG_CONTROL_DISABLEOSC0) Disable oscillator rings #0 to #31. Offset */
#define SILEX_RNG_CONTROL_DISABLEOSC1_REG_OFST (0x103C)            /* (SILEX_RNG_CONTROL_DISABLEOSC1) Disable oscillator rings #32 to #63. Offset */
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_REG_OFST (0x1040)            /* (SILEX_RNG_CONTROL_SWOFFTMRVAL) Switch off timer value. Offset */
#define SILEX_RNG_CONTROL_CLKDIV_REG_OFST (0x1044)            /* (SILEX_RNG_CONTROL_CLKDIV) Sample clock divider. Offset */
#define SILEX_RNG_CONTROL_AIS31CONF0_REG_OFST (0x1048)            /* (SILEX_RNG_CONTROL_AIS31CONF0) AIS31 configuration register 0. Offset */
#define SILEX_RNG_CONTROL_AIS31CONF1_REG_OFST (0x104C)            /* (SILEX_RNG_CONTROL_AIS31CONF1) AIS31 configuration register 1. Offset */
#define SILEX_RNG_CONTROL_AIS31CONF2_REG_OFST (0x1050)            /* (SILEX_RNG_CONTROL_AIS31CONF2) AIS31 configuration register 2. Offset */
#define SILEX_RNG_CONTROL_AIS31STATUS_REG_OFST (0x1054)            /* (SILEX_RNG_CONTROL_AIS31STATUS) AIS31 status register. Offset */
#define SILEX_RNG_CONTROL_HWCONFIG_REG_OFST (0x1058)            /* (SILEX_RNG_CONTROL_HWCONFIG) Hardware configuration register. Offset */
#define SILEX_PK_POINTERS_REG_OFST     (0x2000)            /* (SILEX_PK_POINTERS) Pointers register. Offset */
#define SILEX_PK_COMMAND_REG_OFST      (0x2004)            /* (SILEX_PK_COMMAND) Command register. Offset */
#define SILEX_PK_CONTROL_REG_OFST      (0x2008)            /* (SILEX_PK_CONTROL) Command register. Offset */
#define SILEX_PK_STATUS_REG_OFST       (0x200C)            /* (SILEX_PK_STATUS) Status register. Offset */
#define SILEX_PK_TIMER_REG_OFST        (0x2014)            /* (SILEX_PK_TIMER) Timer register. Offset */
#define SILEX_PK_HWCONFIG_REG_OFST     (0x2018)            /* (SILEX_PK_HWCONFIG) Hardware configuration register. Offset */
#define SILEX_PK_OPSIZE_REG_OFST       (0x201C)            /* (SILEX_PK_OPSIZE) Operand size register. Offset */
#define SILEX_PK_MEMOFFSET_REG_OFST    (0x2020)            /* (SILEX_PK_MEMOFFSET) Memory offset register. Offset */
#define SILEX_PK_MICROCODEOFFSET_REG_OFST (0x2024)            /* (SILEX_PK_MICROCODEOFFSET) MicroCode offset register. Offset */
#define SILEX_RNG_DATA_CONTROL_REG_OFST (0x4000)            /* (SILEX_RNG_DATA_CONTROL) Control register Offset */
#define SILEX_RNG_DATA_FIFOLEVEL_REG_OFST (0x4004)            /* (SILEX_RNG_DATA_FIFOLEVEL) FIFO level register. Offset */
#define SILEX_RNG_DATA_FIFOTHRESHOLD_REG_OFST (0x4008)            /* (SILEX_RNG_DATA_FIFOTHRESHOLD) FIFO threshold register. Offset */
#define SILEX_RNG_DATA_FIFODEPTH_REG_OFST (0x400C)            /* (SILEX_RNG_DATA_FIFODEPTH) FIFO depth register. Offset */
#define SILEX_RNG_DATA_KEY0_REG_OFST   (0x4010)            /* (SILEX_RNG_DATA_KEY0) Key register (MSB). Offset */
#define SILEX_RNG_DATA_KEY1_REG_OFST   (0x4014)            /* (SILEX_RNG_DATA_KEY1) Key register. Offset */
#define SILEX_RNG_DATA_KEY2_REG_OFST   (0x4018)            /* (SILEX_RNG_DATA_KEY2) Key register. Offset */
#define SILEX_RNG_DATA_KEY3_REG_OFST   (0x401C)            /* (SILEX_RNG_DATA_KEY3) Key register (LSB). Offset */
#define SILEX_RNG_DATA_TESTDATA_REG_OFST (0x4020)            /* (SILEX_RNG_DATA_TESTDATA) Test data register. Offset */
#define SILEX_RNG_DATA_REPEATTHRESHOLD_REG_OFST (0x4024)            /* (SILEX_RNG_DATA_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Offset */
#define SILEX_RNG_DATA_PROPTHRESHOLD_REG_OFST (0x4028)            /* (SILEX_RNG_DATA_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Offset */
#define SILEX_RNG_DATA_STATUS_REG_OFST (0x4030)            /* (SILEX_RNG_DATA_STATUS) Status register. Offset */
#define SILEX_RNG_DATA_INITWAITVAL_REG_OFST (0x4034)            /* (SILEX_RNG_DATA_INITWAITVAL) Initial wait counter value. Offset */
#define SILEX_RNG_DATA_DISABLEOSC0_REG_OFST (0x4038)            /* (SILEX_RNG_DATA_DISABLEOSC0) Disable oscillator rings #0 to #31. Offset */
#define SILEX_RNG_DATA_DISABLEOSC1_REG_OFST (0x403C)            /* (SILEX_RNG_DATA_DISABLEOSC1) Disable oscillator rings #32 to #63. Offset */
#define SILEX_RNG_DATA_SWOFFTMRVAL_REG_OFST (0x4040)            /* (SILEX_RNG_DATA_SWOFFTMRVAL) Switch off timer value. Offset */
#define SILEX_RNG_DATA_CLKDIV_REG_OFST (0x4044)            /* (SILEX_RNG_DATA_CLKDIV) Sample clock divider. Offset */
#define SILEX_RNG_DATA_AIS31CONF0_REG_OFST (0x4048)            /* (SILEX_RNG_DATA_AIS31CONF0) AIS31 configuration register 0. Offset */
#define SILEX_RNG_DATA_AIS31CONF1_REG_OFST (0x404C)            /* (SILEX_RNG_DATA_AIS31CONF1) AIS31 configuration register 1. Offset */
#define SILEX_RNG_DATA_AIS31CONF2_REG_OFST (0x4050)            /* (SILEX_RNG_DATA_AIS31CONF2) AIS31 configuration register 2. Offset */
#define SILEX_RNG_DATA_AIS31STATUS_REG_OFST (0x4054)            /* (SILEX_RNG_DATA_AIS31STATUS) AIS31 status register. Offset */
#define SILEX_RNG_DATA_HWCONFIG_REG_OFST (0x4058)            /* (SILEX_RNG_DATA_HWCONFIG) Hardware configuration register. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SILEX register API structure */
typedef struct
{  /*  */
  __IO  uint32_t                       SILEX_DMA_FETCH_ADDR_LSB; /**< Offset: 0x00 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_FETCH_ADDR_MSB; /**< Offset: 0x04 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_FETCH_LEN; /**< Offset: 0x08 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_FETCH_TAG; /**< Offset: 0x0C (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_PUSH_ADDR_LSB; /**< Offset: 0x10 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_PUSH_ADDR_MSB; /**< Offset: 0x14 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_PUSH_LEN; /**< Offset: 0x18 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_INT_EN;   /**< Offset: 0x1C (R/W  32)  */
  __O   uint32_t                       SILEX_DMA_INT_ENSET; /**< Offset: 0x20 ( /W  32)  */
  __O   uint32_t                       SILEX_DMA_INT_ENCLR; /**< Offset: 0x24 ( /W  32)  */
  __I   uint32_t                       SILEX_DMA_INT_STATRAW; /**< Offset: 0x28 (R/   32)  */
  __I   uint32_t                       SILEX_DMA_INT_STAT; /**< Offset: 0x2C (R/   32)  */
  __O   uint32_t                       SILEX_DMA_INT_STATCLR; /**< Offset: 0x30 ( /W  32)  */
  __IO  uint32_t                       SILEX_DMA_CONFIG;   /**< Offset: 0x34 (R/W  32)  */
  __O   uint32_t                       SILEX_DMA_START;    /**< Offset: 0x38 ( /W  32)  */
  __I   uint32_t                       SILEX_DMA_STATUS;   /**< Offset: 0x3C (R/   32)  */
  __I   uint8_t                        Reserved1[0x3C0];
  __I   uint32_t                       SILEX_HWCONF_INCL_IPS_HW_CFG; /**< Offset: 0x400 (R/   32)  */
  __I   uint32_t                       SILEX_HWCONF_BA411E_AES_HW_CFG_1; /**< Offset: 0x404 (R/   32)  */
  __I   uint32_t                       SILEX_HWCONF_BA411E_AES_HW_CFG_2; /**< Offset: 0x408 (R/   32) Generic g_CtrSize value. BA411E-AES engine configuration. */
  __I   uint32_t                       SILEX_HWCONF_BA413_HASH_HW_CFG; /**< Offset: 0x40C (R/   32)  */
  __I   uint32_t                       SILEX_HWCONF_BA418_SHA3_HW_CFG; /**< Offset: 0x410 (R/   32) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. */
  __I   uint32_t                       SILEX_HWCONF_BA419_SM4_HW_CFG; /**< Offset: 0x414 (R/   32) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. */
  __I   uint32_t                       SILEX_HWCONF_BA424_ARIA_HW_CFG; /**< Offset: 0x418 (R/   32) Generic g_aria_modePoss value. BA424-Aria engine configuration. */
  __I   uint8_t                        Reserved2[0xBE4];
  __IO  uint32_t                       SILEX_RNG_CONTROL_CONTROL; /**< Offset: 0x1000 (R/W  32) Control register */
  __IO  uint32_t                       SILEX_RNG_CONTROL_FIFOLEVEL; /**< Offset: 0x1004 (R/W  32) FIFO level register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_FIFOTHRESHOLD; /**< Offset: 0x1008 (R/W  32) FIFO threshold register. */
  __I   uint32_t                       SILEX_RNG_CONTROL_FIFODEPTH; /**< Offset: 0x100C (R/   32) FIFO depth register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_KEY0; /**< Offset: 0x1010 (R/W  32) Key register (MSB). */
  __IO  uint32_t                       SILEX_RNG_CONTROL_KEY1; /**< Offset: 0x1014 (R/W  32) Key register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_KEY2; /**< Offset: 0x1018 (R/W  32) Key register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_KEY3; /**< Offset: 0x101C (R/W  32) Key register (LSB). */
  __O   uint32_t                       SILEX_RNG_CONTROL_TESTDATA; /**< Offset: 0x1020 ( /W  32) Test data register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_REPEATTHRESHOLD; /**< Offset: 0x1024 (R/W  32) Repetition Test Count Cut-Off value. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_PROPTHRESHOLD; /**< Offset: 0x1028 (R/W  32) Adaptive Proportion Test (1024-sample window) Cut-Off value. */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       SILEX_RNG_CONTROL_STATUS; /**< Offset: 0x1030 (R/W  32) Status register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_INITWAITVAL; /**< Offset: 0x1034 (R/W  32) Initial wait counter value. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_DISABLEOSC0; /**< Offset: 0x1038 (R/W  32) Disable oscillator rings #0 to #31. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_DISABLEOSC1; /**< Offset: 0x103C (R/W  32) Disable oscillator rings #32 to #63. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_SWOFFTMRVAL; /**< Offset: 0x1040 (R/W  32) Switch off timer value. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_CLKDIV; /**< Offset: 0x1044 (R/W  32) Sample clock divider. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_AIS31CONF0; /**< Offset: 0x1048 (R/W  32) AIS31 configuration register 0. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_AIS31CONF1; /**< Offset: 0x104C (R/W  32) AIS31 configuration register 1. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_AIS31CONF2; /**< Offset: 0x1050 (R/W  32) AIS31 configuration register 2. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_AIS31STATUS; /**< Offset: 0x1054 (R/W  32) AIS31 status register. */
  __I   uint32_t                       SILEX_RNG_CONTROL_HWCONFIG; /**< Offset: 0x1058 (R/   32) Hardware configuration register. */
  __I   uint8_t                        Reserved4[0xFA4];
  __IO  uint32_t                       SILEX_PK_POINTERS;  /**< Offset: 0x2000 (R/W  32) Pointers register. */
  __IO  uint32_t                       SILEX_PK_COMMAND;   /**< Offset: 0x2004 (R/W  32) Command register. */
  __O   uint32_t                       SILEX_PK_CONTROL;   /**< Offset: 0x2008 ( /W  32) Command register. */
  __I   uint32_t                       SILEX_PK_STATUS;    /**< Offset: 0x200C (R/   32) Status register. */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       SILEX_PK_TIMER;     /**< Offset: 0x2014 (R/W  32) Timer register. */
  __I   uint32_t                       SILEX_PK_HWCONFIG;  /**< Offset: 0x2018 (R/   32) Hardware configuration register. */
  __IO  uint32_t                       SILEX_PK_OPSIZE;    /**< Offset: 0x201C (R/W  32) Operand size register. */
  __IO  uint32_t                       SILEX_PK_MEMOFFSET; /**< Offset: 0x2020 (R/W  32) Memory offset register. */
  __IO  uint32_t                       SILEX_PK_MICROCODEOFFSET; /**< Offset: 0x2024 (R/W  32) MicroCode offset register. */
  __I   uint8_t                        Reserved6[0x1FD8];
  __IO  uint32_t                       SILEX_RNG_DATA_CONTROL; /**< Offset: 0x4000 (R/W  32) Control register */
  __IO  uint32_t                       SILEX_RNG_DATA_FIFOLEVEL; /**< Offset: 0x4004 (R/W  32) FIFO level register. */
  __IO  uint32_t                       SILEX_RNG_DATA_FIFOTHRESHOLD; /**< Offset: 0x4008 (R/W  32) FIFO threshold register. */
  __I   uint32_t                       SILEX_RNG_DATA_FIFODEPTH; /**< Offset: 0x400C (R/   32) FIFO depth register. */
  __IO  uint32_t                       SILEX_RNG_DATA_KEY0; /**< Offset: 0x4010 (R/W  32) Key register (MSB). */
  __IO  uint32_t                       SILEX_RNG_DATA_KEY1; /**< Offset: 0x4014 (R/W  32) Key register. */
  __IO  uint32_t                       SILEX_RNG_DATA_KEY2; /**< Offset: 0x4018 (R/W  32) Key register. */
  __IO  uint32_t                       SILEX_RNG_DATA_KEY3; /**< Offset: 0x401C (R/W  32) Key register (LSB). */
  __O   uint32_t                       SILEX_RNG_DATA_TESTDATA; /**< Offset: 0x4020 ( /W  32) Test data register. */
  __IO  uint32_t                       SILEX_RNG_DATA_REPEATTHRESHOLD; /**< Offset: 0x4024 (R/W  32) Repetition Test Count Cut-Off value. */
  __IO  uint32_t                       SILEX_RNG_DATA_PROPTHRESHOLD; /**< Offset: 0x4028 (R/W  32) Adaptive Proportion Test (1024-sample window) Cut-Off value. */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       SILEX_RNG_DATA_STATUS; /**< Offset: 0x4030 (R/W  32) Status register. */
  __IO  uint32_t                       SILEX_RNG_DATA_INITWAITVAL; /**< Offset: 0x4034 (R/W  32) Initial wait counter value. */
  __IO  uint32_t                       SILEX_RNG_DATA_DISABLEOSC0; /**< Offset: 0x4038 (R/W  32) Disable oscillator rings #0 to #31. */
  __IO  uint32_t                       SILEX_RNG_DATA_DISABLEOSC1; /**< Offset: 0x403C (R/W  32) Disable oscillator rings #32 to #63. */
  __IO  uint32_t                       SILEX_RNG_DATA_SWOFFTMRVAL; /**< Offset: 0x4040 (R/W  32) Switch off timer value. */
  __IO  uint32_t                       SILEX_RNG_DATA_CLKDIV; /**< Offset: 0x4044 (R/W  32) Sample clock divider. */
  __IO  uint32_t                       SILEX_RNG_DATA_AIS31CONF0; /**< Offset: 0x4048 (R/W  32) AIS31 configuration register 0. */
  __IO  uint32_t                       SILEX_RNG_DATA_AIS31CONF1; /**< Offset: 0x404C (R/W  32) AIS31 configuration register 1. */
  __IO  uint32_t                       SILEX_RNG_DATA_AIS31CONF2; /**< Offset: 0x4050 (R/W  32) AIS31 configuration register 2. */
  __IO  uint32_t                       SILEX_RNG_DATA_AIS31STATUS; /**< Offset: 0x4054 (R/W  32) AIS31 status register. */
  __I   uint32_t                       SILEX_RNG_DATA_HWCONFIG; /**< Offset: 0x4058 (R/   32) Hardware configuration register. */
} silex_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _WBZ35_SILEX_COMPONENT_H_ */
