#include "slam.h"
#include <utility> // Include for std::pair
SLAM::SLAM() : currentX(0.0), currentY(0.0) {} // Constructor implementation

void SLAM::updatePosition(double x, double y) {
    currentX = x;
    currentY = y;
}

std::pair<double, double> SLAM::getCurrentPosition() {
    return {currentX, currentY};
}
