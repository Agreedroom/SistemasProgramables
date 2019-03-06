/*
    Abel Monsivais Badillo
    16051844
    Sexto semestre
    Sistemas Programables

*/
byte pin = 13; // creacion de una variable para el pin
void setup() {
  // put your setup code here, to run once:
    pinMode(pin,OUTPUT);

    
}

void loop() {
  // put your main code here, to run repeatedly:
  //Encendemos led 
  digitalWrite(pin,HIGH);
  delay(1000); // Indicacion para hacer que esoere 1 segundo
  digitalWrite(pin,LOW);
  delay(250) // Un cuarto de4 segundo de delay


}