#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT11.h>
int pin=4;
DHT11 dht11(pin);
LiquidCrystal_I2C lcd(0x27,16,2);
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


void setup() {
lcd.init();
lcd.backlight();
lcd.createChar(0,monito);//manos en medio
lcd.createChar(1,monito2);//manos arriba
lcd.createChar(2,monito3);//manos abajo
}

void loop() {
//pantalla1  
lcd.setCursor(0,0);
lcd.print("Bienvenidos al");
lcd.setCursor(5,1);
lcd.print("ITS");
//animacion
lcd.setCursor(8,1);
lcd.write(byte(1));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(0));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(2));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(1));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(0));
delay(1000);
lcd.setCursor(8,1);
lcd.write(byte(2));
delay(1000);


delay(2000);

//pantalla2
   int err; 
  float temp, humi;
  err = dht11.read(humi, temp);
  if (err == 0)
  {
    //pantalla 2
    lcd.clear();
    lcd.setCursor(3,0);
    lcd.print("La temp act");
    lcd.setCursor(4,1);
    lcd.print(temp);
    for(int i=0;i<=4;i++){
      lcd.scrollDisplayRight();
      delay(750);
    }
        for(int i=0;i<=4;i++){
      lcd.scrollDisplayLeft();
      delay(750);
    }
    lcd.clear();
    delay(2000);
   // pantalla3
    lcd.setCursor(3,0);
    lcd.print("La hum act");
    lcd.setCursor(4,1);
    lcd.print(humi);
    for(int i=0;i<=4;i++){
      lcd.scrollDisplayRight();
      delay(750);
    }
        for(int i=0;i<=4;i++){
      lcd.scrollDisplayLeft();
      delay(750);
    }
    lcd.clear();
    if(temp>=29.0){
      lcd.setCursor(4,0);
      lcd.print("ALERTA!");
      lcd.setCursor(0,1);
      lcd.print("La Temp es");
      lcd.setCursor(12,1);
      lcd.print(temp);
      delay(2000);
    }
  }
  else
  {
    Serial.println();
    Serial.print("Error No :");
    Serial.print(err);
    Serial.println();
  }
  delay(DHT11_RETRY_DELAY); 
 
 lcd.clear();
}
