
#include <iostream>
using namespace std;
class product
{
    int a;

public:
    product()
    {
    }
    product(int x)
    {
        a = x;
    }

    product operator*(product obj)
    {
        product m;
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
    product m1(3), m2(5);
    product m3 = m1 * m2;
    m3.displayData();
    return 0;
}