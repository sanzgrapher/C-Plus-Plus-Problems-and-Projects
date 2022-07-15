#include <iostream>  
using namespace std;
class Complex{
    int a;
    public:
    int b;
    void display(){
        cout << a << " i + " << b<< " j";
    }
        void setValue(int x, int y)
        {
            a = x;
            b = y;
        }
        friend Complex add(Complex c1, Complex c2);
};
Complex add(Complex c1, Complex c2){
    Complex cTemp;
    cTemp.a = c1.a + c2.a;
    cTemp.b = c1.b + c2.b;
    return cTemp;
}
int main() 
{
    Complex ci, cii,ciii;
    ci.setValue(1, 2);
    cii.setValue(5, 6);
    ciii = add(ci, cii);
    ciii.display();
  

    return 0;
}
