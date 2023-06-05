// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "ToonT.h"
#include "SensorIMP.h"
#include <iostream>

ToonT::ToonT(Subject *n) : Observer(n)
{
}
void ToonT::update()
{
    SensorIMP* a = dynamic_cast<SensorIMP*>(getSubject());
    if(a != nullptr) //
        std::cout << "Temperatuur: " << a->temperatuur() << std::endl;
}