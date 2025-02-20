#include "robot.h"
#include "gas_sensor.h"  // Include the specific sensor class

Robot::Robot() {
    sensor = std::make_unique<GasSensor>(); // Initialize sensor as a specific type
    actuator = std::make_unique<MotorActuator>(); // Initialize actuator as a specific type
}

void Robot::start() {
    // Robot startup logic
}

void Robot::update() {
    // Update robot behavior
}

void Robot::moveForward() {
    // Movement logic
}

// Other robot movement methods...
