// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "Snelheid.h"

Snelheid::Snelheid() : waarde(0)
{}

void Snelheid::meet() {
    cin>>waarde;
    notify();
}

float Snelheid::geef() {
    return waarde;
}
