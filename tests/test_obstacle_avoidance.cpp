#include <gtest/gtest.h>
#include "obstacle_avoidance.h"  // Assuming obstacle_avoidance.h defines an ObstacleAvoidance class

class ObstacleAvoidanceTest : public ::testing::Test {
protected:
    ObstacleAvoidance avoidance;

    void SetUp() override {
        avoidance.initialize();
    }
};

TEST_F(ObstacleAvoidanceTest, TestObstacleDetection) {
    bool obstacleDetected = avoidance.detectObstacles();
    
    EXPECT_TRUE(obstacleDetected);  // Assuming this method returns true if an obstacle is detected
}

TEST_F(ObstacleAvoidanceTest, TestAvoidObstacle) {
    bool obstacleAvoided = avoidance.avoidObstacles();
    
    EXPECT_TRUE(obstacleAvoided);  // Assuming avoidObstacles() returns true on successful avoidance
}
