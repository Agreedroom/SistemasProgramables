/*
    Abel Monsivais Badillo
    16051844
    Sexto semestre
    Sistemas Programables

*/
int d=1000;
int o=500;
int s=100;
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
    for(int i = 2; i <7; i++)
    {
        digitalWrite(i,HIGH);
        delay(s);
    
        digitalWrite(i,LOW);
    }
     for(int i = 6;  i>=2; i--)
    {
        digitalWrite(i,HIGH);
        delay(s);
    
        digitalWrite(i,LOW);
    }
    
}
