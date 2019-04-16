#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
byte cuerpo[8]={
  B01110,
  B01110,
  B00100,
  B11111,
  B00100,
  B01010,
  B10001,
  B00000,
};
byte cara[8]={
  B00000,
  B01110,
  B11011,
  B11111,
  B11111,
  B00100,
  B01110,
  B11111,
};
void setup() {
  
lcd.init();
lcd.backlight();
lcd.clear();
lcd.createChar(0,cuerpo);
lcd.createChar(1,cara);
lcd.setCursor(0,0);
lcd.write(byte(0));
lcd.setCursor(0,1);
lcd.write(byte(1));
}

void loop() {
  // put your main code here, to run repeatedly:

}
