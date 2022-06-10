#include <iostream>  
using namespace std;
class box{
    public:
    int a;
    static int cout;
};
class boxs
{
public:
    int a;
    static int cout;
};
int boxs::cout = 0;
int box::cout = 0;
int main() 
{
    box b1,b2;
    boxs b1s, bs2;
    cout <<"b1.cout : " << b1.cout << endl;
    cout << "b2.cout : "<<  b2.cout<<"\n" << endl;

    b1s.cout = 10;
    cout << "b1.cout : " << b1.cout << endl;
    cout << "b2.cout : " << b2.cout << "\n"<< endl;
    b2.cout = 1;

    cout << "b1.cout : " << b1s.cout << endl;
    cout << "b2.cout : " << b2.cout << "\n"<< endl;

    return 0;
}