// question no 1
#include <iostream>
using namespace std;
class bedroom;
class room
{
protected:
    int length;
    int breadth;

public:
    int area()
    {
        int a = length * breadth;
        cout << "the area is " << a;
        return a;
    }
};

class bedroom : public room
{
    int height;

public:
    void setdata(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    int volume()
    {
        int v = area() * height;
        cout << "the volume is " << v;
    }
};
int main()
{
    int l;
    int b;
    int h;
    cout << "enter the length" << endl;
    cin >> l;

    cout << "enter the bredth" << endl;
    cin >> b;

    cout << "enter the height" << endl;
    cin >> h;
    bedroom b1;
    b1.setdata(l, b, h);
    b1.volume();
}