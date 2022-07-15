#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    void setValue(int a, int b)
    {
        feet = a;
        inches = b;
    }
    friend void add(Distance x, Distance y);
};
void add(Distance x, Distance y)
{
    int tFeet;
    int tInch;
    tFeet = x.feet + y.feet;
    tInch = x.inches + y.inches;
    if (tInch >= 12)
    {
        tFeet += tInch / 12;
        tInch = tInch % 12;
    }
    cout << "Total feet " << tFeet;
    cout << endl;
    cout << "Total inch " << tInch;
}
int main()
{
    Distance d1, d2;
    d1.setValue(1, 6);
    d2.setValue(3, 7);
    add(d1, d2);
    return 0;
}