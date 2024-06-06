/*
    Code by : Projects_learner
    Project name : LDR using Ardino UNO
    Modified Date : 06-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-ldr-photo-resistor-module
*/

const int ledPin = 13;
const int ldrPin = A0;
const int threshold = 30;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  int ldrValue = analogRead(ldrPin);

  if (ldrValue <= threshold) {
    digitalWrite(ledPin, HIGH);
    Serial.print("It's Night Time, Turn on the LED: ");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.print("It's Daytime, Turn off the LED: ");
  }
  
  Serial.println(ldrValue);
  delay(1000);  // Add a small delay to avoid flooding the Serial Monitor
}
