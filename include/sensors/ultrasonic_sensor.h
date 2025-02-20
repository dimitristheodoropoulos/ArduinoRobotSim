#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

#include "sensor.h"
#include <iostream>
#include <cstdlib>

class UltrasonicSensor : public Sensor {
public:
    UltrasonicSensor() { std::cout << "Ultrasonic Sensor initialized." << std::endl; }
    int readValue() const override { return rand() % 400; }  // Simulate distance (0-400 cm)
    std::string getType() const override { return "Ultrasonic"; }
};

#endif  // ULTRASONIC_SENSOR_H
