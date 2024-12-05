#ifndef LINE_H
#define LINE_H
class Line{
    private:
    Point a;
    Point b;
    public:
    Line(Point a, Point b);
    Line(Point &other);

};
#endif