// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT4_SENSOR_H
#define OPDRACHT4_SENSOR_H

class Sensor
{
public:
    virtual ~Sensor(){}
    virtual void read(int a) = 0;
    virtual int temperatuur() = 0;
};


#endif //OPDRACHT4_SENSOR_H
