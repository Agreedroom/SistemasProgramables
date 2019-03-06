int aumento=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  analogWrite(3,255);
  delay(1000);
  analogWrite(3,76);
  delay(1000);
  analogWrite(3,53);
  delay(1000);
  analogWrite(3,25);
 delay(1000);
 
  
}
