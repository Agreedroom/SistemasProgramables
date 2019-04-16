#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <DHT11.h>
int pin = 4;
DHT11 dht11(pin);

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
lcd.init();
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
