/*
 * Component description for BTZBSYS
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
#ifndef _WBZ35_BTZBSYS_COMPONENT_H_
#define _WBZ35_BTZBSYS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR BTZBSYS                                      */
/* ************************************************************************** */

/* -------- BTZBSYS_SUBSYS_CNTRL_REG0 : (BTZBSYS Offset: 0x00) (R/W 32) SUBSYS_CNTRL_REG0 -------- */
#define BTZBSYS_SUBSYS_CNTRL_REG0_RESETVALUE  _U_(0x00)                                            /**<  (BTZBSYS_SUBSYS_CNTRL_REG0) SUBSYS_CNTRL_REG0  Reset Value */

#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_slp_ctrl_Pos _U_(0)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG0) zb_slp_ctrl Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_slp_ctrl_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_zb_slp_ctrl_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) zb_slp_ctrl Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_slp_ctrl(value) (BTZBSYS_SUBSYS_CNTRL_REG0_zb_slp_ctrl_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_zb_slp_ctrl_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_soft_reset_in_Pos _U_(1)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG0) zb_soft_reset_in Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_soft_reset_in_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_zb_soft_reset_in_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) zb_soft_reset_in Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_soft_reset_in(value) (BTZBSYS_SUBSYS_CNTRL_REG0_zb_soft_reset_in_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_zb_soft_reset_in_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_reset_by_fw_Pos _U_(3)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG0) zb_reset_by_fw Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_reset_by_fw_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_zb_reset_by_fw_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) zb_reset_by_fw Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_reset_by_fw(value) (BTZBSYS_SUBSYS_CNTRL_REG0_zb_reset_by_fw_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_zb_reset_by_fw_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_en_main_clk_Pos _U_(4)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG0) zb_en_main_clk Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_en_main_clk_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_zb_en_main_clk_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) zb_en_main_clk Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_zb_en_main_clk(value) (BTZBSYS_SUBSYS_CNTRL_REG0_zb_en_main_clk_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_zb_en_main_clk_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_1_iom_en_Pos _U_(5)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG0) ant_div_sel_1_iom_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_1_iom_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_1_iom_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) ant_div_sel_1_iom_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_1_iom_en(value) (BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_1_iom_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_1_iom_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_2_iom_en_Pos _U_(6)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG0) ant_div_sel_2_iom_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_2_iom_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_2_iom_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) ant_div_sel_2_iom_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_2_iom_en(value) (BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_2_iom_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_2_iom_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_pdc_ov_Pos _U_(16)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_pdc_ov Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_pdc_ov_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_pdc_ov_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_pdc_ov Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_pdc_ov(value) (BTZBSYS_SUBSYS_CNTRL_REG0_bt_pdc_ov_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_pdc_ov_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_sfr_wakeup_bit_Pos _U_(17)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_sfr_wakeup_bit Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_sfr_wakeup_bit_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_sfr_wakeup_bit_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_sfr_wakeup_bit Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_sfr_wakeup_bit(value) (BTZBSYS_SUBSYS_CNTRL_REG0_bt_sfr_wakeup_bit_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_sfr_wakeup_bit_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_hw_rc_re_cal_Pos _U_(18)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_hw_rc_re_cal Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_hw_rc_re_cal_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_hw_rc_re_cal_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_hw_rc_re_cal Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_hw_rc_re_cal(value) (BTZBSYS_SUBSYS_CNTRL_REG0_bt_hw_rc_re_cal_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_hw_rc_re_cal_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_reset_by_fw_Pos _U_(19)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_reset_by_fw Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_reset_by_fw_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_reset_by_fw_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_reset_by_fw Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_reset_by_fw(value) (BTZBSYS_SUBSYS_CNTRL_REG0_bt_reset_by_fw_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_reset_by_fw_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_en_main_clk_Pos _U_(20)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_en_main_clk Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_en_main_clk_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_en_main_clk_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) bt_en_main_clk Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_bt_en_main_clk(value) (BTZBSYS_SUBSYS_CNTRL_REG0_bt_en_main_clk_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_bt_en_main_clk_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_top_Pos _U_(22)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) subsys_dbg_bus_sel_top Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_top_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_top_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) subsys_dbg_bus_sel_top Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_top(value) (BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_top_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_top_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_aclb_soft_rst_n_Pos _U_(23)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) aclb_soft_rst_n Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_aclb_soft_rst_n_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_aclb_soft_rst_n_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) aclb_soft_rst_n Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_aclb_soft_rst_n(value) (BTZBSYS_SUBSYS_CNTRL_REG0_aclb_soft_rst_n_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_aclb_soft_rst_n_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_aclb_pwr_rst_n_Pos _U_(24)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) aclb_pwr_rst_n Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_aclb_pwr_rst_n_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_aclb_pwr_rst_n_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) aclb_pwr_rst_n Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_aclb_pwr_rst_n(value) (BTZBSYS_SUBSYS_CNTRL_REG0_aclb_pwr_rst_n_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_aclb_pwr_rst_n_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_Pos _U_(25)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) subsys_dbg_bus_sel Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) subsys_dbg_bus_sel Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel(value) (BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_subsys_dbg_bus_sel_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_arb_Pos _U_(26)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) disable_pclk_arb Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_arb_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_arb_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) disable_pclk_arb Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_arb(value) (BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_arb_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_arb_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_zb_mac_Pos _U_(27)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) disable_pclk_zb_mac Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_zb_mac_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_zb_mac_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) disable_pclk_zb_mac Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_zb_mac(value) (BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_zb_mac_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_zb_mac_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_bt_Pos _U_(28)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) disable_pclk_bt Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_bt_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_bt_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) disable_pclk_bt Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_bt(value) (BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_bt_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_disable_pclk_bt_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_val_Pos _U_(29)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) ant_div_sel_ovrd_val Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_val_Msk (_U_(0x3) << BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_val_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) ant_div_sel_ovrd_val Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_val(value) (BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_val_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_val_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_en_Pos _U_(31)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG0) ant_div_sel_ovrd_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG0) ant_div_sel_ovrd_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_en(value) (BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG0_ant_div_sel_ovrd_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG0_Msk         _U_(0xFFDF007B)                                      /**< (BTZBSYS_SUBSYS_CNTRL_REG0) Register Mask  */


