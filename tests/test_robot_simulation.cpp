#include <gtest/gtest.h>
#include "gps_sensor.h"           // Assuming include paths are set correctly
#include "imu_sensor.h"
#include "navigation.h"
#include "obstacle_avoidance.h"

class RobotSimulationTest : public ::testing::Test {
protected:
    GPSSensor gps;
    IMUSensor imu;
    Navigation nav;
    ObstacleAvoidance avoidance;

    void SetUp() override {
        gps.initialize(37.7749, -122.4194); // Example coordinates for San Francisco
        imu.initialize();
        avoidance.initialize();
    }
};

TEST_F(RobotSimulationTest, TestFullRobotOperation) {
    double targetX = 5.0, targetY = 3.0;

    if (avoidance.detectObstacles()) {
        EXPECT_TRUE(avoidance.avoidObstacles());
    }

    // Ensure the correct number of arguments are passed
    bool success = nav.navigateToDestination(targetX, targetY);
    EXPECT_TRUE(success);

    int currentX = 0, currentY = 0;
    nav.getPosition(currentX, currentY); // Assuming this modifies currentX and currentY
    EXPECT_NE(currentX, 0);
    EXPECT_NE(currentY, 0);
}
