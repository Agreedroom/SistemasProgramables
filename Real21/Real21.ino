float lectura =0;
float celcius = 0;
float celciusd = 0.0;
float farenheitd = 0.0;
float humedad = 0.0;

#include <DHT.h>
#include <DHT_U.h>
DHT dht(2, DHT11);
void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
   
}
void loop() {
  //Lectura con ln35
  lectura = analogRead(A0);
  celcius = (lectura*5.0*100.0)/1023.0;
  Serial.println("///// Medicion de la temperatura con ln35 //////")
  Serial.print("La temperatura es: ");
  Serial.print(celcius);
  Serial.println(" °");

// lectura con DHT11
  farenheitd = dht11.readTemperature(true);
  celcius = dht11.readTemperature();
  humedad = dht11.readHumidity();
  if (isnan(celciusd) || isnan(humedad) || isnan(farenheitd))
  {
    Serial.println("Ha ocurrido un error");
    return;
  }else
  {
      Serial.println("///// Medicion de la temperatura con DHT11 //////")
    Serial.print("La temperatura es: ");
    Serial.print(celciusd);
    Serial.println(" °");
    Serial.print("La temperatura en Farenheit es: ");
    Serial.print(farenheitd);

    Serial.print("Humedad es: ");
    Serial.print(humedad);
  }
}
