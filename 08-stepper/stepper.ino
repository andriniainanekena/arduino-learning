#include <Stepper.h>

const int stepsPerRevolution = 2048;

Stepper myStepper(stepsPerRevolution, 3, 5, 4, 2);

int steps = 0;

void setup() {
  myStepper.setSpeed(10);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    steps = Serial.parseInt();

    if (steps != 0) {
      Serial.println(steps);

      myStepper.step(-steps);
      delay(500);

      myStepper.step(steps);
      delay(500);
    }
  }
}