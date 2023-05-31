//
// Created by iwanv on 31-5-2023.
//

#include "MachineIMP.h"
#include "Motor.h"

MachineIMP::MachineIMP(Motor *a, Motor *b, int c, int d) : mone(a), mtwo(b), T1(c), T2(d)
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
    mone->start();
    T1 = mone->sensor()->temperatuur();

    mtwo->start();
    T2 = mtwo->sensor()->temperatuur();
}

void MachineIMP::halt()
{
    mone->stop();
    mtwo->stop();
}