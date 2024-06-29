/*
    Code by : Projects_learner
    Project name : LDR using Arduino UNO 
    Modified Date : 29-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-ldr-photo-resistor-module
*/

const int ldrPin = A0;   // LDR analog input pin
const int threshold = 30;  // Threshold value to determine light/dark

void setup() {
  Serial.begin(9600);    // Initialize serial communication
  pinMode(ldrPin, INPUT);  // LDR pin as input
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read LDR value

  Serial.print("LDR Value: ");
  Serial.print(ldrValue);

  // Compare LDR value with threshold
  if (ldrValue <= threshold) {
    Serial.println(" - It's Dark");
  } else {
    Serial.println(" - It's Light");
  }
  
  delay(1000);  // Delay to stabilize readings and avoid flooding Serial Monitor
}
