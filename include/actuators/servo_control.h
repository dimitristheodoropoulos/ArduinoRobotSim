#ifndef SERVO_CONTROL_H
#define SERVO_CONTROL_H

class ServoControl {
public:
    ServoControl(int pin);
    void setAngle(int angle);  // Set the servo's angle (0 to 180)

private:
    int _pin;
    int _angle;
};

#endif
