[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# DMT timeout

This example application shows how the deadman timer resets by not clearing the deadman timer counter on switch press.

## Description

This example application shows, how DMT PLIB resets the device by not clearing the Deadman timer counter on every user switch press. This application sets up the DMT to reset the device after DMT counter overflows. This application also sets up the SysTick to blink an LED and to clear DMT counter before device reset happens. When user presses the switch, it forces the device to wait an infinite loop to emulate a deadlock condition. As a result, it will triggers the deadman counter overflows the bounded value and device will reset due to this deadman timeout.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_bz24_bz25) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/dmt/dmt_timeout/firmware** .

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

1. Open the Terminal application (Ex.:Tera term) on the computer
2. Connect to the EDBG Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. Build and Program the application project using its IDE
4. Console displays the following message:

    ![output_1](images/output_dmt_timeout_1.png)

5. The deadman timer is fed periodically using Core Timer (SysTick) to prevent the DMT reset and the LED is toggled
6. Press the switch to put the system in deadlock (LED should stop blinking)
7. Following table provides switch and LED name

    | Board | Switch name | LED name |
    | ----- | ----------- | -------- |
    |[PIC32CX WBZ351 Curiosity Board](https://www.microchip.com/DevelopmentTools/ProductDetails/) | SW3 | GREEN LED |
    |||

8. Console displays the following message:

    ![output_2](images/output_dmt_timeout_2.png)

9. The DMT will reset the device with in 12 seconds and the demonstration should restart
