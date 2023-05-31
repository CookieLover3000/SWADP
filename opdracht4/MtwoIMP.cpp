//
// Created by iwanv on 31-5-2023.
//

#include "MtwoIMP.h"
#include <iostream>

MtwoIMP::MtwoIMP(Sensor* s):S(s){

}

Sensor* MtwoIMP::sensor() {
    return S;
}

void MtwoIMP::start() {
    cout << "Motor 2 aan";
}

void MtwoIMP::stop() {
    cout << "Motor 2 uit";
}