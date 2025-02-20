#ifndef PID_CONTROL_H
#define PID_CONTROL_H

class PIDController {
public:
    PIDController();
    void setParameters(double p, double i, double d);
    double compute(double setpoint, double measured_value);

private:
    double Kp;
    double Ki;
    double Kd;
};

#endif // PID_CONTROL_H
