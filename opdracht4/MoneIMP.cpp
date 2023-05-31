//
// Created by iwanv on 31-5-2023.
//

#include "MoneIMP.h"
#include <iostream>

MoneIMP::MoneIMP(Sensor* s):S(s){

}

Sensor* MoneIMP::sensor() {
    return S;
}

void MoneIMP::start() {
    cout << "Moter 1 aan";
}

void MoneIMP::stop() {
    cout << "Moter 1 uit";
}