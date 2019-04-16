

#include <DHT11.h>

int pin = 4;
DHT11 dht11(pin);

void setup()
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop()
{
  int err; 
  float temp, humi;
  err = dht11.read(humi, temp);
  if (err == 0)
  {
    //Serial.print(millis());
   // Serial.print(",");
    Serial.print(temp);
    Serial.print(",");
    Serial.print(humi);
    Serial.println();
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



