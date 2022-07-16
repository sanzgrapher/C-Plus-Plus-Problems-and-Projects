#include <iostream>
using namespace std;
class Shape
{
protected:
    int area, l, b, h;

public:
    Shape()
    {
    }
};
class Triangle : public Shape
{

public:
    Triangle(int base, int height)
    {
        b = base;
        h = height;
        display();
    }
    int areaTriangle()
    {
        return (0.5 * b * h);
        
    }
    void display()
    {
        cout << "Area of Triangle : " << areaTriangle() << endl;
    }
};
class Rectangle : public Shape
{
public:
    Rectangle(int length, int breadth)
    {
        l = length;
        b = breadth;
        displayr();
    }
    int areaRectangle()
    {
        return (l * b);
    }
    void displayr()
    {
        cout << "Area of Rectangle : " << areaRectangle() << endl;
    }
};
int main()
{
    Triangle T(5,3);
    Rectangle R(2,5);
    return 0;
}