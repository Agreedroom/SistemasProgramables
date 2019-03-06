int lectura=0;
double voltaje=0.0;
int medida=0;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(3,OUTPUT);

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
 delay(1000);
 medida=(lectura*255)/1023;
 analogWrite(3,medida);

  
//1023 - 255
// lectura ->?    
}
