#include "../include/led.h"

void LED::activate() {
    isOn = true;  // No conflict now — clearly refers to the member variable
    std::cout << "LED Activated!" << std::endl;
}

void LED::deactivate() {
    isOn = false;  // No conflict now
    std::cout << "LED Deactivated!" << std::endl;
}

std::string LED::getType() const {
    return "LED";
}

bool LED::getIsOn() const {  // Use the new name
    return isOn;
}
