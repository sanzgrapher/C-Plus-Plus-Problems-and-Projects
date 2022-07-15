#include <iostream>  
using namespace std;
class simpleInterest{
    int p,t,r;
    public:
    simpleInterest(int x,int y,int z=13){
        p = x;
        t = y;
        r = z;
        int SI;
        SI = (p * t * r) / 100;
        cout << "Simple Interest = " << SI;
        cout<<endl;
    }
};
int main() 
{
    simpleInterest s1(1000, 2, 13), s2( 300, 2 );

    return 0;
}