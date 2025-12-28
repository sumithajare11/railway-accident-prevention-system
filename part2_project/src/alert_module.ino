#include <Arduino.h>
#define RELAY_PIN 12
#define LED_PIN 2

void initAlert() {
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW);

    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);
}

void triggerAlert() {
    digitalWrite(RELAY_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
}

void resetAlert() {
    digitalWrite(RELAY_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
}
