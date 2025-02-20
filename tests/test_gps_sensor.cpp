#include <gtest/gtest.h>
#include "gps_sensor.h"  // Assuming gps_sensor.h defines the GPSSensor class

// Test class that initializes with latitude and longitude
class GPSSensorTest : public ::testing::Test {
protected:
    GPSSensor gps;  // GPS sensor object to be tested

    void SetUp() override {
        // Default initialization to simulate GPS behavior
        gps.initialize(40.748817, -73.985428);  // Example coordinates (lat, lon)
    }
};

// Test case to check the latitude and longitude getter methods
TEST_F(GPSSensorTest, TestLocation) {
    double latitude = 40.748817;
    double longitude = -73.985428;
    gps.initialize(latitude, longitude);  // Initialize with test data

    EXPECT_EQ(gps.getLatitude(), latitude);
    EXPECT_EQ(gps.getLongitude(), longitude);
}

// Test case for checking GPS connection
TEST_F(GPSSensorTest, TestConnection) {
    EXPECT_TRUE(gps.isConnected());  // Assuming GPSSensor has an `isConnected()` method
}

// Example of a GPS sensor test for setting and getting a location
TEST_F(GPSSensorTest, TestSetLocation) {
    double newLat = 40.748817;
    double newLon = -73.985428;
    gps.setLocation(newLat, newLon);  // Set a new location

    EXPECT_EQ(gps.getLatitude(), newLat);
    EXPECT_EQ(gps.getLongitude(), newLon);
}

// Example for testing some GPS-related functionality (e.g., retrieving GPS data)
TEST_F(GPSSensorTest, TestGPSFunctionality) {
    double lat = gps.getLatitude();
    double lon = gps.getLongitude();

    EXPECT_NE(lat, 0.0);  // Ensure that the latitude is not zero
    EXPECT_NE(lon, 0.0);  // Ensure that the longitude is not zero
}
