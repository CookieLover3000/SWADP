// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT2_ANALOGEMETER_H
#define OPDRACHT2_ANALOGEMETER_H

#include "Observer.h"

class AnalogeMeter : public Observer
{
public:
    AnalogeMeter(Subject* s);
    virtual void update();
private:
};


#endif //OPDRACHT2_ANALOGEMETER_H
