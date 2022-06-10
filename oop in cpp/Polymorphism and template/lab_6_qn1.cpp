#include <iostream>
using namespace std;
class Unary
{
    int a, b;

public:
    Unary(int x, int y)
    {
        a = x;
        b = y;
    }

    void operator++()
    {
        a++;
        b++;
    }
    void operator--()
    {
        a--;
        b--;
    }
    void displayData()
    {
        cout << "a = " << a << " and b = " << b << endl;
    }
};
int main()
{
    Unary u(3, 4), u1(6, 7);
    cout << "Incremented Data : " << endl;
    ++u;
    u.displayData();
    cout << "Decremented Data : " << endl;
    --u1;
    u1.displayData();
    return 0;
}