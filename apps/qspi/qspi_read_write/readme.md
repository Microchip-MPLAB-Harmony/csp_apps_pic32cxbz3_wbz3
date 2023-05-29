---
parent: Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ351 family
title: QSPI flash read write
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# QSPI flash read write

This example shows how to use the QSPI Peripheral library to perform erase, write and read operation with the QSPI Serial Flash memory in Quad IO mode.

## Description

This example uses the QSPI peripheral library to erase and write an array of values to the QSPI Serial Flash memory. It verifies the value written by reading the values back and comparing it to the value written.

The application can be configured to perform operations on below QSPI Serial Flash Memories

SST26VF064B (Default)
N25Q256

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_bz24_bz25) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/qspi/qspi_read_write/firmware** .

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

1. Open the application project using its respective IDE
2. Open **app.h** file and set the macro for the QSPI Flash memory present on the board to 1
    ```
    #define APP_USE_SST26_FLASH     1

    #define APP_USE_N25Q_FLASH      0
    ```

4. Build and Program the application project
5. LED indicates success or failure:
    - LED is toggled when the value read from the QSPI Serial Flash memory matches with the written value
    - LED is turned ON when the value read from the QSPI Serial Flash did not match with the written value

Refer below table for LED name

| Board | LED Name |
|-----|-----|
|[PIC32CX WBZ351 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|Green LED|

