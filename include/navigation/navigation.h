#ifndef NAVIGATION_H
#define NAVIGATION_H

#include "path_planning.h"
#include "slam.h"  // Include the SLAM header
#include <vector>
#include <utility>

class Navigation {
public:
    Navigation(); // Constructor declaration
    void initialize(); // Initialization method
    bool navigateToDestination(int x, int y); // Navigation method
    void getPosition(int &x, int &y) const; // Get position method

private:
    int currentX, currentY; // Current position coordinates
    PathPlanning pathPlanner; // Path planner instance
    SLAM slamSystem; // SLAM system instance
};

#endif // NAVIGATION_H
