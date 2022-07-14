#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    void show()
    {
        cout << "Real : " << x;
        cout << endl;
        cout << "image : " << y;
    }
    void input(int a, int b)
    {
        x = a;
        y = b;
    }
    complex sum(complex c1, complex c2)
    {
        complex c3;
        c3.x = c1.x + c2.x;
        c3.y = c1.y + c2.y;
        return c3;
    }
};
int main()
{
    complex c, c1, c2;
    c1.input(2,3);
    c2.input(4,5);
    c = c.sum(c1, c2);
    c.show();
    return 0;
}