# Automatic Day/Night LED Control with LDR and Arduino

## Description

This project demonstrates an automatic LED control system using an Arduino and a Light Dependent Resistor (LDR). The LED lights up during nighttime when the ambient light level falls below a certain threshold and turns off during daytime when the ambient light level exceeds the threshold.

## Components Needed

1. **Arduino UNO**
2. **LED**
3. **Light Dependent Resistor (LDR)**
4. **Resistor (for the LDR voltage divider)**
5. **Jumper Wires**
6. **Breadboard**

## Diagram

*I will update the block diagram with a logo or watermark ASAP. Please leave it for now.*

## Instructions

### Connecting the Components

1. **Connect the LDR to Arduino:**
   - Connect one leg of the LDR to 5V.
   - Connect the other leg of the LDR to analog pin A0.
   - Connect a resistor from the junction of the LDR and the analog pin A0 to GND (this forms a voltage divider).

2. **Connect the LED to Arduino:**
   - Connect the anode (long leg) of the LED to digital pin 13.
   - Connect the cathode (short leg) of the LED to GND through a current-limiting resistor.

### Power the Arduino

- Connect the Arduino to your computer using a USB cable.

### Upload the Code and Observe the Data

1. **Load the Program:**
   - Open the Arduino IDE on your computer.
   - Write or paste the provided program into the IDE.
   - Select the correct board and port in the Arduino IDE under the Tools menu.
   - Upload the program to the Arduino.

2. **Monitor the Output:**
   - Open the Serial Monitor in the Arduino IDE to observe the sensor values and status messages.
   - The LED will turn on when the LDR value falls below the threshold, indicating low light (nighttime).
   - The LED will turn off when the LDR value rises above the threshold, indicating sufficient light (daytime).

## Project Operation

- **Initialization:**
  - The Serial Monitor is set up to communicate at a baud rate of 9600.
  - The LED pin is set as an output, and the LDR pin is set as an input.

- **Automatic LED Control:**
  - The Arduino reads the LDR value from analog pin A0.
  - If the LDR value is below the threshold (indicating darkness), the LED is turned on, and a message is printed to the Serial Monitor.
  - If the LDR value is above the threshold (indicating light), the LED is turned off, and a message is printed to the Serial Monitor.
  - The system updates every second.

## Applications

1. **Energy Saving:** Automatically control lighting based on ambient light conditions to save energy.
2. **Security Systems:** Implement automatic lighting for security purposes during night hours.
3. **Smart Home Automation:** Integrate into a larger smart home system for enhanced convenience and efficiency.

## Support

For any issues or further assistance, please contact us:

- 🌐 [Projects Learner](https://projectslearner.com)
- 📧 Email: projectslearner@gmail.com
- 📸 Instagram
- 📘 Facebook
- ▶️ YouTube
- 📘 LinkedIn

Made for you with ❣️ from ProjectsLearner.