// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "Positie.h"

Positie::Positie(int x, int y) : X(x), Y(y)
{
}

int Positie::x()
{
    return X;
}

int Positie::y()
{
    return Y;
}

void Positie::move(int dx, int dy)
{
    X = X + dx;
    Y = Y + dy;
}