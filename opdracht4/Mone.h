//
// Created by iwanv on 26-5-2023.
//

#ifndef OPDRACHT4_MONE_H
#define OPDRACHT4_MONE_H

#include "Motor.h"

class Mone : public Motor
{
    virtual void start() = 0;
    virtual void stop() = 0;
};


#endif //OPDRACHT4_MONE_H
