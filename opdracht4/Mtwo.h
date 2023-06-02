// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_MTWO_H
#define OPDRACHT4_MTWO_H

#include "Motor.h"

class Mtwo : public Motor
{
public:
    virtual ~Mtwo() {}
    virtual Sensor *sensor() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
};


#endif //OPDRACHT4_MTWO_H
