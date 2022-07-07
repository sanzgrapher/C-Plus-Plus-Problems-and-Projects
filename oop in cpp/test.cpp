#include <iostream>
using namespace std;
class Demo
{
    int a;
public:
    void setdata(int x)
    {
        a = x;
    }
    Demo square(Demo *p){
        Demo y;
        y.a = p->a * p->a;
        return y;
    }
    
    
    void putdata(){
        cout << a;
    }
};
int main()
{
    Demo o1,  o3;
    o1.setdata(10);
    o3 = o3.square(&o1);
    o3.putdata();
}