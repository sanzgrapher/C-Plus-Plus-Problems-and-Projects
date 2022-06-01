#include <iostream>
using namespace std;
class test{
    static int a;
    int no;

public:
    int disp(int x)
    {
        no = x;
        cout << "number : " << no << endl;
        a++;
        return 0;
    }
    static int stFunction()
    {
        cout << "called : " << a << endl;

        return 0;
    }
};
int test::a=0;
int main()
{
    test t1,t2;
    t1.disp(1);
    t2.disp(3);
    t1.stFunction();
    return 0;
}