// Iwan van Oort 20148410
// Aron Hoogendam 21106029

#ifndef OPDRACHT1_BEWEEG_H
#define OPDRACHT1_BEWEEG_H


class Beweeg {
public:
    virtual ~Beweeg() {}
    virtual int x() = 0;
    virtual int y() = 0;
    virtual void move(int dx, int dy) = 0;
};


#endif //OPDRACHT1_BEWEEG_H
