
int de = 1000;
void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    for(int i =2; i <=6 ; i++){
      digitalWrite(i, HIGH);
    }
    delay(de);
    for(int i =3; i <=6 ; i++){
      digitalWrite(i, LOW);
    }
    delay(de);
    for(int i =2; i <=6 ; i++){
      digitalWrite(i, HIGH);
      delay(de);
    }
    for(int i =6; i >=2 ; i--){
      digitalWrite(i, LOW);
      delay(de);
    }
    for(int i =2; i <=6 ; i++){
      digitalWrite(i, HIGH);
      delay(de);
      digitalWrite(i, LOW);
    }
    delay(d);
}
