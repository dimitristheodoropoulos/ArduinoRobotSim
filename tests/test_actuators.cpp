#include "../include/motor.h"
#include "../include/led.h"
#include "../include/buzzer.h"
#include <gtest/gtest.h>

// Motor Test - Testing activation and speed setting
TEST(MotorTest, Activation) {
    Motor motor(100);

    // Activate motor and test behavior
    motor.activate();
    motor.setSpeed(100); // Set speed to 100

    // Verify the motor is activated
    EXPECT_EQ(motor.getType(), "Motor");

    // Ensure the speed was set correctly (assuming the method exists)
    EXPECT_EQ(motor.getSpeed(), 100);  // This would require a getSpeed method in the Motor class
}

// LED Test - Testing activation and internal state
TEST(LEDTest, Activation) {
    LED led;

    // Activate LED and check behavior
    led.activate();
    
    // Verify the LED type
    EXPECT_EQ(led.getType(), "LED");
    
    // Check if LED is on using the getter method
    EXPECT_TRUE(led.getIsOn());  // ✅ Correct
}



// Buzzer Test - Testing activation
TEST(BuzzerTest, Activation) {
    Buzzer buzzer;

    // Activate buzzer and check behavior
    buzzer.activate();

    // Verify the buzzer type
    EXPECT_EQ(buzzer.getType(), "Buzzer");

    // Check if buzzer is active (assuming an isActive() method exists in the Buzzer class)
    EXPECT_TRUE(buzzer.isActive());  // Assuming there's a method to check the buzzer's state
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
