// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_SENSORIMP_H
#define OPDRACHT4_SENSORIMP_H

#include "Sensor.h"
#include "Observer.h"

class SensorIMP : public Sensor, public Observer
{
public:
    SensorIMP();
    void read(int a) override;
    int temperatuur() override;
private:
    int temp; // als in temperatuur
};


#endif //OPDRACHT4_SENSORIMP_H
