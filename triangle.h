#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"
using namespace std;

class Triangle {
private:
    Point a;
    Point b;
    Point c;

public:
    Triangle(Point a, Point b, Point c);

    Triangle(const Triangle &other);

    bool equals(Triangle &other);

    void flip();

    void move(double x, double y);

    string toString();

    double getSurface();

};


#endif