int lectura=0;
double voltaje=0.0;
float celcius=0.0;
int foco=13;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(foco,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(11,OUTPUT);
}

void loop() {
  lectura =analogRead(0);
  voltaje=(lectura*5.0)/1023.0;
  celcius=(voltaje*1000)/10;
  Serial.print(celcius);
  Serial.println(" °");
  
  if(celcius>=26.0)
  {
     digitalWrite(3,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(9,0);
    digitalWrite(11,0);
    digitalWrite(foco,1);
    delay(2000);
    digitalWrite(foco,0);
    delay(2000);
  }else
  if(celcius>=20.88 && celcius<25.0){

    for(int i=0;i<10;i++){
      digitalWrite(i,1);
      delay(500);
    }
    delay(1000);
    for(int i=10;i>=0;i--){
      digitalWrite(i,0);
      delay(500);
    }
    delay(1000);
    for(int i=10;i>=0;i--){
      digitalWrite(i,1);
      delay(500);
    }
        for(int i=0;i<10;i++){
      digitalWrite(i,0);
      delay(500);
    }
    
    
   
  }else
  if(celcius<=19.0){
    for(int i =0;i<255;i++){
      analogWrite(3,i);
      analogWrite(5,i);
      analogWrite(6,i);
      analogWrite(9,i);
      analogWrite(11,i);
      delay(20);
      Serial.println(i);
    }

    for(int b =255;b>=0;b--){
      analogWrite(3,b);
      analogWrite(5,b);
      analogWrite(6,b);
      analogWrite(9,b);
      analogWrite(11,b);
      Serial.println(b);
      delay(100);
    }
  }
 delay(1000);
 
 
}
