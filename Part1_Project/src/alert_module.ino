#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
#define RELAY_PIN D7
extern LiquidCrystal_I2C lcd; // defined in main.ino

void initAlert() {
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW);
}

void triggerAlert() {
    digitalWrite(RELAY_PIN, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Train on Track  ");
}

void resetAlert() {
    digitalWrite(RELAY_PIN, LOW);
    lcd.setCursor(0, 1);
    lcd.print("No Train      ");
}
