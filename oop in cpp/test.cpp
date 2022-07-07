#include <iostream>
using namespace std;
class Demo
{
    static int count;

public:
    Demo()
    {
        count++;
        cout << "Object created= " << count << endl;
    }
    ~ Demo()
    {
        cout << "Object Destroyed= " << count << endl;
        count--;
    }
};
int Demo::count;
int main()
{
    Demo a1, a2, a3;
    {
        Demo a4;
    }
    {
        Demo a1;
    }
}