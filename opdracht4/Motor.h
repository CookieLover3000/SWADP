//
// Created by iwanv on 26-5-2023.
//

#ifndef OPDRACHT4_MOTOR_H
#define OPDRACHT4_MOTOR_H

class Sensor;
class Motor
{
public:
    virtual ~Motor() = default;
    virtual Sensor sensor() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
};


#endif //OPDRACHT4_MOTOR_H