/* -------- BTZBSYS_SUBSYS_CNTRL_REG1 : (BTZBSYS Offset: 0x04) (R/W 32) SUBSYS_CNTRL_REG1 -------- */
#define BTZBSYS_SUBSYS_CNTRL_REG1_RESETVALUE  _U_(0x1800)                                          /**<  (BTZBSYS_SUBSYS_CNTRL_REG1) SUBSYS_CNTRL_REG1  Reset Value */

#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_top_Pos _U_(0)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_dbg_bus_sel_top Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_top_Msk (_U_(0x3) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_top_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_dbg_bus_sel_top Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_top(value) (BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_top_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_top_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_Pos _U_(2)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_dbg_bus_sel Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_Msk (_U_(0x3) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_dbg_bus_sel Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel(value) (BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_clk_src_sel_Pos _U_(4)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_clk_src_sel Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_clk_src_sel_Msk (_U_(0x3) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_clk_src_sel_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_clk_src_sel Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_clk_src_sel(value) (BTZBSYS_SUBSYS_CNTRL_REG1_subsys_clk_src_sel_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_clk_src_sel_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_ssubsys_clk_div_sel_Pos _U_(6)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_clk_div_sel Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_ssubsys_clk_div_sel_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_ssubsys_clk_div_sel_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_clk_div_sel Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_ssubsys_clk_div_sel(value) (BTZBSYS_SUBSYS_CNTRL_REG1_ssubsys_clk_div_sel_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_ssubsys_clk_div_sel_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_disable_one_sec_counter_Pos _U_(10)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) disable_one_sec_counter Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_disable_one_sec_counter_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_disable_one_sec_counter_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) disable_one_sec_counter Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_disable_one_sec_counter(value) (BTZBSYS_SUBSYS_CNTRL_REG1_disable_one_sec_counter_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_disable_one_sec_counter_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_en_Pos _U_(11)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_dbg_bus_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_dbg_bus_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_en(value) (BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_xtal_ready_delay_Pos _U_(12)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_xtal_ready_delay Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_xtal_ready_delay_Msk (_U_(0xF) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_xtal_ready_delay_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) subsys_xtal_ready_delay Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_subsys_xtal_ready_delay(value) (BTZBSYS_SUBSYS_CNTRL_REG1_subsys_xtal_ready_delay_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_subsys_xtal_ready_delay_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_iom_en_Pos _U_(16)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) tr_sw_iom_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_iom_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_iom_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) tr_sw_iom_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_iom_en(value) (BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_iom_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_iom_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_n_iom_en_Pos _U_(17)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) tr_sw_n_iom_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_n_iom_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_n_iom_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) tr_sw_n_iom_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_n_iom_en(value) (BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_n_iom_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_tr_sw_n_iom_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_pa_on_iom_en_Pos _U_(18)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) pa_on_iom_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_pa_on_iom_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_pa_on_iom_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) pa_on_iom_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_pa_on_iom_en(value) (BTZBSYS_SUBSYS_CNTRL_REG1_pa_on_iom_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_pa_on_iom_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_lna_on_iom_en_Pos _U_(19)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) lna_on_iom_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_lna_on_iom_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_lna_on_iom_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) lna_on_iom_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_lna_on_iom_en(value) (BTZBSYS_SUBSYS_CNTRL_REG1_lna_on_iom_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_lna_on_iom_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_en_Pos _U_(20)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) zb_bt_bar_ovrd_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) zb_bt_bar_ovrd_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_en(value) (BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_val_Pos _U_(21)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) zb_bt_bar_ovrd_val Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_val_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_val_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) zb_bt_bar_ovrd_val Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_val(value) (BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_val_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_zb_bt_bar_ovrd_val_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_invert_btadc_clk_Pos _U_(22)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) invert_btadc_clk Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_invert_btadc_clk_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_invert_btadc_clk_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) invert_btadc_clk Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_invert_btadc_clk(value) (BTZBSYS_SUBSYS_CNTRL_REG1_invert_btadc_clk_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_invert_btadc_clk_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_clk_lp_req_Pos _U_(23)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) clk_lp_req Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_clk_lp_req_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_clk_lp_req_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) clk_lp_req Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_clk_lp_req(value) (BTZBSYS_SUBSYS_CNTRL_REG1_clk_lp_req_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_clk_lp_req_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_en_Pos _U_(26)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) xtal_lock_cnt_rstn_ovrd_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) xtal_lock_cnt_rstn_ovrd_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_en(value) (BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_val_Pos _U_(27)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) xtal_lock_cnt_rstn_ovrd_val Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_val_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_val_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) xtal_lock_cnt_rstn_ovrd_val Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_val(value) (BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_val_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_xtal_lock_cnt_rstn_ovrd_val_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_en_Pos _U_(28)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) pll_lock_flops_rstn_ovrd_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) pll_lock_flops_rstn_ovrd_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_en(value) (BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_val_Pos _U_(29)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) pll_lock_flops_rstn_ovrd_val Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_val_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_val_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) pll_lock_flops_rstn_ovrd_val Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_val(value) (BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_val_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_pll_lock_flops_rstn_ovrd_val_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_die_clk_sel_Pos _U_(30)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) die_clk_sel Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_die_clk_sel_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_die_clk_sel_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) die_clk_sel Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_die_clk_sel(value) (BTZBSYS_SUBSYS_CNTRL_REG1_die_clk_sel_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_die_clk_sel_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_disable_adc_clk_gating_Pos _U_(31)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG1) disable_adc_clk_gating Position */
#define BTZBSYS_SUBSYS_CNTRL_REG1_disable_adc_clk_gating_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG1_disable_adc_clk_gating_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG1) disable_adc_clk_gating Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG1_disable_adc_clk_gating(value) (BTZBSYS_SUBSYS_CNTRL_REG1_disable_adc_clk_gating_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG1_disable_adc_clk_gating_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG1_Msk         _U_(0xFCFFFC7F)                                      /**< (BTZBSYS_SUBSYS_CNTRL_REG1) Register Mask  */


