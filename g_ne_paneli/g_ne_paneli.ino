#define MotorR1 4
#define MotorR2 5
#define MotorRE 3
int ldrPin = A0;
int ldrPin2 = A1;
int deger = 0;
int deger2 = 0;
void setup() {
pinMode(ldrPin,INPUT);
pinMode(MotorR1, OUTPUT);
pinMode(MotorR2, OUTPUT);
pinMode(MotorRE, OUTPUT);
Serial.begin(9600);
}

void loop() {

deger = analogRead(ldrPin);
deger2 = analogRead(ldrPin2);
int ldr1 = deger / 4;
int ldr2 = deger2 / 4;
Serial.print("deger:");
Serial.println(deger);
Serial.print("deger2:");
Serial.println(deger2);

if(ldr1 < ldr2){

  sol();
}
else if(ldr1 > ldr2){

  sag();
}
else if(ldr1 = ldr2){

  dur();
}




}
void sag(){
  digitalWrite(MotorR1, HIGH);
  digitalWrite(MotorR2, LOW);
  analogWrite(MotorRE, 90);
}
void sol(){
  digitalWrite(MotorR1, LOW);
  digitalWrite(MotorR2, HIGH);
  analogWrite(MotorRE, 90);
}
void dur(){
  digitalWrite(MotorR1, LOW);
  digitalWrite(MotorR2, LOW);
  analogWrite(MotorRE, 0);
}
