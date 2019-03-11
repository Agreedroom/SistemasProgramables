int uno=1;
int dos=2;
int foco=13;
int tres=3;
int cuatro=4;
void setup() {
pinMode(foco,OUTPUT);
pinMode(uno,OUTPUT);
pinMode(dos,OUTPUT);
pinMode(tres,OUTPUT);
pinMode(cuatro,OUTPUT);
}

void loop() {
  digitalWrite(uno,1);
  delay(1000);
  digitalWrite(uno,0);
  delay(1000);
  
    digitalWrite(dos,1);
  delay(1000);
  digitalWrite(dos,0);
  delay(1000);

    digitalWrite(foco,1);
  delay(1000);
  digitalWrite(foco,0);
  delay(1000);

    digitalWrite(tres,1);
  delay(1000);
  digitalWrite(tres,0);
  delay(1000);

  digitalWrite(cuatro,1);
  delay(1000);
  digitalWrite(cuatro,0);
  delay(1000);

 //b)
   digitalWrite(cuatro,1);
  delay(1000);
  digitalWrite(cuatro,0);
  delay(1000);
    digitalWrite(tres,1);
  delay(1000);
  digitalWrite(tres,0);
  delay(1000);

    digitalWrite(foco,1);
  delay(1000);
  digitalWrite(foco,0);
  delay(1000);

    digitalWrite(dos,1);
  delay(1000);
  digitalWrite(dos,0);
  delay(1000);

    digitalWrite(uno,1);
  delay(1000);
  digitalWrite(uno,0);
  delay(1000);
  //c)

  
}
