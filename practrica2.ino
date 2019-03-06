/*
    Abel Monsivais Badillo
    16051844
    Sexto semestre
    Sistemas Programables

*/

void setup() {
  // put your setup code here, to run once:
  //Primero definimos los pines que utilizaremos para cada LED

    pinMode(6,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(2,OUTPUT);
}

void loop() {
    /*
    En este void loop lo que hacemos es crear una secuencia para que 
    los LED se puedan encender y apagar cada segundo en cadena
    */
    digitalWrite(6,HIGH);
    delay(1000);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    delay(1000);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    delay(1000);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    delay(1000);

}