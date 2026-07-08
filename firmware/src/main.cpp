#include <Arduino.h>
#define  LED_PIN 12
void setup() {
  // put your setup code here, to run once:
  pinMode (LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (LED_PIN, HIGH);	// turn on the LED
  delay(500);	// wait for half a second or 500 milliseconds
  digitalWrite (LED_PIN, LOW);	// turn off the LED
  delay(500);	// wait for half a second or 500 milliseconds
}
