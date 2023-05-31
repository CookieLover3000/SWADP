//
// Created by iwanv on 31-5-2023.
//

#include "SensorIMP.h"
#include <iostream>

SensorIMP::SensorIMP(Motor *m) : M(m)
{}

void SensorIMP::read()
{
    cout << "Temperatuur: " <<temperatuur() << endl;
}

int SensorIMP::temperatuur()
{
    return 80;
}