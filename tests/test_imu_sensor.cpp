#include <gtest/gtest.h>
#include "imu_sensor.h"  // Include the header to access IMUSensor

class IMUTest : public ::testing::Test {
protected:
    IMUSensor imu;

    void SetUp() override {
        imu.initialize();  // Initialize the IMU sensor before each test
    }
};

// Test case for acceleration
TEST_F(IMUTest, TestGetAcceleration) {
    double ax, ay, az;
    imu.getAcceleration(ax, ay, az);
    
    EXPECT_NE(ax, 0.0);  // Ensure acceleration is non-zero
    EXPECT_NE(ay, 0.0);
    EXPECT_NE(az, 0.0);
}

// Test case for rotation
TEST_F(IMUTest, TestGetRotation) {
    float rotation = imu.getRotation();  // Call the method to get rotation
    
    EXPECT_NE(rotation, 0.0f);  // Ensure the rotation is not zero
}
