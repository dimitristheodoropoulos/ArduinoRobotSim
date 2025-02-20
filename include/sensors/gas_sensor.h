#ifndef GAS_SENSOR_H
#define GAS_SENSOR_H

#include "sensor.h"
#include <cstdlib>  // For rand()
#include <ctime>    // For seeding random number generator

class GasSensor : public Sensor {
public:
    GasSensor() {
        std::cout << "Gas Sensor initialized." << std::endl;
        srand(static_cast<unsigned int>(time(0)));  // Seed random number generator
    }

    // Override to simulate gas concentration: 0-1000 ppm (random range)
    int readValue() const override {
        return (rand() % 1001);  // Random value between 0 and 1000 ppm
    }

    std::string getType() const override {
        return "Gas";
    }
};

#endif  // GAS_SENSOR_H
