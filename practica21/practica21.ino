float celcius = 0.0;
float farenheit = 0.0;
float humedad = 0.0;
int foco=10;
int led=13;
#include <DHT.h>
#include <DHT_U.h>

DHT dht11(2, DHT11);

void setup() {
  Serial.begin(9600);
   pinMode(10,OUTPUT);
    pinMode(13,OUTPUT);
  dht11.begin();
}

void loop() {
  farenheit = dht11.readTemperature(true);
  celcius = dht11.readTemperature();
  humedad = dht11.readHumidity();
  if (isnan(celcius) || isnan(humedad) || isnan(farenheit))
  {
    Serial.println("Ha ocurrido un error");
    return;
  }else
  {
    Serial.print("La temperatura es: ");
    Serial.print(celcius);
    Serial.println(" °");
    Serial.print("La temperatura en Farenheit es: ");
    Serial.print(farenheit);

    Serial.print("Humedad es: ");
    Serial.print(humedad);
  }
  if(celcius>=28)
  {
   digitalWrite(foco,1);
    digitalWrite(led,0);
  }else
  if(celcius>=19 && celcius<28)
  {
    digitalWrite(foco,0);
    digitalWrite(led,1);
  }
  else
  if(celcius<19){
    digitalWrite(foco,1);
    digitalWrite(led,0);
  }
  delay(1000);
}
