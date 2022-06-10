
#include <iostream>
using namespace std;
class Multi
{
    int a;

public:
    Multi()
    {
    }
    Multi(int x)
    {
        a = x;
    }

    Multi operator*(Multi obj)
    {
        Multi m;
        m.a = a * obj.a;
        return m;
    }

    void displayData()
    {
        cout << "a = " << a << endl;
    }
};
int main()
{
    Multi m1(3), m2(5);
    Multi m3 = m1 * m2;
    m3.displayData();
    return 0;
}