// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "MachineIMP.h"
#include "Motor.h"
#include "Sensor.h"
#include <iostream>

MachineIMP::MachineIMP(Motor *a, Motor *b) : mone(a), mtwo(b), T1(0), T2(0)
{
}

Motor* MachineIMP::motor1()
{
    return mone;
}

Motor* MachineIMP::motor2()
{
    return mtwo;
}

void MachineIMP::run()
{
    motor1()->start();
    T1 = motor1()->sensor()->temperatuur();
    cout << "Temperatuur Motor 1: " << T1 << endl;

    motor2()->start();
    T2 = motor2()->sensor()->temperatuur();
    cout << "Temperatuur Motor 2: " << T2 << endl;
}

void MachineIMP::halt()
{
    motor1()->stop();
    motor2()->stop();
}