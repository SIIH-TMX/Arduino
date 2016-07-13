

const byte pirPin = 2;
const byte led = 5;


void setup() {
  // put your setup code here, to run once:
    pinMode(led, OUTPUT);
    attachInterrupt(digitalPinToInterrupt(pirPin), detectado,RISING  );

}

void loop() {
  // put your main code here, to run repeatedly:

}

void detectado(){

digitalWrite(led, !digitalRead(led));
  
}

