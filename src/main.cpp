#include <Arduino.h>
#include <L9110H.h>

#define rightSensor 4
#define leftSensor 5

bool isRight, isLeft;

L9110H robot;

void setup() {

  Serial.begin(9600);

  pinMode(rightSensor, INPUT);
  pinMode(leftSensor, INPUT);
}

void loop() {
  isRight = digitalRead(rightSensor);
  isLeft = digitalRead(leftSensor);

  if (isRight == 0 && isLeft == 0) {
    robot.forward(255, 50, false);
    return;

  } else if (isRight == 1 && isLeft == 1) {
    robot.stop();
    return;

  } else if (isLeft == 1 && isRight == 0) {
    robot.left(255, 50, true);
    return;

  } else if (isRight == 1 && isLeft == 0) {
    robot.right(255, 50, true);
    return;
  }

  delay(10000);
}