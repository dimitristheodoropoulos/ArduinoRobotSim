#ifndef ROBOT_H
#define ROBOT_H

#include "sensor.h"
#include "actuator.h"
#include "timer.h"
#include <memory>  // For using smart pointers

enum class State {
    MOVING,
    TURNING,
    STOPPED
};

class Robot {
public:
    Robot();
    void start();
    void update();  // Update the robot's behavior
    void moveForward();
    void moveBackward();
    void turnLeft();
    void turnRight();
    void stop();
    
private:
    State state;
    std::unique_ptr<Sensor> sensor;   // Using smart pointer for dynamic sensor allocation
    std::unique_ptr<Actuator> actuator; // Using smart pointer for dynamic actuator allocation
    Timer timer;
    void handleMovement();
};

#endif  // ROBOT_H
