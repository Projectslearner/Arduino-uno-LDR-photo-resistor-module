# LDR using Arduino UNO 

#### Project Overview

This project demonstrates how to use an LDR (Light Dependent Resistor) with an Arduino Uno to detect ambient light levels. The LDR's resistance changes with light intensity, which is read as an analog input by the Arduino. Based on a predefined threshold, the Arduino determines whether it's light or dark and outputs the result to the Serial Monitor.

#### Components Needed

- **Arduino Uno**
- **LDR (Light Dependent Resistor)**
- **10kΩ Resistor**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup

1. **Connect the LDR to Arduino Uno:**
   - **One leg of the LDR:** Connect to 5V on the Arduino Uno.
   - **Other leg of the LDR:** Connect to one leg of a 10kΩ resistor and analog pin A0 on the Arduino Uno.
   - **Other leg of the 10kΩ resistor:** Connect to GND on the Arduino Uno.

#### Instructions

1. **Circuit Setup:**
   - Connect the LDR and resistor to the Arduino Uno as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the Serial Monitor with a baud rate of 9600.
   - Observe the Serial Monitor output, which will display the LDR values and indicate whether it's light or dark based on the threshold.

#### Applications

- **Automated Lighting:** Use to automatically control lights based on ambient light levels.
- **Environmental Sensing:** Implement in projects where light intensity monitoring is required.
- **Energy Efficiency:** Integrate into systems to optimize energy usage based on natural light availability.

#### Notes

- Ensure the LDR is correctly connected to the Arduino Uno and powered.
- Adjust the threshold value in the code to suit different lighting conditions and applications.
- Modify the code to include additional functionalities or integrate with other sensors for enhanced projects.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-ldr-photo-resistor-module)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted with ❤️ by ProjectsLearner