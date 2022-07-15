#include <iostream>
using namespace std;
class DB;
class DM
{
    float m, cm;

public:
    void setValue(float x, float y)
    {
        m = x;
        cm = y;
    }
    friend void sum(DM d1, DB d2);
};
class DB
{
    float ft, in;

public:
    void setValue(float x, float y)
    {
        ft = x;
        in = y;
    }
    friend void sum(DM d1, DB d2);
};

void sum(DM d1, DB d2)
{
    float tM, tCm, tFt, tIn, no;
    tM = d1.m + d2.ft / 3.28;
    tCm = d1.cm + d2.in / 0.39;
    tFt = d2.ft + d1.m * 3.28;
    tIn = d2.in + d1.cm * 0.39;
    cout << "Which format to display m/cm ->1 or ft/in ->2 ? ";

    cin >> no;
    cout << endl;
    if (no == 1)
    {
        cout << tM << "m and " << tCm << "cm" << endl;
    }
    else if (no == 2)
    {
        cout << tFt << "ft and " << tIn << "inches" << endl;
    }
    else
    {
        cout << "invalid";
    }
}
int main()
{
    DM o1;
    DB o2;
    o1.setValue(1.5, 20);
    o2.setValue(0.5, 50);
    sum(o1, o2);

    return 0;
}