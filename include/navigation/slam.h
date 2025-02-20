#ifndef SLAM_H
#define SLAM_H

#include <utility> // Include for std::pair

class SLAM {
public:
    SLAM();
    void updatePosition(double x, double y);
    std::pair<double, double> getCurrentPosition(); // Return type should match implementation

private:
    double currentX;
    double currentY;
};

#endif // SLAM_H
