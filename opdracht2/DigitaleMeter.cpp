// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "DigitaleMeter.h"
#include "Snelheid.h"

DigitaleMeter::DigitaleMeter(Subject *s) : Observer(s)
{
}

void DigitaleMeter::update()
{
    float waarde = dynamic_cast<Snelheid*>(getSubject())->geef();
    cout << "Digitaal: " << waarde << endl;
}