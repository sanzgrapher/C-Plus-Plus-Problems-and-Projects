#include <iostream>  
using namespace std;
class Box{
    static int privcount;

public:
    static int countbox;
    
    Box()
    {
        countbox++;
        }
};

int Box::countbox=1;
int main() 
{
    Box b1;
    cout<<"initial+1 :" << b1.countbox << endl;
    b1.countbox = 10;
    cout<<"after setting 10 :" << b1.countbox << endl;
    Box b2;
    cout<<"after b2 obj creation :" << b2.countbox << endl;


    return 0;
}