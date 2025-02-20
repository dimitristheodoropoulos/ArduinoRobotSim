#ifndef MOTOR_H
#define MOTOR_H

#include "actuator.h"
#include "motor_control.h"  // Include the MotorControl class for hardware-related actions
#include <iostream>

class Motor : public Actuator {
private:
    int speed; // Speed of the motor (0-100%)
    MotorControl motorControl; // Instance of MotorControl to manage hardware interaction

public:
    Motor(int pin) : speed(0), motorControl(pin) { 
        std::cout << "Motor initialized on pin " << pin << "." << std::endl;
    }

    void activate() override {
        speed = 100;
        motorControl.setSpeed(speed); // Setting speed through motorControl
        std::cout << "Motor activated at full speed!" << std::endl;
    }

    void deactivate() override {
        speed = 0;
        motorControl.stop(); // Stop the motor using motorControl
        std::cout << "Motor stopped." << std::endl;
    }

    std::string getType() const override { 
        return "Motor"; 
    }

    void actuate() override {
        std::cout << "Motor is running at speed: " << speed << "%" << std::endl;
    }

    void setSpeed(int newSpeed) override {
        if (newSpeed >= 0 && newSpeed <= 100) {
            speed = newSpeed;
            motorControl.setSpeed(speed); // Set speed through motorControl
            std::cout << "Motor speed set to: " << speed << "%" << std::endl;
        } else {
            std::cout << "Invalid speed value. Speed must be between 0 and 100." << std::endl;
        }
    }

    // New function to get the current speed of the motor
    int getSpeed() const {
        return speed;
    }
};

#endif  // MOTOR_H
