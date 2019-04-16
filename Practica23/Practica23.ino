#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
lcd.init();
lcd.backlight();
lcd.clear();
lcd.setCursor(0,16);
lcd.print("Abel");
}

void loop() {
  lcd.scrollDisplayLeft();
  delay(1000);

}
