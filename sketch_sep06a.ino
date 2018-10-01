#include <Stepper.h>

const int stepsPerRevolution = 20;

// Connection pins:
Stepper myStepperX(stepsPerRevolution, 8,9,10,11);

void setup() {
// Set speed:
myStepperX.setSpeed(200);
// max 250 steps for dvd/cd stepper motor
myStepperX.step(125);
delay(100);

}

void loop() {

}
