float lectura =0;
float celcius = 0;

void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT); 
}
void loop() {
  lectura = analogRead(A0);
  celcius = (lectura*5.0*100.0)/1023.0;
  Serial.print("La temperatura es: ");
  Serial.print(celcius);
  Serial.println(" °");


  if(c >= 28.0){    
    digitalWrite(6,0);
    digitalWrite(7,1);
  }
  if(c >= 19.0 && c < 28.0){
    digitalWrite(6,1);
    digitalWrite(7,0);
  }
  if(c < 19.0){
    digitalWrite(6,0);
    digitalWrite(7,1);
  }
  delay(1000);
}
