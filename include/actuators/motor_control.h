#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

class MotorControl {
public:
    MotorControl(int pin);
    void setSpeed(int speed);  // Set speed of the motor
    void stop();  // Stop the motor

private:
    int _pin;
    int _speed;
};

#endif
