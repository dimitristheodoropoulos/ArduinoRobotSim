#include "motor_control.h"
#include <iostream>

MotorControl::MotorControl(int pin) : _pin(pin), _speed(0) {
    std::cout << "MotorControl initialized on pin " << pin << "." << std::endl;
}

void MotorControl::setSpeed(int speed) {
    if (speed >= 0 && speed <= 100) {
        _speed = speed;
        // Code to set motor speed on hardware
        std::cout << "Motor speed set to: " << _speed << "%" << std::endl;
    } else {
        std::cout << "Invalid speed value. Speed must be between 0 and 100." << std::endl;
    }
}

void MotorControl::stop() {
    _speed = 0;
    // Code to stop the motor hardware
    std::cout << "Motor stopped." << std::endl;
}
