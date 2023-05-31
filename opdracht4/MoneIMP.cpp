// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#include "MoneIMP.h"
#include "Sensor.h"
#include <iostream>

MoneIMP::MoneIMP(Sensor* s):S(s){

}

Sensor* MoneIMP::sensor() {
    return S;
}

void MoneIMP::start() {
    cout << "Motor 1 aan" << endl;
}

void MoneIMP::stop() {
    cout << "Motor 1 uit" << endl;
}