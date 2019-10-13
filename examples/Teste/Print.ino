#include "LCDIC2.h"

LCDIC2 lcd(0x27, 16, 2);

int a = 123;
float b = 133.254;
String c = "Samuel";
char d[] = "Tavares";

void setup() {
  if (lcd.begin()) lcd.print("Hello, World!");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print(a);
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print(b);
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print(F("teste"));
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print(c);
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print(d);
  delay(1000);    
}

void loop() {
  for (uint8_t i = 0; i < 15; i++) {
    lcd.setCursor(i, 1);
    delay(250);
  }
  for (uint8_t i = 15; i > 0; i--) {
    lcd.setCursor(i, 1);
    delay(250);
  }
}
