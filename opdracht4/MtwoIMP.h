// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_MTWOIMP_H
#define OPDRACHT4_MTWOIMP_H

#include "Mtwo.h"
using namespace std;
class Sensor;
class MtwoIMP : public Mtwo
{
public:
    MtwoIMP(Sensor*);
    virtual Sensor* sensor();
    virtual void start();
    virtual void stop();
private:
    Sensor *S;
};


#endif //OPDRACHT4_MTWOIMP_H
