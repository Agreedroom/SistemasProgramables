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
}

void loop() {
    for(int i = 1; i<255; i++)
    {
        analogWrite(6,i);
        delay();
    }
     for(int i =255;i<=0; i--)
    {
        
        analogWrite(6,i);
        delay(s);
    }
    
} 
