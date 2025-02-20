#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include <cstdlib>  // For random value generation

class Sensor {
public:
    virtual ~Sensor() = default;  // Virtual destructor for polymorphism
    
    // Pure virtual function that should be implemented in derived classes
    virtual int readValue() const = 0;  
    
    // Method to get the sensor type as a string
    virtual std::string getType() const = 0; 
};

#endif  // SENSOR_H
