

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
        return length * breadth;
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
        return length * breadth * height;
    }
};
int main()
{
}