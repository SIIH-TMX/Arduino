#define velBaja 85
#define velMedia 170
#define velAlta= 255

byte motorI =6 , motorD=5;

void setup() {
  // put your setup code here, to run once:
pinMode(motorI,OUTPUT);
pinMode(motorD,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


}


void giroDerecha(byte velocidad){
  digitalWrite(motorD,LOW);
  analogWrite(motorI,velocidad);
}
void giroIzquierda(byte velocidad){
    digitalWrite(motorI,LOW);
  analogWrite(motorD,velocidad);
  
}

void paro(){
  digitalWrite(motorD,LOW);
  digitalWrite(motorI,LOW);
}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    
    char dato = (char)Serial.read();
    switch(dato){
      case 'i':
      giroIzquierda(velBaja);
      break;
      case 'd':
      giroDerecha(velMedia);
      break;
      case 'p':
       paro();
      break;
    }
    


    
  }
}

