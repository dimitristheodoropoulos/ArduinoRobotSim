#include "imu_sensor.h"
#include <iostream> // Include necessary headers
#include <cstdlib>  // For random acceleration generation (or remove if not needed)

// Define the IMUSensor methods

void IMUSensor::initialize() {
    // Initialize the IMU sensor hardware or settings
    std::cout << "IMU Sensor Initialized" << std::endl;
}

float IMUSensor::getRotation() {
    // Simulate IMU rotation or return real data
    return 0.0f; // Example return value
}

void IMUSensor::getAcceleration(double &ax, double &ay, double &az) {
    // Example implementation: setting random acceleration values
    ax = rand() % 10 + 1;  // Random acceleration between 1 and 10
    ay = rand() % 10 + 1;
    az = rand() % 10 + 1;
}
