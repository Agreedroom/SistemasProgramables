int lectura=0;
double voltaje=0.0;
int medida=0;
float celcius=0.0;
float farenheit =0.0;
int foco=2;
int amarillo=3;
int foco2=4;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(foco,OUTPUT);
 pinMode(amarillo,OUTPUT);
 pinMode(foco2,OUTPUT);
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
  if(grados>28.0){
    digitalWrite(foco,1);
    digitalWrite(amarillo,0);
    digitalWrite(foco2,0);
  }
  if(grados>=19.088 && grados<28.0){
    digitalWrite(foco,0);
    digitalWrite(amarillo,1);
    digitalWrite(foco2,0);
  }
  if(grados<19.0){
    digitalWrite(foco,0);
    digitalWrite(amarillo,0);
    digitalWrite(foco2,1);
  }
 delay(1000);
 
 
}
