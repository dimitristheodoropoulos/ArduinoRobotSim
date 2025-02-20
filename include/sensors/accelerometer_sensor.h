#ifndef ACCELEROMETER_SENSOR_H
#define ACCELEROMETER_SENSOR_H

class AccelerometerSensor {
public:
    AccelerometerSensor(int pin);
    void readData();  // Read accelerometer data

private:
    int _pin;
};

#endif
