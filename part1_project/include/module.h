#ifndef MODULES_H
#define MODULES_H

// Sensor module
void initSensor();
int readDistance();

// Alert module
void initAlert();
void triggerAlert();
void resetAlert();

// Servo module
void initServos();
void moveServosClose();
void moveServosOpen();

#endif
