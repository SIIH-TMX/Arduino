#define velBaja 85
#define velMedia 170
#define velAlta= 255

byte motorI = 5 , motorD=6;

void setup() {
  // put your setup code here, to run once:
pinMode(motorI,OUTPUT);
pinMode(motorD,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

giroDerecha(velBaja);
delay(1000);
giroIzquierda(velMedia);
delay(1000);
paro();
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

