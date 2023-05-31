// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "AnalogeMeter.h"
#include "Snelheid.h" // Weet niet zeker of dit mag, vrijdag dubbel checken.

AnalogeMeter::AnalogeMeter(Subject *s) : Observer(s)
{}

void AnalogeMeter::update()
{
    float waarde = dynamic_cast<Snelheid*>(getSubject())->geef();
    cout << "Analoog: " << waarde << endl;
}