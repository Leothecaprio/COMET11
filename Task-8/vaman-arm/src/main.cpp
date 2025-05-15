#include <LiquidCrystal.h>

// Pin mapping
const int rs = 33;
const int en = 32;
const int d4 = 25;
const int d5 = 26;
const int d6 = 27;
const int d7 = 14;

// Initialize LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Text to scroll
String scrollText = "QS+P!RS+PQR+!PRS+!PQ!R   ";  // Extra spaces to pause after full scroll
int scrollIndex = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Option A");
}

void loop() {
  lcd.setCursor(0, 1);
  // Display 16 characters starting from scrollIndex
  lcd.print(scrollText.substring(scrollIndex, scrollIndex + 16));

  scrollIndex++;

  // Reset index when we reach the end
  if (scrollIndex > scrollText.length() - 16) {
    scrollIndex = 0;
  }

  delay(300);  // Control scroll speed
}


