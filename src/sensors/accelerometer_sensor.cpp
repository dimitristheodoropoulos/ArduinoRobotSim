#include <iostream>
#include "sensors/accelerometer_sensor.h"

AccelerometerSensor::AccelerometerSensor(int pin) : _pin(pin) {}

void AccelerometerSensor::readData() {
    // Read data from the accelerometer (mock data)
    std::cout << "Accelerometer data: 0.0, 0.0, 9.8" << std::endl;
}
