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
byte pacmanCerrado[8]={
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
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
byte fantasmaOjoD[8]={
  B11111,
  B11010,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B10101,
};
byte fantasmaOjoI[8]={
  B11111,
  B01011,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B10101,
};
byte fantasmaO[8]={
  B11111,
  B01011,
  B10111,
  B11111,
  B11111,
  B11111,
  B11111,
  B10101,
};
byte fantasmaOs[8]={
  B11111,
  B01011,
  B10111,
  B10111,
  B11111,
  B11111,
  B11111,
  B10101,
};
byte monito[8]={
  B01110,
  B01110,
  B00100,
  B11111,
  B00100,
  B00100,
  B01010,
  B10001,
};
byte monito2[8]={
  B01110,
  B11111,
  B01110,
  B00100,
  B00100,
  B00100,
  B01010,
  B10001,
};
byte monito3[8]={
  B01110,
  B01110,
  B00100,
  B01110,
  B10101,
  B00100,
  B01010,
  B10001,
};

byte A[8]={
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};
byte B[8]={
  B00000,
  B00000,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
};
byte E[8]={
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B00000,
  B00000,
};
byte L[8]={
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
};


void setup() {
lcd.init();
lcd.backlight();
lcd.clear();
lcd.createChar(0,pacman);
lcd.createChar(1,pacmanCerrado);
lcd.createChar(2,fantasma);
lcd.createChar(3,fantasmaOjoD);
lcd.createChar(4,fantasmaOjoI);
lcd.createChar(5,fantasmaO);
lcd.createChar(6,fantasmaOs);


}

void loop() {
  lcd.clear();
  //fantasma
lcd.setCursor(0,0);
lcd.write(byte(2));
delay(500);
lcd.setCursor(0,0);
lcd.write(byte(3));
delay(500);
lcd.setCursor(0,0);
lcd.write(byte(2));
delay(500);
lcd.setCursor(0,0);
lcd.write(byte(4));
delay(500);
lcd.setCursor(0,0);
lcd.write(byte(5));
delay(1000);
lcd.setCursor(0,0);
lcd.write(byte(6));
delay(1000);
lcd.clear();
//pacman
lcd.createChar(0,pacman);
lcd.createChar(1,pacmanCerrado);
lcd.setCursor(3,0);
lcd.write(byte(0));
delay(1000);
lcd.setCursor(3,0);
lcd.write(byte(1));
delay(1000);
lcd.setCursor(3,0);
lcd.write(byte(0));
delay(1000);
lcd.setCursor(3,0);
lcd.write(byte(1));
delay(1000);
lcd.setCursor(3,0);
lcd.write(byte(1));
delay(1000);
lcd.setCursor(3,0);
lcd.write(byte(0));
delay(1000);
lcd.setCursor(3,0);
lcd.write(byte(1));
delay(1000);
lcd.clear();
lcd.createChar(7,monito);
lcd.createChar(8,monito2);
lcd.createChar(9,monito3);
// monito
lcd.setCursor(8,1);
lcd.write(byte(7));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(8));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(9));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(8));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(7));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(9));
delay(1000);
lcd.clear();


//ultima animacion 
lcd.createChar(10,A);
lcd.createChar(11,B);
lcd.createChar(12,E);
lcd.createChar(13,L);

lcd.setCursor(10,1);
lcd.write(byte(10));
delay(750);
lcd.setCursor(10,1);
lcd.write(byte(11));
delay(750);
lcd.setCursor(10,1);
lcd.write(byte(12));
delay(750);
lcd.setCursor(10,1);
lcd.write(byte(13));
delay(750);
lcd.clear();


 
}
