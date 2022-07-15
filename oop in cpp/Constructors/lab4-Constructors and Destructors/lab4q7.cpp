#include <iostream>  
using namespace std;
class numbers{
    int a, b;
    double c, d;
    public:
        numbers(int x)
        {
            a = x;
           
            cout << "Sum of int : " << a + a;
            cout << endl;
        }
    numbers(int x ,int y){
        a = x;
        b = y;
        cout << "Sum of ints : " <<a + b;
        cout<<endl;
        
    }
    numbers(double p ,double q){
        c = p;
        d = q;
        cout << "Sum of floats : "<< c + d;
        cout<<endl;
    }
    numbers(int p, double q)
    {
        a = p;
        d = q;
        cout << "Sum of int double : " << a + d;
        cout << endl;
    }
};
int main() 
{
    numbers n(1),n1(2, 3), n2(2.3, 3.2),n3(2,2.3);

    return 0;
}