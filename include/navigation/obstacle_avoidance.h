// File: include/navigation/obstacle_avoidance.h
#ifndef OBSTACLE_AVOIDANCE_H
#define OBSTACLE_AVOIDANCE_H

class ObstacleAvoidance {
public:
    ObstacleAvoidance();  // Constructor
    ~ObstacleAvoidance(); // Destructor

    void initialize();            // Initialize hardware/parameters
    bool detectObstacles();       // Detect obstacles
    bool avoidObstacles();        // Avoid obstacles if detected
};

#endif // OBSTACLE_AVOIDANCE_H
