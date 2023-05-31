// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_MACHINEIMP_H
#define OPDRACHT4_MACHINEIMP_H

#include "Machine.h"

class Motor;
class MachineIMP : public Machine
{
public:
    MachineIMP(Motor*, Motor*);
    virtual Motor* motor1();
    virtual Motor* motor2();
    virtual void run();
    virtual void halt();
private:
    Motor *mone;
    Motor *mtwo;
    int T1;
    int T2;
};


#endif //OPDRACHT4_MACHINEIMP_H
