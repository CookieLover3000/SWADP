// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_MONEIMP_H
#define OPDRACHT4_MONEIMP_H

#include "Mone.h"

class Sensor;
class MoneIMP : public Mone
{
public:
    explicit MoneIMP(Sensor*);
    virtual Sensor* sensor();
    virtual void start();
    virtual void stop();
private:
    Sensor *S;
};


#endif //OPDRACHT4_MONEIMP_H
