//
// Created by iwanv on 26-5-2023.
//

#ifndef OPDRACHT4_MACHINE_H
#define OPDRACHT4_MACHINE_H

#include "Motor.h"

class Machine
{
public:
    virtual ~Machine() = default;
    virtual Motor motor1() = 0;
    virtual Motor motor2() = 0;
    virtual void run() = 0;
    virtual void halt() = 0;
};


#endif //OPDRACHT4_MACHINE_H
