#ifndef GPS_SENSOR_H
#define GPS_SENSOR_H

class GPSSensor {
public:
    GPSSensor();  // Default constructor

    // Method to initialize the GPS sensor with latitude and longitude
    void initialize(double lat, double lon);

    // Getter methods for latitude and longitude
    double getLatitude() const;
    double getLongitude() const;

    // Method to check if the GPS sensor is connected
    bool isConnected() const;

    // Method to set a new location
    void setLocation(double lat, double lon);

private:
    double latitude;
    double longitude;
    bool connected;  // Flag indicating if the GPS sensor is connected
};

#endif  // GPS_SENSOR_H
