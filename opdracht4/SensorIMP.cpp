// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "SensorIMP.h"
SensorIMP::SensorIMP()
{
    temp = 0;
}

void SensorIMP::read(int a)
{
    temp = a;
    notify();
}

int SensorIMP::temperatuur()
{
    return temp;
}