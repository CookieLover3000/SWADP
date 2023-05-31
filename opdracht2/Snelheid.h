// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT2_SNELHEID_H
#define OPDRACHT2_SNELHEID_H

#include "Observer.h"
#include <iostream>

using namespace std;

class Snelheid : public Subject{
public:
    Snelheid();
    virtual void meet();
    virtual float geef();
private:
    float waarde;

};


#endif //OPDRACHT2_SNELHEID_H
