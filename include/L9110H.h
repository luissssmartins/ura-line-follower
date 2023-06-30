#ifndef L9110H_H

#define L9110H_H

#include <Arduino.h>

class L9110H {
    
    public:
      L9110H();

      void motor(int motorNumber, String instruction, int speed);

      void forward(int i, bool hasStop);

      void backward(int i, bool hasStop);

      void right(int i, bool hasStop);

      void left(int i, bool hasStop);

      void stop();

    private:

    int pinA;
    int pinB;
};

#endif