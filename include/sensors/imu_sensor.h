#ifndef IMU_SENSOR_H
#define IMU_SENSOR_H

class IMUSensor {
public:
    void initialize();    // Initialize the IMU sensor
    float getRotation();  // Return the IMU rotation
    void getAcceleration(double &ax, double &ay, double &az); // Method to get acceleration
};

#endif // IMU_SENSOR_H
