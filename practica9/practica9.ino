int lectura=0;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 lectura =analogRead(A0);
 Serial.println(lectura);
 delay(1000);
  

}