/* -------- BTZBSYS_SUBSYS_CNTRL_REG2 : (BTZBSYS Offset: 0x08) (R/W 32) SUBSYS_CNTRL_REG2 -------- */
#define BTZBSYS_SUBSYS_CNTRL_REG2_RESETVALUE  _U_(0x00)                                            /**<  (BTZBSYS_SUBSYS_CNTRL_REG2) SUBSYS_CNTRL_REG2  Reset Value */

#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_0_Pos _U_(0)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_0 Position */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_0_Msk (_U_(0x7) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_0_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_0 Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_0(value) (BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_0_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_0_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_1_Pos _U_(4)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_1 Position */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_1_Msk (_U_(0x7) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_1_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_1 Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_1(value) (BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_1_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_1_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_2_Pos _U_(8)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_2 Position */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_2_Msk (_U_(0x7) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_2_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_2 Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_2(value) (BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_2_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_2_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_3_Pos _U_(12)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_3 Position */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_3_Msk (_U_(0x7) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_3_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_3 Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_3(value) (BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_3_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_3_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_4_Pos _U_(16)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_4 Position */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_4_Msk (_U_(0x7) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_4_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_4 Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_4(value) (BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_4_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_4_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_5_Pos _U_(20)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_5 Position */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_5_Msk (_U_(0x7) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_5_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_line_sel_5 Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_5(value) (BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_5_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_line_sel_5_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_invert_Pos _U_(26)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_invert Position */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_invert_Msk (_U_(0x3F) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_invert_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG2) crossbar_data_invert Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_invert(value) (BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_invert_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG2_crossbar_data_invert_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG2_Msk         _U_(0xFC777777)                                      /**< (BTZBSYS_SUBSYS_CNTRL_REG2) Register Mask  */


