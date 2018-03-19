int elapsedSeconds = 0;
int nextPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  elapsedSeconds = 0;
  nextPin = 2;
}

void loop() {
  // put your main code here, to run repeatedly:
    elapsedSeconds++;
    if(elapsedSeconds%60==0){
        digitalWrite(nextPin++,HIGH);
    }
    delay(1000);
}