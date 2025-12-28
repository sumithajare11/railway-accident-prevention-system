#include <LiquidCrystal_I2C.h>
#include "modules.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);
int thresholdDistance = 10;

void setup() {
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Train Monitor");
    delay(3000);
    lcd.clear();

    initSensor();
    initAlert();
    initServos();
}

void loop() {
    int distance = readDistance();
    lcd.setCursor(0, 0);
    lcd.print("Distance: ");
    lcd.print(distance);
    lcd.print(" cm");

    if(distance <= thresholdDistance && distance > 0) {
        triggerAlert();
        moveServosClose();
        delay(3500);
    } else {
        resetAlert();
        moveServosOpen();
        delay(500);
    }

    delay(500);
}
