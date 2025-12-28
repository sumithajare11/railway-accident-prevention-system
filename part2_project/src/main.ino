#include "modules.h"

int thresholdDistance = 10;

void setup() {
    initSensor();
    initAlert();
    initDebug();
}

void loop() {
    int distance = readDistance();
    printDistance(distance);

    if(distance <= thresholdDistance && distance > 0) {
        triggerAlert();
        printAlertStatus(true);
        delay(3000); // simulate alert duration
    } else {
        resetAlert();
        printAlertStatus(false);
        delay(1000);
    }

    delay(500);
}
