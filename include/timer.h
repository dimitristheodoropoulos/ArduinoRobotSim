// timer.h
#ifndef TIMER_H
#define TIMER_H

class Timer {
public:
    Timer();  // Constructor to initialize the timer
    void start();  // Start the timer
    void stop();  // Stop the timer
    void delayMs(int milliseconds);  // Simulate a delay in milliseconds
    double getElapsedTime() const;  // Get the elapsed time in seconds
private:
    double startTime;  // Time when the timer was started
    bool running;  // Whether the timer is running
};

#endif
