// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_SENSORIMP_H
#define OPDRACHT4_SENSORIMP_H

#include "Sensor.h"

class SensorIMP : public Sensor, public Subject
{
public:
    SensorIMP();
    virtual void read(int a);
    virtual int temperatuur();
private:
    int temp; // als in temperatuur
};


#endif //OPDRACHT4_SENSORIMP_H
