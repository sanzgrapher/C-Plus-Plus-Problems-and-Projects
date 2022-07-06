#include <iostream>  
using namespace std;
class rect{
    int a = 10, b = 2;
    public:
        friend int area(rect recta);
};
int area(rect recta){
    return recta.a * recta.b;
}

int main() 
{
    rect r1;
   cout<< area(r1);
    

    return 0;
}