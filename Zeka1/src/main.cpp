#include <Arduino.h>

int lampu1 =26;
int lampu2 =33;
int lampu3 =27;

void setup() {
  // put your setup code here, to run once:
  pinMode(lampu1, OUTPUT);
  pinMode(lampu2, OUTPUT);
  pinMode(lampu3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(lampu1, HIGH);
  delay(15000); 
  digitalWrite(lampu1, LOW);

  digitalWrite(lampu2, HIGH);
  delay(4000); 
  digitalWrite(lampu2, LOW);
 
  digitalWrite(lampu3, HIGH);
  delay(10000); 
  digitalWrite(lampu3, LOW);
   
}
