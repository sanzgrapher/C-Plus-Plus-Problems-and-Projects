#include <iostream>  
using namespace std;
class XYZ; // Forward declaration needed for line no :11 as argument
class ABC{
    int a1;

    public:
    void getValue(int val){
        a1 = val;
    }
    friend void max(ABC a, XYZ x);  //friend function with arguments as objects
};
class XYZ{
    int x1;

    public:
    void getValue(int val){
        x1 = val;
    }
    friend void max(ABC a,XYZ x); // same as 11
};

void max(ABC a, XYZ x) // takes argument as objects
{
if (a.a1>x.x1){
    cout << "class ABC a1 ";
}else{
    cout << "class XYZ x1 ";

}

}

int main() 
{

    ABC a2;
    a2.getValue(5); // change value to alter result
    XYZ x2;
    x2.getValue(12); // change value to alter result

    max(a2, x2); // calling function passing arguments

    return 0;
}