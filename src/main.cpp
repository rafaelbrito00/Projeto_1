#include <Arduino.h>

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(14, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(14, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);              // wait for a second
  digitalWrite(14, LOW);    // turn the LED off by making the voltage LOW
  delay(5000);              // wait for a second
}