/* -------- BTZBSYS_SUBSYS_CNTRL_REG3 : (BTZBSYS Offset: 0x0C) (R/W 32) SUBSYS_CNTRL_REG3 -------- */
#define BTZBSYS_SUBSYS_CNTRL_REG3_RESETVALUE  _U_(0x240)                                           /**<  (BTZBSYS_SUBSYS_CNTRL_REG3) SUBSYS_CNTRL_REG3  Reset Value */

#define BTZBSYS_SUBSYS_CNTRL_REG3_le_2m_fpga_v1c0_mode_Pos _U_(0)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG3) le_2m_fpga_v1c0_mode Position */
#define BTZBSYS_SUBSYS_CNTRL_REG3_le_2m_fpga_v1c0_mode_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG3_le_2m_fpga_v1c0_mode_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG3) le_2m_fpga_v1c0_mode Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG3_le_2m_fpga_v1c0_mode(value) (BTZBSYS_SUBSYS_CNTRL_REG3_le_2m_fpga_v1c0_mode_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG3_le_2m_fpga_v1c0_mode_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay_Pos _U_(1)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG3) subsys_pll_ready_delay Position */
#define BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay_Msk (_U_(0x3F) << BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG3) subsys_pll_ready_delay Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay(value) (BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_dfe_Pos _U_(7)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG3) disable_pclk_dfe Position */
#define BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_dfe_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_dfe_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG3) disable_pclk_dfe Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_dfe(value) (BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_dfe_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_dfe_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_zb_mdm_Pos _U_(8)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG3) disable_pclk_zb_mdm Position */
#define BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_zb_mdm_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_zb_mdm_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG3) disable_pclk_zb_mdm Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_zb_mdm(value) (BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_zb_mdm_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG3_disable_pclk_zb_mdm_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_en_Pos _U_(9)                                               /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_lock_fifo_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_lock_fifo_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_en(value) (BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_auto_relock_en_Pos _U_(10)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_auto_relock_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_auto_relock_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_auto_relock_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_auto_relock_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_auto_relock_en(value) (BTZBSYS_SUBSYS_CNTRL_REG3_pll_auto_relock_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_auto_relock_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_soft_reset_Pos _U_(11)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_lock_fifo_empty_soft_reset Position */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_soft_reset_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_soft_reset_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_lock_fifo_empty_soft_reset Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_soft_reset(value) (BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_soft_reset_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_soft_reset_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_clk_src_sel_Pos _U_(12)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_lock_fifo_clk_src_sel Position */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_clk_src_sel_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_clk_src_sel_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_lock_fifo_clk_src_sel Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_clk_src_sel(value) (BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_clk_src_sel_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_clk_src_sel_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_rst_en_Pos _U_(13)                                              /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_lock_fifo_empty_rst_en Position */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_rst_en_Msk (_U_(0x1) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_rst_en_Pos) /**< (BTZBSYS_SUBSYS_CNTRL_REG3) pll_lock_fifo_empty_rst_en Mask */
#define BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_rst_en(value) (BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_rst_en_Msk & ((value) << BTZBSYS_SUBSYS_CNTRL_REG3_pll_lock_fifo_empty_rst_en_Pos))
#define BTZBSYS_SUBSYS_CNTRL_REG3_Msk         _U_(0x00003FFF)                                      /**< (BTZBSYS_SUBSYS_CNTRL_REG3) Register Mask  */


