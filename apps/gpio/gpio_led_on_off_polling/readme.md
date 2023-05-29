---
parent: Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ351 family
title: GPIO Polling
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# GPIO Polling

This example application demonstrate how to poll the switch input, and indicate the switch status using the LED.

## Description

This application uses the GPIO Peripheral library to read the GPIO pin connected to the switch, and drives the GPIO pin connected to the LED to indicate the switch status. The LED is turned ON when the switch is pressed and turned OFF when the switch is released.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_bz24_bz25) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/gpio/gpio_led_on_off_polling/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
|WBZ351_curiosity.X| MPLABX project for [PIC32CX WBZ351 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|


## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
|WBZ351_curiosity.X|[PIC32CX WBZ351 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|


### Setting up [PIC32CX WBZ351 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)
Connect the Debug USB port on the board to the computer using a micro USB cable


## Running the Application

1. Build and program the application project using its IDE
2. The LED is turned ON when the switch is pressed and turned OFF when the switch is released

Refer below table for LED and Switch names

| Board | Switch Name |LED Name |
|-----|-----|-----|
|[PIC32CX WBZ351 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|SW3|Green LED|

