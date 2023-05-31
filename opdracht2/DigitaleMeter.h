// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT2_DIGITALEMETER_H
#define OPDRACHT2_DIGITALEMETER_H

#include "Observer.h"

class DigitaleMeter : public Observer
{
public:
    DigitaleMeter(Subject *s);
    virtual void update();
};


#endif //OPDRACHT2_DIGITALEMETER_H