/* -------- BTZBSYS_SUBSYS_STATUS_REG0 : (BTZBSYS Offset: 0x20) ( R/ 32) SUBSYS_STATUS_REG0 -------- */
#define BTZBSYS_SUBSYS_STATUS_REG0_RESETVALUE _U_(0x00)                                            /**<  (BTZBSYS_SUBSYS_STATUS_REG0) SUBSYS_STATUS_REG0  Reset Value */

#define BTZBSYS_SUBSYS_STATUS_REG0_zb_sleep_mode_Pos _U_(0)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG0) zb_sleep_mode Position */
#define BTZBSYS_SUBSYS_STATUS_REG0_zb_sleep_mode_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG0_zb_sleep_mode_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG0) zb_sleep_mode Mask */
#define BTZBSYS_SUBSYS_STATUS_REG0_zb_sleep_mode(value) (BTZBSYS_SUBSYS_STATUS_REG0_zb_sleep_mode_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG0_zb_sleep_mode_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG0_zb_deep_sleep_mode_Pos _U_(1)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG0) zb_deep_sleep_mode Position */
#define BTZBSYS_SUBSYS_STATUS_REG0_zb_deep_sleep_mode_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG0_zb_deep_sleep_mode_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG0) zb_deep_sleep_mode Mask */
#define BTZBSYS_SUBSYS_STATUS_REG0_zb_deep_sleep_mode(value) (BTZBSYS_SUBSYS_STATUS_REG0_zb_deep_sleep_mode_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG0_zb_deep_sleep_mode_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG0_radio_idle_zb_Pos _U_(2)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG0) radio_idle_zb Position */
#define BTZBSYS_SUBSYS_STATUS_REG0_radio_idle_zb_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG0_radio_idle_zb_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG0) radio_idle_zb Mask */
#define BTZBSYS_SUBSYS_STATUS_REG0_radio_idle_zb(value) (BTZBSYS_SUBSYS_STATUS_REG0_radio_idle_zb_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG0_radio_idle_zb_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG0_bt_low_power_mode_Pos _U_(16)                                              /**< (BTZBSYS_SUBSYS_STATUS_REG0) bt_low_power_mode Position */
#define BTZBSYS_SUBSYS_STATUS_REG0_bt_low_power_mode_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG0_bt_low_power_mode_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG0) bt_low_power_mode Mask */
#define BTZBSYS_SUBSYS_STATUS_REG0_bt_low_power_mode(value) (BTZBSYS_SUBSYS_STATUS_REG0_bt_low_power_mode_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG0_bt_low_power_mode_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG0_bt_rf_idle_Pos _U_(17)                                              /**< (BTZBSYS_SUBSYS_STATUS_REG0) bt_rf_idle Position */
#define BTZBSYS_SUBSYS_STATUS_REG0_bt_rf_idle_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG0_bt_rf_idle_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG0) bt_rf_idle Mask */
#define BTZBSYS_SUBSYS_STATUS_REG0_bt_rf_idle(value) (BTZBSYS_SUBSYS_STATUS_REG0_bt_rf_idle_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG0_bt_rf_idle_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG0_Msk        _U_(0x00030007)                                      /**< (BTZBSYS_SUBSYS_STATUS_REG0) Register Mask  */


/* -------- BTZBSYS_SUBSYS_STATUS_REG1 : (BTZBSYS Offset: 0x24) ( R/ 32) SUBSYS_STATUS_REG1 -------- */
#define BTZBSYS_SUBSYS_STATUS_REG1_RESETVALUE _U_(0x00)                                            /**<  (BTZBSYS_SUBSYS_STATUS_REG1) SUBSYS_STATUS_REG1  Reset Value */

