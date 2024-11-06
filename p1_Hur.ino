#include <Servo.h>

// Pin assignments
Servo myservo;
const int lightSensorPin = A0; // Light sensor pin
const int redLEDPin = 2;       // Red LED pin
const int yellowLEDPin = 3;    // Yellow LED pin
const int greenLEDPin = 4;     // Green LED pin

// Start Values for the lights
const int noLightThreshold = 300;    // Below this value, no light (red LED)
const int enoughLightThreshold = 500; // Between these values, just enough light (yellow LED)
const int fullLightThreshold = 600;   // Above this value, full light (green LED)

void setup() {
  myservo.attach(9);  // Servo control pin
  
  // Set LED pins as OUTPUT
  pinMode(redLEDPin, OUTPUT);
  pinMode(yellowLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);

  // Start with servo at reset position and LEDs off
  myservo.write(0);          
  digitalWrite(redLEDPin, LOW);
  digitalWrite(yellowLEDPin, LOW);
  digitalWrite(greenLEDPin, LOW);

  Serial.begin(9600); // Start serial communication for debugging if needed
}

void loop() {
  int lightLevel = analogRead(lightSensorPin); // Value from light sensor
  Serial.println(lightLevel); // Output the light sensor value to the serial monitor for debugging

  // Determine servo position and LED status based on light level
  if (lightLevel < noLightThreshold) {
    // Red light adjustment
    myservo.write(0); // Reset position (0 degrees)
    digitalWrite(redLEDPin, HIGH);   // Turn on red LED
    digitalWrite(yellowLEDPin, LOW); // Turn off yellow LED
    digitalWrite(greenLEDPin, LOW);  // Turn off green LED
  } 
  else if (lightLevel >= noLightThreshold && lightLevel < fullLightThreshold) {
    // Yellow light adjustment 
    myservo.write(90); // Center position (90 degrees)
    digitalWrite(redLEDPin, LOW);    // Turn off red LED
    digitalWrite(yellowLEDPin, HIGH); // Turn on yellow LED
    digitalWrite(greenLEDPin, LOW);  // Turn off green LED
  } 
  else if (lightLevel >= fullLightThreshold) {
    //  Green light adjustment
    myservo.write(180); // Full position (180 degrees)
    digitalWrite(redLEDPin, LOW);    // Turn off red LED
    digitalWrite(yellowLEDPin, LOW); // Turn off yellow LED
    digitalWrite(greenLEDPin, HIGH);  // Turn on green LED
  }

  delay(10); // Small delay to stabilize sensor readings
}
