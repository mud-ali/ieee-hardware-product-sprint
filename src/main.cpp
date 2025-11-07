#include <Arduino.h>

const int buttons[] = {32,33,34,35};
const String button_names[] = { "yellow", "red", "blue","green"};
const int BUTTON_COUNT = 4;

void setup() {
  Serial.begin(115200);
  for (int i=0;i<BUTTON_COUNT;i++) {
    pinMode(buttons[i], INPUT);
  }
}

int randomButtonIndex() {
  return random(BUTTON_COUNT);
}

void loop() {
  int current_button_index = randomButtonIndex();
  Serial.println("press the "+button_names[current_button_index]+" button");
  while (!digitalRead(buttons[current_button_index])) {
    delay(100);
  }
  Serial.println("yay");
  delay(300);
}
