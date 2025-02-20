#include "buzzer.h"
#include <iostream>  // Now we can use std::cout here

void Buzzer::activate() {
    isOn = true;
    std::cout << "Buzzer activated! Beep Beep!" << std::endl;
}

void Buzzer::deactivate() {
    isOn = false;
    std::cout << "Buzzer deactivated." << std::endl;
}

std::string Buzzer::getType() const {
    return "Buzzer";
}

void Buzzer::actuate() {
    if (isOn) {
        std::cout << "Buzzer is beeping!" << std::endl;
    } else {
        std::cout << "Buzzer is silent." << std::endl;
    }
}

bool Buzzer::isActive() const {
    return isOn;
}

void Buzzer::setSpeed(int newSpeed) {
    std::cout << "Setting buzzer speed is not applicable. Buzzer only has on/off states." << std::endl;
}
