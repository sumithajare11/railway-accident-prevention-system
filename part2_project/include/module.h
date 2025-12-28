#ifndef MODULES_H
#define MODULES_H

// Sensor module
void initSensor();
int readDistance();

// Alert module
void initAlert();
void triggerAlert();
void resetAlert();

// Debug module
void initDebug();
void printDistance(int distance);
void printAlertStatus(bool trainDetected);

#endif
