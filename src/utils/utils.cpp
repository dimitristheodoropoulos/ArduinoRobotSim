#include "../include/utils.h"
#include <iostream>

void printRobotStatus(const Robot& robot) {
    std::cout << "Robot position: " << robot.getPosition() << std::endl;
}
