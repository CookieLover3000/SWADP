// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT1_ROBOT_H
#define OPDRACHT1_ROBOT_H

#include <iostream>
using namespace std;

class Beweeg;
class Robot{
public:
    Robot(Beweeg *p);
    virtual void run();
    virtual void show();
private:
    Beweeg *P;
};
#endif //OPDRACHT1_ROBOT_H
