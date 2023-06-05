// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "SensorIMP.h"
#include "MoneIMP.h"
#include "MtwoIMP.h"
#include "MachineIMP.h"
#include "ToonT.h"

int main()
{
    SensorIMP *t1= new SensorIMP;
    SensorIMP *t2 = new SensorIMP;
    ToonT a(t1);
    ToonT b(t2);
    Mone* Mone = new MoneIMP(t1);
    Mtwo* Mtwo =  new MtwoIMP(t2);
    Machine *M = new MachineIMP(Mone,Mtwo);

    M->run();
    M->halt();

    // ook maar even zorgen dat de memory leaks weg zijn.
    delete t1;
    delete t2;
    delete Mone;
    delete Mtwo;
    delete M;
}
