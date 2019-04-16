#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
byte pacman[8]={
  B11111,
  B11111,
  B11110,
  B11100,
  B11000,
  B11100,
  B11110,
  B11111,
};
byte fantasma[8]={
  B11111,
  B10101,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B10101,
};
byte pacman2[8]={
  B11111,
  B11111,
  B00111,
  B00011,
  B00011,
  B00111,
  B01111,
  B11111,
};
void setup() {
lcd.init();
lcd.backlight();
lcd.clear();
lcd.createChar(0,pacman);
lcd.createChar(1,fantasma);
lcd.createChar(2,pacman2);
lcd.setCursor(0,0);
//lcd.write(byte(0));
lcd.setCursor(0,1);
//lcd.write(byte(1));
delay(1000);
lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.write(byte(0));
  lcd.setCursor(1,0);
  lcd.write(byte(1));
  for(int i=0;i<=15;i++){
   lcd.setCursor(i,0);
   lcd.write(byte(0));
   lcd.setCursor(i+1,0);
   lcd.write(byte(1));
   delay(500);
   lcd.clear();
  }
  lcd.setCursor(15,1);
  lcd.write(byte(2));
  lcd.setCursor(14,1);
  lcd.write(byte(1));
   for(int i=0;i<=15;i++){
   lcd.scrollDisplayLeft();
   delay(500);
  }
  lcd.clear();
}
