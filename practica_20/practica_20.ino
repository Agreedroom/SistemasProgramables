
#include <DHT11.h>

int pin = 5;
DHT11 dht11(pin);

float grados=0.0;
float farenheit =0.0;
int foco=2;
int amarillo=3;
int foco2=4;

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
    Serial.print("temperatura:");
    Serial.print(temp);
    Serial.print(" humedad:");
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
  grados=temp;
  if(grados>28.0){
    digitalWrite(foco,1);
    digitalWrite(amarillo,0);
    digitalWrite(foco2,0);
  }
  if(grados>=19.088 && grados<28.0){
    digitalWrite(foco,0);
    digitalWrite(amarillo,1);
    digitalWrite(foco2,0);
  }
  if(grados<19.0){
    digitalWrite(foco,0);
    digitalWrite(amarillo,0);
    digitalWrite(foco2,1);
  }
 delay(1000);
  delay(DHT11_RETRY_DELAY); 
  
}