#define BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Pos _U_(0)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG1) xtal_ready_out Position */
#define BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG1) xtal_ready_out Mask */
#define BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out(value) (BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_out_Pos _U_(1)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG1) pll_lock_out Position */
#define BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_out_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_out_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG1) pll_lock_out Mask */
#define BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_out(value) (BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_out_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_out_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG1_XTAL_ready_Pos _U_(2)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG1) XTAL_ready Position */
#define BTZBSYS_SUBSYS_STATUS_REG1_XTAL_ready_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG1_XTAL_ready_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG1) XTAL_ready Mask */
#define BTZBSYS_SUBSYS_STATUS_REG1_XTAL_ready(value) (BTZBSYS_SUBSYS_STATUS_REG1_XTAL_ready_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG1_XTAL_ready_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG1_PLL_locked_Pos _U_(3)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG1) PLL_locked Position */
#define BTZBSYS_SUBSYS_STATUS_REG1_PLL_locked_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG1_PLL_locked_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG1) PLL_locked Mask */
#define BTZBSYS_SUBSYS_STATUS_REG1_PLL_locked(value) (BTZBSYS_SUBSYS_STATUS_REG1_PLL_locked_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG1_PLL_locked_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG1_clk_lp_ready_Pos _U_(4)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG1) clk_lp_ready Position */
#define BTZBSYS_SUBSYS_STATUS_REG1_clk_lp_ready_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG1_clk_lp_ready_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG1) clk_lp_ready Mask */
#define BTZBSYS_SUBSYS_STATUS_REG1_clk_lp_ready(value) (BTZBSYS_SUBSYS_STATUS_REG1_clk_lp_ready_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG1_clk_lp_ready_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG1_clk_mux_sel_Pos _U_(5)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG1) clk_mux_sel0 Position */
#define BTZBSYS_SUBSYS_STATUS_REG1_clk_mux_sel_Msk (_U_(0x3) << BTZBSYS_SUBSYS_STATUS_REG1_clk_mux_sel_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG1) clk_mux_sel0 Mask */
#define BTZBSYS_SUBSYS_STATUS_REG1_clk_mux_sel(value) (BTZBSYS_SUBSYS_STATUS_REG1_clk_mux_sel_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG1_clk_mux_sel_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_fifo_empty_Pos _U_(7)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG1) XTAL_ready Position */
#define BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_fifo_empty_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_fifo_empty_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG1) XTAL_ready Mask */
#define BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_fifo_empty(value) (BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_fifo_empty_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG1_pll_lock_fifo_empty_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG1_pllc_ready_cnt_expire_raw_Pos _U_(8)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG1) pllc_ready_cnt_expire_raw Position */
#define BTZBSYS_SUBSYS_STATUS_REG1_pllc_ready_cnt_expire_raw_Msk (_U_(0x1) << BTZBSYS_SUBSYS_STATUS_REG1_pllc_ready_cnt_expire_raw_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG1) pllc_ready_cnt_expire_raw Mask */
#define BTZBSYS_SUBSYS_STATUS_REG1_pllc_ready_cnt_expire_raw(value) (BTZBSYS_SUBSYS_STATUS_REG1_pllc_ready_cnt_expire_raw_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG1_pllc_ready_cnt_expire_raw_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG1_Msk        _U_(0x000001FF)                                      /**< (BTZBSYS_SUBSYS_STATUS_REG1) Register Mask  */


/* -------- BTZBSYS_SUBSYS_STATUS_REG2 : (BTZBSYS Offset: 0x28) ( R/ 32) SUBSYS_STATUS_REG2 -------- */
#define BTZBSYS_SUBSYS_STATUS_REG2_RESETVALUE _U_(0x00)                                            /**<  (BTZBSYS_SUBSYS_STATUS_REG2) SUBSYS_STATUS_REG2  Reset Value */

