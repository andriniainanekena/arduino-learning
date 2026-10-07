#include <Servo.h>

const int threshold = 10;
long duration, distance;
int position = 0;
Servo myServo;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
  myServo.attach(9);
}

void loop() {
  digitalWrite(2, LOW);
  delayMicroseconds(2);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);

  duration = pulseIn(4, HIGH);
  distance = duration * 340 / (2 * 10000);

  if (distance <= threshold) {
    position = 90;
  } else {
    position = 0;
  }

  myServo.write(position);
  delay(1000);
}