#ifndef INFRARED_SENSOR_H
#define INFRARED_SENSOR_H

#include "sensor.h"
#include <iostream>
#include <cstdlib>

class InfraredSensor : public Sensor {
public:
    InfraredSensor() { std::cout << "Infrared Sensor initialized." << std::endl; }
    int readValue() const override { return rand() % 2; }  // 0 (no object), 1 (object detected)
    std::string getType() const override { return "Infrared"; }
};

#endif  // INFRARED_SENSOR_H
