#ifndef POINT_H
#define POINT_H
#include <string>
using namespace std;
class  Point{
    private:
    double x;
    double y;
    public:
    Point(double x, double y);
    Point(const Point &other);
    bool equals(Point &other);
    double const getX();
    double const getY();
    void flip();
    void move(double x, double y);
    string toString();

};
#endif
