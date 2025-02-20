#include "temperature_sensor.h"
#include "motion_sensor.h"
#include "ultrasonic_sensor.h"
#include "infrared_sensor.h"
#include "gas_sensor.h"

#include "motor.h"
#include "led.h"
#include "buzzer.h"

#include <vector>
#include <memory>
#include <iostream>

int main() {
    // Create sensors
    std::vector<std::unique_ptr<Sensor>> sensors;
    sensors.push_back(std::make_unique<TemperatureSensor>());
    sensors.push_back(std::make_unique<MotionSensor>());
    sensors.push_back(std::make_unique<UltrasonicSensor>());
    sensors.push_back(std::make_unique<InfraredSensor>());
    sensors.push_back(std::make_unique<GasSensor>());

    // Create actuators
    std::vector<std::unique_ptr<Actuator>> actuators;
    actuators.push_back(std::make_unique<Motor>());
    actuators.push_back(std::make_unique<LED>());
    actuators.push_back(std::make_unique<Buzzer>());

    // Read sensor values
    for (const auto& sensor : sensors) {
        int value = sensor->readValue();
        std::cout << sensor->getType() << " Sensor Value: " << value << std::endl;

        // Activate actuators based on sensor readings
        if (sensor->getType() == "Motion" && value == 1) {
            std::cout << "Motion detected! Activating motor and LED..." << std::endl;
            actuators[0]->activate();  // Motor
            actuators[1]->activate();  // LED
        }
        if (sensor->getType() == "Gas" && value > 500) {
            std::cout << "High gas level detected! Activating buzzer..." << std::endl;
            actuators[2]->activate();  // Buzzer
        }
    }

    return 0;
}
