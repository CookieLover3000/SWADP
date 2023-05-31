// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "Auto.h"
#include "Snelheid.h"

Auto::Auto(Snelheid *s) : S(s)
{
}

void Auto::meetSnelheid()
{
    S->meet();
}