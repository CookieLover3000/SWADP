// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "MtwoIMP.h"
#include "Sensor.h"
#include <iostream>

MtwoIMP::MtwoIMP(Sensor* s):S(s){

}

Sensor* MtwoIMP::sensor() {
    return S;
}

void MtwoIMP::start() {
    cout << "Motor 2 aan" << endl;
}

void MtwoIMP::stop() {
    cout << "Motor 2 uit" << endl;
}