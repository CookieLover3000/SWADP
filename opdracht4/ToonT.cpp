// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "ToonT.h"
#include "Sensor.h"
#include <iostream>
ToonT::ToonT(Subject *n) : Observer(n)
{
}
void ToonT::update()
{
    std::cout << "Temperatuur: " << dynamic_cast<Sensor*>(getSubject())->temperatuur() << std::endl;
}