#include "../include/temperature_sensor.h"
#include "../include/motion_sensor.h"
#include "../include/ultrasonic_sensor.h"
#include "../include/infrared_sensor.h"
#include "../include/gas_sensor.h"
#include <gtest/gtest.h>

TEST(TemperatureSensorTest, ReadValueTest) {
    TemperatureSensor sensor;
    EXPECT_EQ(sensor.readValue(), 25);
}

TEST(MotionSensorTest, ReadValueTest) {
    MotionSensor sensor;
    int value = sensor.readValue();
    EXPECT_TRUE(value == 0 || value == 1);
}

TEST(UltrasonicSensorTest, ReadValueTest) {
    UltrasonicSensor sensor;
    int value = sensor.readValue();
    EXPECT_GE(value, 0);
    EXPECT_LE(value, 400);
}

TEST(InfraredSensorTest, ReadValueTest) {
    InfraredSensor sensor;
    int value = sensor.readValue();
    EXPECT_TRUE(value == 0 || value == 1);
}

TEST(GasSensorTest, ReadValueTest) {
    GasSensor sensor;
    int value = sensor.readValue();
    EXPECT_GE(value, 0);
    EXPECT_LE(value, 1000);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}