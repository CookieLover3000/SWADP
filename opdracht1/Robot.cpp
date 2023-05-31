// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "Robot.h"
#include "Beweeg.h"

Robot::Robot(Beweeg *p) : P(p)
{
}

void Robot::run()
{
    P->move(10,20);
}

void Robot::show()
{
    cout << "x: " << P->x() << endl << "y: " << P->y() << endl;
}
