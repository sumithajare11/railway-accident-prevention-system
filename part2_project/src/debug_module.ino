#include <Arduino.h>

void initDebug() {
    Serial.begin(115200);
    Serial.println("Train Monitor Initialized");
}

void printDistance(int distance) {
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
}

void printAlertStatus(bool trainDetected) {
    if(trainDetected) {
        Serial.println("Train on Track - Relay ON");
    } else {
        Serial.println("No Train - Relay OFF");
    }
}
