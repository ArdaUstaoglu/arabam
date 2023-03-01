int enA=11;
int enB=10;
int m1A=12;
int m1B=13;
int m2A=8;
int m2B=9;
void setup() {
  //digitalWrite(m1A,LOW);kapalı ileri
  //digitalWrite(m1B,HIGH);açık ileri
  //analogWrite(enA,155);
  //digitalWrite(m2A,LOW);kapalı ileri
  //digitalWrite(m2B,HIGH);açık ileri
  //analogWrite(enB,155);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(m1A,OUTPUT);
  pinMode(m1B,OUTPUT);
  pinMode(m2A,OUTPUT);
  pinMode(m2B,OUTPUT);
}

void loop() {
digitalWrite(m1A,LOW);
digitalWrite(m1B,HIGH);
analogWrite(enA,155);
digitalWrite(m2A,LOW);
digitalWrite(m2B,HIGH);
analogWrite(enB,155);
delay(1500);
digitalWrite(m1A,LOW);
digitalWrite(m1B,HIGH);
analogWrite(enA,155);
digitalWrite(m2A,HIGH);
digitalWrite(m2B,LOW);
analogWrite(enB,105);
delay(900);
digitalWrite(m1A,LOW);
digitalWrite(m1B,HIGH);
analogWrite(enA,155);
digitalWrite(m2A,LOW);
digitalWrite(m2B,HIGH);
analogWrite(enB,155);
delay(1500);
digitalWrite(m1A,HIGH);
digitalWrite(m1B,LOW);
analogWrite(enA,105);
digitalWrite(m2A,LOW);
digitalWrite(m2B,HIGH);
analogWrite(enB,155);
delay(900);
}
