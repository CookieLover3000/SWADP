// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "Snelheid.h"
#include "DigitaleMeter.h"
#include "AnalogeMeter.h"
#include "Auto.h"

int main ()
{
    Snelheid S;
    DigitaleMeter DM(&S);
    AnalogeMeter AM(&S);
    Auto A(&S);
    A.meetSnelheid();
    return 0;
}