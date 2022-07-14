
#include <iostream>
#include <math.h>
using namespace std;
class Polar
{

public:
    int r, an;
    void getData(int rad, int ang)
    {
        r = rad;
        an = ang;
    }
    void displayData()
    {
        cout << "Radius = " << r << " and Angle = " << an << endl;
    }
};

class Rectangular
{
    float x, y;

public:
    Rectangular()
    {
    }

    Rectangular(Polar p)
    {
        x = p.r * cos(p.an);
        y = p.r * sin(p.an);
    }

    void displayData()
    {
        cout << "x = " << x << " and y = " << y << endl;
    }
};
int main()
{
    Polar p;
    p.getData(3, 90);
    p.displayData();
    Rectangular r;
    r = p;
    r.displayData();
    return 0;
}