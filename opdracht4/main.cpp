// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "MachineIMP.h"
#include "MoneIMP.h"
#include "MtwoIMP.h"
#include "SensorIMP.h"
#include "ToonT.h"
int main()
{
    Sensor *t1= new SensorIMP;
    t1->read(10);
    Sensor *t2 = new SensorIMP;
    t2->read(150);
    Mone* Mone = new MoneIMP(t1);
    Mtwo* Mtwo =  new MtwoIMP(t2);
    Machine *M = new MachineIMP(Mone,Mtwo);
    M->run();
    M->halt();
}
