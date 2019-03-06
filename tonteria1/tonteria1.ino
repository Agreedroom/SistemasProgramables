/*
    Abel Monsivais Badillo
    16051844
    Sexto semestre
    Sistemas Programables

*/
int d=1000;
int tiempo=100;
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
    delay(125);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    delay(125);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    delay(125);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    delay(125);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    delay(125);
    digitalWrite(2,LOW);
    delay(125);

        digitalWrite(2,HIGH);
    delay(125);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(125);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(125);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    delay(125);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    delay(125);
    digitalWrite(6,LOW);
    delay(15);



    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(2,HIGH);
    delay(tiempo);
    
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    delay(tiempo);

     digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(2,HIGH);
    delay(tiempo);

     digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    delay(tiempo);

      delay(125);
    digitalWrite(4,LOW);
    digitalWrite(4,HIGH);
    delay(125);
    digitalWrite(6,LOW);
    digitalWrite(6,HIGH);
    delay(125);
    digitalWrite(4,LOW);
    digitalWrite(4,HIGH);
    delay(125);
    digitalWrite(5,LOW);
    digitalWrite(2,HIGH);
    delay(125);
    digitalWrite(2,LOW);
    delay(150);

    digitalWrite(2,HIGH);
    digitalWrite(6,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    digitalWrite(6,LOW);
    delay(100);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    delay(100);
 digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    delay(1000);
    digitalWrite(4,HIGH);
    
    


}
