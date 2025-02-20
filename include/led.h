#ifndef LED_H
#define LED_H

#include "actuator.h"
#include <iostream>

class LED : public Actuator {
private:
    bool isOn;  // Private member variable
    int brightness;

public:
    LED() : isOn(false), brightness(0) { std::cout << "LED initialized." << std::endl; }

    void activate() override {
        isOn = true;
        std::cout << "LED turned ON!" << std::endl;
    }

    void deactivate() override {
        isOn = false;
        std::cout << "LED turned OFF!" << std::endl;
    }

    std::string getType() const override {
        return "LED";
    }

    void actuate() override {
        if (isOn) {
            std::cout << "LED is shining!" << std::endl;
        } else {
            std::cout << "LED is off." << std::endl;
        }
    }

    void setSpeed(int newSpeed) override {
        if (newSpeed >= 0 && newSpeed <= 100) {
            brightness = newSpeed;
            std::cout << "LED brightness set to: " << brightness << "%" << std::endl;
        } else {
            std::cout << "Invalid brightness value. Must be between 0 and 100." << std::endl;
        }
    }

    bool getIsOn() const {  // Renamed getter method
        return isOn;
    }
};

#endif  // LED_H
