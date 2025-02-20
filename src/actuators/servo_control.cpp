#include "actuators/servo_control.h"

ServoControl::ServoControl(int pin) : _pin(pin), _angle(0) {}

void ServoControl::setAngle(int angle) {
    _angle = angle;
    // Code to set servo angle on hardware
}
