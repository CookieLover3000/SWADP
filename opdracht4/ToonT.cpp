// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "ToonT.h"
#include "Sensor.h"

ToonT::ToonT(Subject &n) : Observer(&n)
{
}
void ToonT::update()
{
    dynamic_cast<Sensor*>(getSubject());
}