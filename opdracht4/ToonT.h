// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_TOONT_H
#define OPDRACHT4_TOONT_H

#include "Observer.h"
class ToonT : public Observer
{
public:
    ToonT(Subject *n);
    virtual ~ToonT() = default;
    virtual void update();
};

#endif //OPDRACHT4_TOONT_H
