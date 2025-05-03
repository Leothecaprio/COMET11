#include <Arduino.h>

// Segment pins: A to G
const int segmentPins[7] = {2, 3, 4, 5, 6, 7, 8};

// Button pins
const int buttonP1 = 9;
const int buttonP2 = 10;

// Segment patterns for 0, 2, 5, E on common anode (LOW = ON)
const byte digit0[7] = {0, 0, 0, 0, 0, 0, 1}; // '0'
const byte digit2[7] = {0, 0, 1, 0, 0, 1, 0}; // '2'
const byte digit5[7] = {0, 1, 0, 0, 1, 0, 0}; // '5'
const byte digitE[7] = {0, 1, 1, 0, 0, 0, 0}; // 'E'

void displayDigit(const byte pattern[7]);  
void setup() {
  // Set all segment pins as OUTPUT
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }

  // Set buttons as INPUT with internal pull-up resistors
  pinMode(buttonP1, INPUT_PULLUP);
  pinMode(buttonP2, INPUT_PULLUP);
}

void loop() {
  // Read button states (LOW when pressed)
  bool p1Pressed = digitalRead(buttonP1) == LOW;
  bool p2Pressed = digitalRead(buttonP2) == LOW;

  if (p1Pressed && p2Pressed) {
    displayDigit(digitE);  // Error
  } else if (p1Pressed && !p2Pressed) {
    displayDigit(digit2);  // Rs. 2
  } else if (!p1Pressed && p2Pressed) {
    displayDigit(digit5);  // Rs. 5
  } else {
    displayDigit(digit0);  // Rs. 0
  }

  delay(100);  // Debounce delay
}

// Function to display a digit by sending pattern to 7 segments
void displayDigit(const byte pattern[7]) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], pattern[i]);
  }
}
