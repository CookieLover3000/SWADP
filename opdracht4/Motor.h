// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_MOTOR_H
#define OPDRACHT4_MOTOR_H

class Sensor;
class Motor
{
public:
    virtual ~Motor() = default;
    virtual Sensor* sensor() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
};


#endif //OPDRACHT4_MOTOR_H
