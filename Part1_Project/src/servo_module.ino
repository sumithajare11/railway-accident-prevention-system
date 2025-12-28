#include <Servo.h>
#include <Arduino.h>
#define SERVO_PIN_1 D3
#define SERVO_PIN_2 D4

Servo servo1;
Servo servo2;

void initServos() {
    servo1.attach(SERVO_PIN_1);
    servo2.attach(SERVO_PIN_2);
    servo1.write(0);
    servo2.write(0);
}

void moveServosClose() {
    servo1.write(120);
    servo2.write(120);
}

void moveServosOpen() {
    servo1.write(0);
    servo2.write(0);
}
