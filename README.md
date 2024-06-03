# Automatic Day/Night LED Control with LDR and Arduino

## Description

This project showcases an automatic LED control system using an Arduino and an LDR (Light Dependent Resistor). The LED turns on during nighttime and turns off during daytime based on the ambient light intensity detected by the LDR.

## Components Needed

1. **Arduino UNO**
2. **LED**
3. **Light Dependent Resistor (LDR)**
4. **Resistor (for LDR voltage divider)**
5. **Jumper Wires**

## Instructions

### Circuit Connection

1. **Connect LDR to Arduino:**
   - Connect one leg of the LDR to 5V through a resistor.
   - Connect the other leg of the LDR to analog pin A0.
   - Connect a resistor from the junction of the LDR and the first resistor to GND.

2. **Connect LED to Arduino:**
   - Connect the anode (long leg) of the LED to digital pin 13.
   - Connect the cathode (short leg) of the LED to GND through a current-limiting resistor (if needed).

### Power the Arduino

- Connect the Arduino to your computer using a USB cable.

### Upload the Code and Observe the Data

1. **Load the Program:**
   - Open the Arduino IDE on your computer.
   - Write or paste the provided program into the IDE.
   - Select the correct board and port in the Arduino IDE under the Tools menu.
   - Upload the program to the Arduino.

2. **Monitor the Output:**
   - The LED will turn on when it's nighttime (ambient light intensity below the threshold).
   - The LED will turn off when it's daytime (ambient light intensity above the threshold).
   - Real-time LDR readings will be displayed on the Serial Monitor.

## Project Operation

- **Initialization:**
  - Serial communication is initiated at 9600 baud rate.
  - Pin modes for LED and LDR are set.

- **Automatic LED Control:**
  - The Arduino continuously reads the LDR value.
  - If the LDR value falls below the threshold, indicating nighttime, the LED turns on.
  - If the LDR value rises above the threshold, indicating daytime, the LED turns off.

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