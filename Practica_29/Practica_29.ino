#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <DHT11.h>
int pin = 4;
int foco =5;
DHT11 dht11(pin);

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
lcd.init();
pinMode(5,OUTPUT);
lcd.backlight();
lcd.setCursor(0,0);
lcd.print("La Temperatura ");
lcd.setCursor(0,1);
lcd.print("actual es ");
lcd.setCursor(15,1);
lcd.print("C");
}
void loop() {
   int err; 
  float temp, humi;
  err = dht11.read(humi, temp);
  if (err == 0)
  {
    lcd.setCursor(10,1);
    lcd.print(temp);  
    if(temp>=29.00){
      lcd.clear();
      lcd.setCursor(0,5);
      lcd.print("Alerta!!!!");
      lcd.setCursor(1,0);
      lcd.print("ALTA TEMP");
      lcd.noBlink();
      digitalWrite(foco,1);
      lcd.setCursor(10,1);
      delay(250);
      digitalWrite(foco,0);
      lcd.print(temp);  
      lcd.blink();
      delay(250);
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
 
 
}
