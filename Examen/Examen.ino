int inc =0;
void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  a)
  analogWrite(5,255);
  analogWrite(6,255);
  analogWrite(9,255);
  analogWrite(10,255);
  analogWrite(11,255);
  delay(1000);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(11,0);
  delay(1000);

  //b)
  delay(5000);
   while(inc<=255){
    analogWrite(5,inc);
    analogWrite(6,inc);
    analogWrite(9,inc);
    analogWrite(10,inc);
    analogWrite(11,inc);
    delay(50);
    inc++;
   }
   while(inc>=0){
    analogWrite(5,inc);
    analogWrite(6,inc);
    analogWrite(9,inc);
    analogWrite(10,inc);
    analogWrite(11,inc);
    delay(50);
    inc--;
    
   }

   analogWrite(5,0);
    analogWrite(6,0);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(11,0);
   delay(5000);
   
   //c)
   analogWrite(5,100);
   delay(250);
   
   analogWrite(6,100);
   delay(250);
  // analogWrite(6,0);
   delay(250);

   analogWrite(9,100);
   delay(250);
   //analogWrite(9,0);
   delay(250);

   analogWrite(10,100);
   delay(250);
  

   analogWrite(11,100);
   delay(250);
   
    analogWrite(11,0);
   delay(250);
    analogWrite(10,0);
   delay(250);
   analogWrite(9,0);
   delay(250);
   analogWrite(6,0);
   delay(250);
   analogWrite(5,0);
   delay(250);
   
  delay(5000);
  //d)

    analogWrite(11,100);
   delay(250);
   //analogWrite(11,0);
   //delay(250);

   analogWrite(10,100);
   //delay(250);
   //analogWrite(10,0);
   delay(250);

   analogWrite(9,100);
   delay(250);
   //analogWrite(9,0);
   //delay(250);

   analogWrite(6,100);
   delay(250);
   //analogWrite(6,0);
   //delay(250);

   analogWrite(5,100);
   delay(250);
   //analogWrite(5,0);
   //delay(250);

   analogWrite(5,0);
   delay(250);
    analogWrite(6,0);
   delay(250);
   analogWrite(9,0);
   delay(250);
   analogWrite(10,0);
   delay(250);
   analogWrite(11,0);
   delay(250);
    delay(5000);
  
  
  

}
