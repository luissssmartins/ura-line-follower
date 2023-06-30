#include <Arduino.h>
#include <L9110H.h>

#define rightSensor 3
#define leftSensor 2

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

  Serial.print("direita");
  Serial.println(isRight);

  Serial.print("esquerda");
  Serial.println(isLeft);

  if (isRight == 1 && isLeft == 1) {
    robot.forward(255, false);

    delay(50);

    return;

  } else if (isRight == 0 && isLeft == 0) {

    robot.stop();

    delay(2000);

    return;
  }

  // if (isRight == 0 && isLeft == 0) {
  //   robot.forward(255, 50, true);
    
  //   delay(50);

  // } else if (isRight == 1 && isLeft == 1) {
  //   robot.stop();

  //   delay(2000);

  // } else if (isLeft == 1 && isRight == 0) {
  //   robot.left(255, 50, true);

  //   delay(50);

  // } else if (isRight == 1 && isLeft == 0) {
  //   robot.right(255, 50, true);

  //   delay(50);
  // }

  delay(1000);
}