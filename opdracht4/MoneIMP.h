//
// Created by iwanv on 31-5-2023.
//

#ifndef OPDRACHT4_MONEIMP_H
#define OPDRACHT4_MONEIMP_H

#include "Mone.h"
using namespace std;
class Sensor;
class MoneIMP : public Mone
{
public:
    MoneIMP(Sensor*);
    virtual Sensor* sensor();
    virtual void start();
    virtual void stop();
private:
    Sensor *S;
};


#endif //OPDRACHT4_MONEIMP_H
