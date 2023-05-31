
// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "Robot.h"
#include "Positie.h"

int main ()
{
Positie P (5, 10);
Robot R (&P);
R.run ();
R.show ();
return 0;
}
