int pin = 13; //Inicializamos la varible pin con un valor de 13

void setup() {
  pinMode(pin, OUTPUT); //Establecemos que el pin(numero 13), sera usaddo como una Salida Digital
  pinMode(8,OUTPUT);
}

void loop() {

  digitalWrite(pin, HIGH); //Con esta instruccion le indicamos al arduino que mande 5V al pin en el que estamos trabajando que es el #8
  delay(1000);//Establecemos un tiempo de espera de 1000 milisegunos = 1 segundo
  digitalWrite(pin, LOW); //Mandamos 0V a la salida digital , lo cual significa que se apagara
  delay(1000);


  /*
     Con la funcion analogRead le decimos al arduino que lea lo que estamos detectando por medio de la entrada Analogica
     que son los pines que van de A0 hasta A5
     A diferencia de las entradas digitales lo que debemos hacer es darle valores de0-255 tomando el 255 como nuestro 100%
     ya que las entradas analogicas funcionan con vlaores intermedios a diferencia de las entradas digitales que funcionan con valores de High o Low
  */
  analogWrite(3, 255);
  delay(1000);
  analogWrite(3, 200);
  delay(1000);
  analogWrite(3, 190);
  delay(1000);
  analogWrite(3, 120);
  delay(1000);
  analogWrite(3, 0);
  delay(1000);
}
