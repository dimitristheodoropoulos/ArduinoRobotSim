#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "sensor.h"
#include <iostream>

class TemperatureSensor : public Sensor {
public:
    TemperatureSensor() { 
        std::cout << "Temperature Sensor initialized." << std::endl; 
    }

    // Override to simulate a temperature range from 0 to 40°C
    int readValue() const override {
        return (rand() % 41);  // Random number between 0 and 40 (inclusive)
    }

    std::string getType() const override {
        return "Temperature";  // Return sensor type
    }
};

#endif  // TEMPERATURE_SENSOR_H
