//
// Created by iwanv on 31-5-2023.
//

#ifndef OPDRACHT4_MTWOIMP_H
#define OPDRACHT4_MTWOIMP_H

#include "Mtwo.h"
class Sensor;
class MoneIMP : public Mtwo
{
public:
    MoneIMP(Sensor*);
    virtual Sensor sensor();
    virtual void start();
    virtual void stop();
private:
    Sensor *S;
};


#endif //OPDRACHT4_MTWOIMP_H
