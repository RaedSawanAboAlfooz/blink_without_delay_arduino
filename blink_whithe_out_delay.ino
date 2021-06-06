unsigned long x1;
unsigned long x2;
unsigned long x3;

void setup() {
pinMode(2,1);
pinMode(3,1);
pinMode(4,1);
}

void loop() {
blinkWd(2,1000,&x1);
blinkWd(3,200,&x2);
blinkWd(4,100,&x3);
}

void blinkWd(byte pin , unsigned int timeOut, unsigned long *Xt){
  if(millis() - *Xt > timeOut ){
    digitalWrite(pin , !digitalRead(pin));
    *Xt = millis();
  }
}
