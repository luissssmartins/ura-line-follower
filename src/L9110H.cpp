#include "L9110H.h"

#include <Arduino.h>

L9110H::L9110H() {
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);
}

void L9110H::motor(int motorNumber, String instruction, int speed) {

    switch (motorNumber) {

        case 1: {
            pinA = 4;
            pinB = 5;
            break;
        }

        case 2: {
            pinA = 7;
            pinB = 6;
            break;
        }

        default: {
            break;
        }
    }

    if (instruction == "FORWARD") {
        analogWrite(pinB, 1);
        analogWrite(pinA, speed);
    } else if (instruction == "BACKWARD") {
        analogWrite(pinA, 1);
        analogWrite(pinB, speed);
    } else if (instruction == "STOP") {
        analogWrite(pinA, 0);
        analogWrite(pinB, 0);
    }
}

void L9110H::forward(int i, bool hasStop) {
    motor(1, "BACKWARD", i);
    motor(2, "FORWARD", i);

    if (hasStop) {
        stop();
    }
}

void L9110H::backward(int i, bool hasStop) {
    motor(1, "FORWARD", i);
    motor(2, "BACKWARD", i);

    if (hasStop) {
        stop();
    }
}

void L9110H::right(int i, bool hasStop) {
    motor(1, "BACKWARD", i);
    motor(2, "BACKWARD", i);

    if (hasStop) {
        stop();
    }
}

void L9110H::left(int i, bool hasStop) {
    motor(1, "FORWARD", i);
    motor(2, "FORWARD", i);

    if (hasStop) {
        stop();
    }
}

void L9110H::stop() {
    motor(1, "STOP", 0);
    motor(2, "STOP", 0);
}
