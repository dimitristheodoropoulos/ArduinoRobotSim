#include <gtest/gtest.h>
#include "navigation.h"

class NavigationTest : public ::testing::Test {
protected:
    Navigation nav;

    void SetUp() override {
        nav.initialize();
    }
};

TEST_F(NavigationTest, TestNavigateToTarget) {
    double targetX = 10.0, targetY = 5.0;
    bool success = nav.navigateToDestination(targetX, targetY);
    EXPECT_TRUE(success);
}

TEST_F(NavigationTest, TestCurrentPosition) {
    int currentX, currentY;
    nav.getPosition(currentX, currentY);
    EXPECT_NE(currentX, 0);
    EXPECT_NE(currentY, 0);
}