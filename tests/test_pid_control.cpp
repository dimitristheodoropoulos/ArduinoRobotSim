#include <gtest/gtest.h>
#include "../include/actuators/control/pid_control.h"  // Correct path to the header file

TEST(PIDControllerTest, BasicFunctionality) {
    PIDController pid;
    pid.setParameters(1.0, 0.1, 0.05);  // Example parameters

    double output = pid.compute(10.0, 5.0);  // Example setpoint and measured value

    double expected_value = 5.0; // Replace this with the actual expected output
    double tolerance = 0.01; // Define a tolerance for floating-point comparison

    EXPECT_NEAR(output, expected_value, tolerance);
}
