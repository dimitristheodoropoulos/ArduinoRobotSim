#ifndef BUZZER_H
#define BUZZER_H

#include "actuator.h"
#include <string>  // Include for std::string

class Buzzer : public Actuator {
private:
    bool isOn;

public:
    Buzzer() : isOn(false) {}

    void activate() override;

    void deactivate() override;

    std::string getType() const override;

    void actuate() override;

    bool isActive() const;

    void setSpeed(int newSpeed) override;
};

#endif  // BUZZER_H
