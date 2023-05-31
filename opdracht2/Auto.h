// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT2_AUTO_H
#define OPDRACHT2_AUTO_H

class Snelheid;
class Auto
{
public:
    Auto(Snelheid *s);
    virtual void meetSnelheid();
private:
    Snelheid *S;
};


#endif //OPDRACHT2_AUTO_H