#define BTZBSYS_SUBSYS_STATUS_REG2_VERSION_NUM_Pos _U_(0)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG2) VERSION_NUM Position */
#define BTZBSYS_SUBSYS_STATUS_REG2_VERSION_NUM_Msk (_U_(0xFF) << BTZBSYS_SUBSYS_STATUS_REG2_VERSION_NUM_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG2) VERSION_NUM Mask */
#define BTZBSYS_SUBSYS_STATUS_REG2_VERSION_NUM(value) (BTZBSYS_SUBSYS_STATUS_REG2_VERSION_NUM_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG2_VERSION_NUM_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG2_PART_NUM_Pos _U_(8)                                               /**< (BTZBSYS_SUBSYS_STATUS_REG2) PART_NUM Position */
#define BTZBSYS_SUBSYS_STATUS_REG2_PART_NUM_Msk (_U_(0xFF) << BTZBSYS_SUBSYS_STATUS_REG2_PART_NUM_Pos) /**< (BTZBSYS_SUBSYS_STATUS_REG2) PART_NUM Mask */
#define BTZBSYS_SUBSYS_STATUS_REG2_PART_NUM(value) (BTZBSYS_SUBSYS_STATUS_REG2_PART_NUM_Msk & ((value) << BTZBSYS_SUBSYS_STATUS_REG2_PART_NUM_Pos))
#define BTZBSYS_SUBSYS_STATUS_REG2_Msk        _U_(0x0000FFFF)                                      /**< (BTZBSYS_SUBSYS_STATUS_REG2) Register Mask  */


/** \brief BTZBSYS register offsets definitions */
#define BTZBSYS_SUBSYS_CNTRL_REG0_REG_OFST (0x00)              /* (BTZBSYS_SUBSYS_CNTRL_REG0) SUBSYS_CNTRL_REG0 Offset */
#define BTZBSYS_SUBSYS_CNTRL_REG1_REG_OFST (0x04)              /* (BTZBSYS_SUBSYS_CNTRL_REG1) SUBSYS_CNTRL_REG1 Offset */
#define BTZBSYS_SUBSYS_CNTRL_REG2_REG_OFST (0x08)              /* (BTZBSYS_SUBSYS_CNTRL_REG2) SUBSYS_CNTRL_REG2 Offset */
#define BTZBSYS_SUBSYS_CNTRL_REG3_REG_OFST (0x0C)              /* (BTZBSYS_SUBSYS_CNTRL_REG3) SUBSYS_CNTRL_REG3 Offset */
#define BTZBSYS_SUBSYS_STATUS_REG0_REG_OFST (0x20)              /* (BTZBSYS_SUBSYS_STATUS_REG0) SUBSYS_STATUS_REG0 Offset */
#define BTZBSYS_SUBSYS_STATUS_REG1_REG_OFST (0x24)              /* (BTZBSYS_SUBSYS_STATUS_REG1) SUBSYS_STATUS_REG1 Offset */
#define BTZBSYS_SUBSYS_STATUS_REG2_REG_OFST (0x28)              /* (BTZBSYS_SUBSYS_STATUS_REG2) SUBSYS_STATUS_REG2 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief BTZBSYS register API structure */
typedef struct
{  /*  */
  __IO  uint32_t                       BTZBSYS_SUBSYS_CNTRL_REG0; /**< Offset: 0x00 (R/W  32) SUBSYS_CNTRL_REG0 */
  __IO  uint32_t                       BTZBSYS_SUBSYS_CNTRL_REG1; /**< Offset: 0x04 (R/W  32) SUBSYS_CNTRL_REG1 */
  __IO  uint32_t                       BTZBSYS_SUBSYS_CNTRL_REG2; /**< Offset: 0x08 (R/W  32) SUBSYS_CNTRL_REG2 */
  __IO  uint32_t                       BTZBSYS_SUBSYS_CNTRL_REG3; /**< Offset: 0x0C (R/W  32) SUBSYS_CNTRL_REG3 */
  __I   uint8_t                        Reserved1[0x10];
  __I   uint32_t                       BTZBSYS_SUBSYS_STATUS_REG0; /**< Offset: 0x20 (R/   32) SUBSYS_STATUS_REG0 */
  __I   uint32_t                       BTZBSYS_SUBSYS_STATUS_REG1; /**< Offset: 0x24 (R/   32) SUBSYS_STATUS_REG1 */
  __I   uint32_t                       BTZBSYS_SUBSYS_STATUS_REG2; /**< Offset: 0x28 (R/   32) SUBSYS_STATUS_REG2 */
} btzbsys_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _WBZ35_BTZBSYS_COMPONENT_H_ */
