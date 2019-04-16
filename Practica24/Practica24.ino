#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
lcd.init();
lcd.backlight();
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Abel");
}

void loop() {
  for(int i=0;i<=9;i++){
  lcd.scrollDisplayRight();
  delay(1000);
  }
  for(int i=0;i<=9;i++){
  lcd.scrollDisplayLeft();
  delay(1000);
  }  

}
