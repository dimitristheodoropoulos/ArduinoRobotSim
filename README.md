# Robot Simulation Project

This project simulates the behavior of a robot, including navigation, obstacle avoidance, sensor integration, and control systems. It is designed to be modular, with separate components for actuators, sensors, navigation, and control.

## Table of Contents
1. [Project Overview](#project-overview)
2. [Folder Structure](#folder-structure)
3. [Dependencies](#dependencies)
4. [Setup Instructions](#setup-instructions)
5. [Building the Project](#building-the-project)
6. [Running Tests](#running-tests)
7. [Usage](#usage)
8. [Contributing](#contributing)
9. [License](#license)

---

## Project Overview

The Robot Simulation Project is a C++-based simulation of a robot's behavior. It includes:
- **Navigation**: Path planning, obstacle avoidance, and SLAM (Simultaneous Localization and Mapping).
- **Sensors**: Integration of GPS, IMU, gyroscope, and other sensors.
- **Actuators**: Control of motors, servos, and other actuators.
- **Control Systems**: PID controllers and behavior trees for decision-making.

---

## Folder Structure
.
|-- Dockerfile
|-- README.md
|-- bin
| -- arduino-cli |-- config | -- arduino_config.json
|-- doc
| |-- README.md
| -- user_manual.md |-- include | |-- actuators | | |-- actuator.h | | |-- control | | | |-- behavior_tree.h | | | -- pid_control.h
| | |-- motor_control.h
| | -- servo_control.h | |-- arduino_simulation.h | |-- buzzer.h | |-- led.h | |-- motor.h | |-- navigation | | |-- navigation.h | | |-- obstacle_avoidance.h | | |-- path_planning.h | | -- slam.h
| |-- robot.h
| |-- sensors
| | |-- accelerometer_sensor.h
| | |-- gas_sensor.h
| | |-- gps_sensor.h
| | |-- gyroscope_sensor.h
| | |-- imu_sensor.h
| | |-- infrared_sensor.h
| | |-- motion_sensor.h
| | |-- sensor.h
| | |-- temperature_sensor.h
| | -- ultrasonic_sensor.h | |-- timer.h | -- utils.h
|-- requirements.txt
|-- src
| |-- actuators
| | |-- buzzer.cpp
| | |-- led.cpp
| | |-- motor_control.cpp
| | -- servo_control.cpp | |-- control | | |-- behavior_tree.cpp | | -- pid_control.cpp
| |-- navigation
| | |-- navigation.cpp
| | |-- obstacle_avoidance.cpp
| | |-- path_planning.cpp
| | -- slam.cpp | |-- robot | | -- robot.cpp
| |-- sensors
| | |-- accelerometer_sensor.cpp
| | |-- gps_sensor.cpp
| | |-- gyroscope_sensor.cpp
| | |-- imu_sensor.cpp
| | |-- main.cpp
| | |-- sensors.cpp
| | -- ultrasonic_sensor.cpp | |-- simulation | | |-- arduino_simulation.cpp | | |-- dynamic_environment.cpp | | -- robot_simulation.cpp
| |-- timer.cpp
| -- utils | |-- environment.h | |-- robot_utils.h | -- utils.cpp
-- tests |-- test_actuators.cpp |-- test_arduino_simulation.cpp |-- test_behavior_tree.cpp |-- test_gps_sensor.cpp |-- test_imu_sensor.cpp |-- test_navigation.cpp |-- test_obstacle_avoidance.cpp |-- test_pid_control.cpp |-- test_robot.cpp |-- test_robot_simulation.cpp -- test_sensors.cpp


---

## Dependencies

- **C++ Compiler**: GCC or Clang (C++17 or later).
- **Build System**: CMake (version 3.10 or later).
- **Testing Framework**: Google Test (included in the project).
- **Arduino CLI**: For simulating Arduino-based components (optional).

---

## Setup Instructions

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/robot-simulation.git
   cd robot-simulation

   Install Dependencies:

    Install CMake:
    sudo apt-get install cmake

    Install Google Test (if not included):
    sudo apt-get install libgtest-dev

    Set Up Arduino CLI (Optional):

    Download and install the Arduino CLI:
    curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh

    Configure the Arduino CLI:
    ./bin/arduino-cli config init

    Building the Project

    Create a Build Directory:
    mkdir build
    cd build


    Run CMake:
    cmake ..

    Build the Project:
    make

    Running Tests

    To run the unit tests:
    cd build
    ctest

    Usage

    Run the Main Simulation:
    ./src/simulation/robot_simulation
    Run Specific Components:

    Navigate to the bin directory and run the desired executable.
    Contributing

Contributions are welcome! Please follow these steps:

    Fork the repository.

    Create a new branch for your feature or bugfix.

    Commit your changes with clear and descriptive messages.

    Submit a pull request.
