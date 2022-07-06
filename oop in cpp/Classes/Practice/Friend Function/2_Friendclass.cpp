#include <iostream>
using namespace std;
class rectangle
{
    int len, br;

public:
    rectangle()
    {
        len = 10;
        br = 20;
    }
    friend class square;
};
class square
{
    int sid;

public:
    square()
    {
        sid = 5;
    }
    void display(rectangle r)
    {
        cout << "Length :" << r.len; // accessing the data members of class rectangle
        cout<<endl;
        cout << "Breadth :" << r.br; //accessing the data members of class rectangle
        cout<<endl;
        cout << "Side : " << this->sid; // this pointer
    }

};
int main(){
    rectangle r1;
    square s1;
    s1.display(r1);
    return 0;
}
