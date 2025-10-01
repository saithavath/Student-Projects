#include <Wire.h>

String command = "";

void setup() { 
  Wire.begin(); // Master
  Serial.begin(9600);
  Serial.println("Type ON or OFF and press Enter:");
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n'); // Read user input
    command.trim(); // Remove extra spaces/newline
    
    if (command == "ON" || command == "OFF") {
      Wire.beginTransmission(9);  // Slave address = 9
      Wire.write(command.c_str()); // Send command
      Wire.endTransmission();
      Serial.print("Sent to Slave: ");
      Serial.println(command);
    } 
    else {
      Serial.println("Invalid command. Type ON or OFF.");
    }
  }
}

