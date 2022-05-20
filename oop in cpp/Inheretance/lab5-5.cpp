#include <iostream>
using namespace std;
class shape
{
public:
    int len, br;
    float ht, base;
   
    void getTriangleData()
    {
        cout << "Enter the height " << endl;
        cin >> ht;
        cout << "Enter the base" << endl;
        cin >> base;
    }
    void getRectangleData()
    {
        cout << "Enter the length " << endl;
        cin >> len;
        cout << "Enter the breadth " << endl;
        cin >> br;
    }
};
class triangle : public shape
{
public:
    void triangleArea()
    {
        cout << "The area of the triangle is :" << 0.5 * base * ht << endl;
    }
};
class rectangle : public shape
{
public:
    void rectangleArea()
    {
        cout << "The are of the rectangle is :" << len * br << endl;
    }
};
int main()
{
   
    triangle t;
    rectangle r;
    
    t.getTriangleData();
    r.getRectangleData();
    t.triangleArea();
    r.rectangleArea();
}