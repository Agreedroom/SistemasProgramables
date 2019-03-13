/*
 * Sistemas Programables
 * Abel Monsivais Badillo
 * 165051844
 * 
 */
 int verde=3;
 int  amarillo=4;
 int rojo =5;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  digitalWrite(verde,1);
  delay(5000);

  digitalWrite(verde,1);
  delay(1000);
  digitalWrite(verde,0);
  delay(1000);
  digitalWrite(verde,1);
  delay(750);
  digitalWrite(verde,0);
  delay(750);
  
  digitalWrite(verde,1);
  delay(500);
  digitalWrite(verde,0);
  delay(500);

  digitalWrite(verde,1);
  delay(250);
  digitalWrite(verde,0);
  delay(250);

  
  digitalWrite(amarillo,1);
  delay(1000);
  digitalWrite(amarillo,0);
  digitalWrite(amarillo,1);
  delay(500);
  digitalWrite(amarillo,0);

  digitalWrite(rojo,1);
  delay(5000);
  digitalWrite(rojo,0);




  
}
