#include <Arduino.h>

int buttonOne = 27;

void setup() {
  Serial.begin(9600);
  pinMode(buttonOne, INPUT);
}

void loop() {
  int value = digitalRead(buttonOne);
  Serial.println(value);
  delay(1000);
}
