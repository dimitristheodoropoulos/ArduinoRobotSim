#include "../include/robot.h"
#include <gtest/gtest.h>

// Unit test for the Robot class
TEST(RobotTest, MoveTest) {
    Robot robot;
    int initial_position = robot.getPosition();  // Get the initial position

    // Test if the robot can move forward by a specific distance
    int move_distance = 5;
    robot.moveForward(move_distance);

    // Verify if the position was updated correctly
    EXPECT_EQ(robot.getPosition(), initial_position + move_distance);  // Check if position increases correctly

    // Test for another move
    int additional_move = 3;
    robot.moveForward(additional_move);
    EXPECT_EQ(robot.getPosition(), initial_position + move_distance + additional_move);  // Cumulative movement check

    // Test moving by zero distance (should not change position)
    robot.moveForward(0);
    EXPECT_EQ(robot.getPosition(), initial_position + move_distance + additional_move);  // Position should stay the same

    // Test negative movement (depending on behavior you expect)
    int negative_move = -2;
    robot.moveForward(negative_move);
    EXPECT_EQ(robot.getPosition(), initial_position + move_distance + additional_move + negative_move);  // Position should decrease
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
