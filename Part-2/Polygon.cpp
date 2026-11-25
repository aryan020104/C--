#include <iostream>

using namespace std;

class Polygon
{
public:
    double length;
    double width;

    Polygon(double l, double w) : length(l), width(w)
    {
    }

    virtual double area() = 0;
    virtual ~Polygon() = default;
};

class Rectangle : public Polygon
{
public:
    Rectangle(double l, double w) : Polygon(l, w)
    {
    }

    double area() override
    {
        return length * width;
    }
};

class Triangle : public Polygon
{
public:
    Triangle(double l, double w) : Polygon(l, w)
    {
    }

    double area() override
    {
        return (length * width) / 2;
    }
};

int main()
{
    Polygon *polygon;

    polygon = new Rectangle(10, 5);
    cout << "Area of Rectangle: " << polygon->area() << endl;

    polygon = new Triangle(10, 5);
    cout << "Area of Triangle: " << polygon->area() << endl;
}