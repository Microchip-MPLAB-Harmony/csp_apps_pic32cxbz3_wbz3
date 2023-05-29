---
title: Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ351 family
nav_order: 1
has_children: true
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ351 family

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating embedded firmware solutions for Microchip 32-bit SAM and PIC® microcontroller and microprocessor devices.  Refer to the following links for more information.

- [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
- [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
- [Microchip MPLAB X IDE](https://www.microchip.com/mplab/mplab-x-ide)
- [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
- [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 peripheral library application examples for PIC32CX-BZ2 and WBZ451 family

- [Release Notes](release_notes.md)
- [MPLAB® Harmony License](mplab_harmony_license.md)

To clone or download these applications from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

## Contents Summary

| Folder     | Description                             |
| ---        | ---                                     |
| apps       | Contains peripheral library example applications |
| docs       | Contains documentation in html format for offline viewing (to be used only after cloning this repository onto a local machine). Use [github pages](https://microchip-mplab-harmony.github.io/csp_apps_pic32cxbz3_wbz3/) of this repository for viewing it online. |

## Code Examples

The following applications are provided to demonstrate the typical or interesting usage models of one or more peripheral libraries.

| Name | Description |
| ---- | ----------- |
| [AC Sleepwalking](apps/ac/ac_sleepwalk_singleshot/readme.md) | This example application shows how to use the AC Peripheral library to perform a single shot comparison in standby sleep mode periodically and wake up the device at the end of a successful comparison |
| [ADCHS Interrupt](apps/adchs/adchs_interrupt/readme.md) | This example application shows how to sample an analog input using the ADCHS peripheral and displays the converted samples on a serial terminal |
| [ADCHS polling](apps/adchs/adchs_polled/readme.md) | This example application shows how to sample an analog input using the ADCHS peripheral and displays the converted samples on a serial terminal |
| [CCL Manchester Encoder](apps/ccl/manchester_encoder/readme.md) | This example application shows how to use the CCL peripheral library and generate a Manchester-encoded output |
| [Clock configuration](apps/clock/clock_config/readme.md) | This example application shows how to configure the clock system to run the device at maximum frequency. It also outputs a prescaled clock signal on a GPIO pin for measurement and verification |
| [DMAC USART echo](apps/dmac/dmac_usart_echo/readme.md) | This example application demonstrates USART transfer with DMA to receive 10 bytes and echo back the received bytes |
| [DMT timeout](apps/dmt/dmt_timeout/readme.md) | This example application shows how the deadman timer resets by not clearing the deadman timer counter on switch press |
| [DSU compute CRC32](apps/dsu/dsu_crc32_generate/readme.md) | This example application demonstrates how to use the DSU Peripheral library to compute 32-bit Cyclic Redundancy Checksum (CRC) |
| [EIC Interrupt](apps/eic/eic_led_on_off/readme.md) | This example application demonstrates how to generate interrupt using the EIC on switch press and indicate it through an LED |
| [EVSYS trigger](apps/evsys/evsys_trigger/readme.md) | This example application demonstrates how to use the EVSYS Peripheral library to setup autonomous, low-latency and configurable communication between peripherals |
| [FREQM measurement](apps/freqm/freqm_measure_clock_freq/readme.md) | This example application demonstrates how to use the FREQM peripheral to measure the frequency of the internal RC Oscillator |
| [GPIO Polling](apps/gpio/gpio_led_on_off_polling/readme.md) | This example application demonstrate how to poll the switch input, and indicate the switch status using the LED |
| [NVM flash read write](apps/nvm/flash_read_write/readme.md) | This example application demonstrates how to use the NVM to erase and program the internal Flash memory |
| [QSPI flash read write](apps/qspi/qspi_read_write/readme.md) | This example shows how to use the QSPI Peripheral library to perform erase, write and read operation with the QSPI Serial Flash memory in Quad IO mode |
| [RTC alarm interrupt](apps/rtc/rtc_alarm/readme.md) | This example shows how to use the RTC to configure the time and generate the alarm |
| [SERCOM I2C EEPROM read write](apps/sercom/i2c/master/i2c_eeprom/readme.md) | This example application demonstrates how to use the SERCOM peripheral to write and read from the I2C serial EEPROM memory |
| [SERCOM I2C EEPROM emulation](apps/sercom/i2c/slave/i2c_eeprom_emulation/readme.md) | This example application demonstrates how to use the SERCOM peripheral in slave mode |
| [SERCOM SPI EEPROM read write](apps/sercom/spi/spi_eeprom_write_read/readme.md) | This example application demonstrates how to use the SERCOM SPI peripheral to write and read from the SPI serial EEPROM memory |
| [SERCOM USART ring buffer](apps/sercom/usart/usart_ring_buffer_interrupt/readme.md) | This example application demonstrates how to use the SERCOM peripheral in USART ring buffer mode to transfer data in a non-blocking manner |
| [Systick periodic interrupt](apps/systick/systick_periodic_timeout/readme.md) | This example shows how to use the SysTick to generate periodic interrupts |
| [TC capture mode](apps/tc/tc_capture_mode/readme.md) | This example shows how to use the TC module in capture mode to measure duty cycle and frequency of an external input |
| [TC compare mode](apps/tc/tc_compare_mode/readme.md) | This example shows how to use the TC module in compare mode to generate an active low, active high, and toggle output on compare match |
| [TC timer mode](apps/tc/tc_timer_mode/readme.md) | This example shows how to use the TC module in timer mode to generate periodic interrupt |
| [TCC PWM generation](apps/tcc/tcc_synchronous_pwm_channels/readme.md) | This example application shows how to use the TCC to generate a 2 or 3 phase PWM signals for motor control with dead time |
| [WDT timeout](apps/wdt/wdt_timeout/readme.md) | This example application shows how the watchdog timer resets by not feeding the watchdog on switch press |

____

[![License](https://img.shields.io/badge/license-Harmony%20license-orange.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3/blob/master/mplab_harmony_license.md)
[![Latest release](https://img.shields.io/github/release/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3/releases/latest)
[![Latest release date](https://img.shields.io/github/release-date/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3/releases/latest)
[![Commit activity](https://img.shields.io/github/commit-activity/y/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3/graphs/commit-activity)
[![Contributors](https://img.shields.io/github/contributors-anon/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3.svg)]()

____

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/user/MicrochipTechnology)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/microchip-technology)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/microchiptechnology/)
[![Follow us on Twitter](https://img.shields.io/twitter/follow/MicrochipTech.svg?style=social)](https://twitter.com/MicrochipTech)

[![](https://img.shields.io/github/stars/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3.svg?style=social)]()
[![](https://img.shields.io/github/watchers/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz3_wbz3.svg?style=social)]()
