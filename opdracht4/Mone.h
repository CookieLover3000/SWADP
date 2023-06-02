// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_MONE_H
#define OPDRACHT4_MONE_H

#include "Motor.h"

class Mone : public Motor
{
public:
    virtual ~Mone() {}
    virtual Sensor *sensor() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
};


#endif //OPDRACHT4_MONE_H
