#ifndef ACTUATOR_H
#define ACTUATOR_H

#include <iostream>
#include <string>

// Abstract base class for actuators
class Actuator {
public:
    virtual ~Actuator() = default;
    
    virtual void activate() = 0;  // Activate the actuator
    virtual void deactivate() = 0;  // Deactivate the actuator
    virtual std::string getType() const = 0;  // Return actuator type
    
    // Generic function for motion control (if applicable to your actuators)
    virtual void actuate() = 0;  // General activation behavior
    
    virtual void setSpeed(int newSpeed) = 0;  // Not all actuators may use this, but it's available
};

// Motor actuator class
class MotorActuator : public Actuator {
public:
    void activate() override {
        std::cout << "Motor Activated!" << std::endl;
    }

    void deactivate() override {
        std::cout << "Motor Deactivated!" << std::endl;
    }

    std::string getType() const override {
        return "Motor";
    }

    void actuate() override {
        std::cout << "Motor is running!" << std::endl;
    }

    void setSpeed(int speed) override {
        std::cout << "Motor speed set to: " << speed << std::endl;
    }
};

// LED actuator class
class LEDActuator : public Actuator {
public:
    void activate() override {
        std::cout << "LED Activated!" << std::endl;
    }

    void deactivate() override {
        std::cout << "LED Deactivated!" << std::endl;
    }

    std::string getType() const override {
        return "LED";
    }

    void actuate() override {
        std::cout << "LED is on!" << std::endl;
    }

    void setBrightness(int brightness) {
        std::cout << "LED brightness set to: " << brightness << std::endl;
    }
};

// Buzzer actuator class (new addition)
class Buzzer : public Actuator {
private:
    bool isOn;

public:
    Buzzer() : isOn(false) {}

    void activate() override {
        isOn = true;
        std::cout << "Buzzer activated! Beep Beep!" << std::endl;
    }

    void deactivate() override {
        isOn = false;
        std::cout << "Buzzer deactivated." << std::endl;
    }

    std::string getType() const override {
        return "Buzzer";
    }

    void actuate() override {
        if (isOn) {
            std::cout << "Buzzer is beeping!" << std::endl;
        } else {
            std::cout << "Buzzer is silent." << std::endl;
        }
    }

    bool isActive() const {
        return isOn;
    }

    void setSpeed(int newSpeed) override {
        std::cout << "Setting buzzer speed is not applicable. Buzzer only has on/off states." << std::endl;
    }
};

#endif  // ACTUATOR_H
