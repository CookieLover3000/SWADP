//
// Created by iwanv on 31-5-2023.
//

#ifndef OPDRACHT4_MACHINEIMP_H
#define OPDRACHT4_MACHINEIMP_H

#include "Machine.h"

class Motor;
class MachineIMP : public Machine
{
public:
    MachineIMP(Motor*, Motor*, int, int);
    virtual Motor motor1();
    virtual Motor motor2();
    virtual void run();
    virtual void halt();
private:
    int T1;
    int T2;
    Motor *mone;
    Motor *mtwo;
};


#endif //OPDRACHT4_MACHINEIMP_H
