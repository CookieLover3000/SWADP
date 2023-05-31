//
// Created by iwanv on 31-5-2023.
//

#ifndef OPDRACHT4_SENSORIMP_H
#define OPDRACHT4_SENSORIMP_H

#include "Sensor.h"

class Motor;
class SensorIMP : public Sensor
{
public:
    SensorIMP(Motor*);
    void read();
    int temperatuur();
private:
    Motor* M;
};


#endif //OPDRACHT4_SENSORIMP_H
