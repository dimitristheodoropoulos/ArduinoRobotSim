#include "path_planning.h"
#include "slam.h"
#include <iostream>
#include <vector>

class Navigation {
public:
    Navigation();
    void initialize();
    bool navigateToDestination(int x, int y);
    void getPosition(int &x, int &y) const;

private:
    double currentX;
    double currentY;
    SLAM slamSystem; // Ensure this is instantiated
    PathPlanning pathPlanner; // Ensure this is instantiated
};

Navigation::Navigation() : currentX(0), currentY(0) {}

void Navigation::initialize() {
    slamSystem.updatePosition(currentX, currentY); // Initialize SLAM with current position
}

bool Navigation::navigateToDestination(int x, int y) {
    std::cout << "Navigating to (" << x << ", " << y << ")..." << std::endl;

    // Generate path using PathPlanning
    std::vector<std::pair<int, int>> path = pathPlanner.calculatePath(currentX, currentY, x, y);

    std::cout << "Path calculated: ";
    for (const auto& p : path) {
        std::cout << "(" << p.first << "," << p.second << ") ";
    }
    std::cout << std::endl;

    // Update the current position if a path is found
    if (!path.empty()) {
        currentX = path.back().first;
        currentY = path.back().second;
        slamSystem.updatePosition(currentX, currentY); // Update SLAM with new position
        return true; // Navigation successful
    }

    return false; // Return false if path is empty
}

void Navigation::getPosition(int &x, int &y) const {
    x = currentX;
    y = currentY;
}
