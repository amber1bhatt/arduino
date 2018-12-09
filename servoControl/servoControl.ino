#include <Servo.h>

//How to attach Servo:
// 1. Brown = ground on power side
// 2. Red = 5V on power side
// 3. Orange = any of the pins on digital side (8 is chosen for this one)


Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(8);
  servo.write(0);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i =0; i<= 180; i++){
  servo.write(i);
  delay(10);
  }
}
