#include <bits/stdc++.h>
using namespace std;
class polygon
{
public:
    // for triangle
    double base, height;
    polygon(double base, double height)
    {
        this->base = base;
        this->height = height;
    }
    // for square and circle
    double length;
    polygon(double length)
    {
        this->length = length;
    }
    // for trapizium
    double a, b, h;
    polygon(double a, double b, double h)
    {
        this->a = a;
        this->b = b;
        this->h = h;
    }

    virtual double area()
    {
        return 0;
    }
};
class triangle : public polygon
{
public:
    triangle(double base, double height)
        : polygon(base, height)
    {
    }
    double area()
    {
        return 0.5 * base * height;
    }
};
class square : public polygon
{
public:
    square(double length)
        : polygon(length)
    {
    }
    double area()
    {
        return length * length;
    }
};
class trapizium : public polygon
{
public:
    trapizium(double a, double b, double h)
        : polygon(a, b, h)
    {
    }
    double area()
    {
        return 0.5 * (a + b) * h;
    }
};
class circle : public polygon
{
public:
    circle(double length)
        : polygon(length)
    {
    }
    double area()
    {
        return 3.1416 * length * length;
    }
};
int main()
{
    polygon *p;

    triangle t(10.5, 21.22);
    p = &t;
    cout << "Triangle Area: " << p->area() << endl;

    square s(11);
    p = &s;
    cout << "Square Area: " << p->area() << endl;

    trapizium tra(11, 23.24, 34);
    p = &tra;
    cout << "Trapizium Area: " << p->area() << endl;

    circle c(10);
    p = &c;
    cout << "Circle Area: " << p->area() << endl;
}