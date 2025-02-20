#include "gps_sensor.h"

GPSSensor::GPSSensor() : latitude(0.0), longitude(0.0), connected(false) {}

void GPSSensor::initialize(double lat, double lon) {
    latitude = lat;
    longitude = lon;
    connected = true;  // assuming the GPS is connected on initialization
}

double GPSSensor::getLatitude() const {
    return latitude;
}

double GPSSensor::getLongitude() const {
    return longitude;
}

bool GPSSensor::isConnected() const {
    return connected;
}

void GPSSensor::setLocation(double lat, double lon) {
    latitude = lat;
    longitude = lon;
}
