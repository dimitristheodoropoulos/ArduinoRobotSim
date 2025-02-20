#include "timer.h"
#include <chrono>
#include <thread>

Timer::Timer() : startTime(0.0) {}

void Timer::start() {
    // Use the chrono library to record the current time
    startTime = std::chrono::duration<double>(std::chrono::steady_clock::now().time_since_epoch()).count();
}

double Timer::getElapsedTime() const {
    // Calculate elapsed time by subtracting start time from the current time
    double currentTime = std::chrono::duration<double>(std::chrono::steady_clock::now().time_since_epoch()).count();
    return currentTime - startTime;
}

void Timer::delayMs(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}
