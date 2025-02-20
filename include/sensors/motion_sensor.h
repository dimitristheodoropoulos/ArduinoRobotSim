#ifndef MOTION_SENSOR_H
#define MOTION_SENSOR_H

#include "sensor.h"
#include <cstdlib>  // For rand()
#include <ctime>    // For seeding random number generator

class MotionSensor : public Sensor {
public:
    MotionSensor() {
        std::cout << "Motion Sensor initialized." << std::endl;
        srand(static_cast<unsigned int>(time(0)));  // Seed random number generator
    }

    // Override to simulate motion detection: 0 = no motion, 1 = motion detected
    int readValue() const override {
        return rand() % 2;  // Random value: 0 or 1 (no motion or motion detected)
    }

    std::string getType() const override {
        return "Motion";
    }
};

#endif  // MOTION_SENSOR_H
