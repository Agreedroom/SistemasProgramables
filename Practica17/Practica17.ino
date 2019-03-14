int uno =1;
int dos =2
int foco = 3;
int cuatro =4;
int cinco=5;
void setup() {
   pinMode(uno,OUTPUT);
   pinMode(dos,OUTPUT);
   pinMode(foco,OUTPUT);
   pinMode(cuatro,OUTPUT);
   pinMode(cinco,OUTPUT);
}

void loop() {
//a)enciende y apaga un segundo, enciende izquierda a derecha y despues derecha a izquierda

  digitalWrite(uno,1);
  digitalWrite(dos,1);
  digitalWrite(foco,1);
  digitalWrite(cuatro,1);
  digitalWrite(cinco,1);
  delay(1000);

  digitalWrite(uno,0);
  digitalWrite(dos,0);
  digitalWrite(foco,0);
  digitalWrite(cuatro,0);
  digitalWrite(cinco,0);
  delay(1000);
  // derecha a izquierda
  
   digitalWrite(uno,1);
   delay(1000);
   digitalWrite(dos,1);
   delay(1000);
   digitalWrite(foco,1);
   delay(1000);
   digitalWrite(cuatro,1);
   delay(1000);
   digitalWrite(cinco,1);
   delay(1000);

   digitalWrite(uno,0);
  digitalWrite(dos,0);
  digitalWrite(foco,0);
  digitalWrite(cuatro,0);
  digitalWrite(cinco,0);
  delay(1000);


   // izquiera a derecha

   digitalWrite(cinco,1);
   delay(1000);
   digitalWrite(cuatro,1);
   delay(1000);
   digitalWrite(foco,1);
   delay(1000);
   digitalWrite(dos,1);
   delay(1000);
   digitalWrite(uno,1);
   delay(1000);

   digitalWrite(uno,0);
  digitalWrite(dos,0);
  digitalWrite(foco,0);
  digitalWrite(cuatro,0);
  digitalWrite(cinco,0);
  delay(1000);
 //encendico un segundo yy despues se apaga de derecha a izquierda 
   digitalWrite(uno,1);
   delay(1000);
   digitalWrite(dos,1);
   delay(1000);
   digitalWrite(foco,1);
   delay(1000);
   digitalWrite(cuatro,1);
   delay(1000);
   digitalWrite(cinco,1);
   delay(1000);
   
   digitalWrite(cinco,0);
   delay(1000);
   digitalWrite(cuatro,0);
   delay(1000);
   digitalWrite(foco,0);
   delay(1000);
   digitalWrite(dos,0);
   delay(1000);
   digitalWrite(uno,0);
   delay(1000);
  
//c)on y luego off un segundo
  digitalWrite(uno,1);
  digitalWrite(dos,1);
  digitalWrite(foco,1);
  digitalWrite(cuatro,1);
  digitalWrite(cinco,1);
  delay(1000);

  digitalWrite(uno,0);
  digitalWrite(dos,0);
  digitalWrite(foco,0);
  digitalWrite(cuatro,0);
  digitalWrite(cinco,0);
  delay(1000);
}
