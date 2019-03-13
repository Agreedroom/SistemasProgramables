int verde= 2;
int amarillo = 4;
int rojo =6;
int lectura=0;
void setup() {
  pinMode(verde,OUTPUT);
  pinMode(amarillo,OUTPUT);
  pinMode(rojo,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lectura=analogRead(0);
  Serial.println(lectura);
  
  float lectura2=(lectura*5.0)/1023.0;
   Serial.println(lectura2);

   if(lectura2<1.3){
    digitalWrite(rojo,1);
    digitalWrite(amarillo,0);
    digitalWrite(verde,0);
   }
    if(lectura2>=1.3 && lectura2 <=1.5){
    digitalWrite(amarillo,1);
    digitalWrite(rojo,0);
    digitalWrite(verde,0);
   }
  if(lectura2>=1.5){
    digitalWrite(verde,1);
    digitalWrite(amarillo,0);
    digitalWrite(rojo,0);
  }
  
}
