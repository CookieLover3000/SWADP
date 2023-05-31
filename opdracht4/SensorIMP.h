// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_SENSORIMP_H
#define OPDRACHT4_SENSORIMP_H

#include "Sensor.h"

using namespace std;

class SensorIMP : public Sensor
{
public:
    SensorIMP();
    void read(int a) override;
    int temperatuur() override;
private:
    int temp;
};


#endif //OPDRACHT4_SENSORIMP_H
