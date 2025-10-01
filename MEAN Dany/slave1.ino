#include <Wire.h>

int relayPin = 7;
String command = "";

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);   // Relay OFF at start

  Wire.begin(9);                 // Slave address = 9
  Wire.onReceive(receiveEvent);

  Serial.begin(9600);
  Serial.println("Slave Ready");
}

void loop() {
  // Nothing needed here
}

void receiveEvent(int bytes) {
  command = "";
  while (Wire.available()) {
    char c = Wire.read();
    command += c;
  }

  command.trim(); // Clean spaces/newline

  if (command == "ON") {
    digitalWrite(relayPin, HIGH);
    Serial.println("Received: ON → Relay & LED ON");
  } 
  else if (command == "OFF") {
    digitalWrite(relayPin, LOW);
    Serial.println("Received: OFF → Relay & LED OFF");
  } else {
    Serial.print("Unknown command: ");
    Serial.println(command);
  }
}


