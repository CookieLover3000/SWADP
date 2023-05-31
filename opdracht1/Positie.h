// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT1_POSITIE_H
#define OPDRACHT1_POSITIE_H

#include "beweeg.h"

class Positie : public Beweeg{
public:
    Positie(int x, int y);
    virtual int x();
    virtual int y();
    virtual void move(int dx, int dy);
private:
    int X;
    int Y;
};


#endif //OPDRACHT1_POSITIE_H
