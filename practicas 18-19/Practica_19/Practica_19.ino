float celcius = 0.0;
float farenheit = 0.0;
float humedad = 0.0;

#include <DHT.h>
#include <DHT_U.h>

DHT dht11(2, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
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
  delay(1000);
}
