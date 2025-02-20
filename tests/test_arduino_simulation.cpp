#include "../include/arduino_simulation.h"
#include <gtest/gtest.h>

// Unit test for the Simulation class
TEST(SimulationTest, RunSimulationTest) {
    ArduinoSimulation sim;  // Create a Simulation object
    int result = sim.run();  // Assuming run() returns an int
    EXPECT_EQ(result, 42);   // Adjust expected value based on actual implementation
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
