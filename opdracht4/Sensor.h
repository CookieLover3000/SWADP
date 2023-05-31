// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_SENSOR_H
#define OPDRACHT4_SENSOR_H

#include "Observer.h"

class Sensor : public Subject
{
public:
    virtual void read(int) = 0;
    virtual int temperatuur() = 0;
};


#endif //OPDRACHT4_SENSOR_H
