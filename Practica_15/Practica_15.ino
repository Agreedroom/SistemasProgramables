int lectura=0;
double voltaje=0.0;
int medida=0;
float celcius=0.0;
float farenheit =0.0;
int verde =7;
int rojo =5;
int amarillo=6;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(3,OUTPUT);
 pinMode(rojo,OUTPUT);
 pinMode(verde,OUTPUT);
 pinMode(amarillo,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 lectura =analogRead(A0);
 Serial.print("La lectura es:");
  Serial.println(lectura);
 voltaje=(lectura*5.0)/1023.0;
 Serial.print("El voltaje es de: ");
 Serial.print(voltaje);
 Serial.println(" V");
 Serial.print("El voltaje en milivolteos es de: ");
 Serial.println(voltaje*1000);
 celcius=(voltaje*1000)/10;
 Serial.print("La temperatura es de: ");
 Serial.print(celcius);
 Serial.println(" °");
 farenheit =((celcius*(9.0/5.0))+32);
 Serial.print("La temperatura es de: ");
 Serial.print(farenheit);
 Serial.println(" grados Farenheit");
 if(celcius>26.0){
  digitalWrite(rojo,1);
  digitalWrite(amarillo,0);
  digitalWrite(verde,0);
 }
 if(celcius>=19.088 && celcius<26.0){
  digitalWrite(rojo,0);
  digitalWrite(amarillo,1);
  digitalWrite(verde,0);
 }
 if(celcius <19.0){
  digitalWrite(rojo,0);
  digitalWrite(amarillo,0);
  digitalWrite(verde,0);
 }

 delay(1000);
 
}
