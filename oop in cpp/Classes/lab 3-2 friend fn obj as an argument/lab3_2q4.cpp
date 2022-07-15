#include <iostream>  
using namespace std;
class c2;
class c1{
    int x;
    public:
    void getValue(int val)
    {
        x = val;
    }
    friend void swap(c1 o1, c2 o2);
};
class c2{
    int y;
    public:

    void getValue(int val)
    {
        y = val;
    }
    friend void swap(c1 o1, c2 o2);
};
void swap(c1 o1,c2 o2){
    cout << "Initials value"<<endl;

    cout << "Value in x : " << o1.x<<endl;
    cout << "Value in y : " << o2.y<<endl;
    int temp;
    temp = o1.x;
    o1.x = o2.y;
    o2.y = temp;
    cout << "Swapped  value"<<endl;
    cout << "Value in x : " << o1.x<<endl;
    cout << "Value in y : " << o2.y<<endl;

}

int main() 
{
    c1 c;
    c.getValue(2);
    c2 cc;
    cc.getValue(5);


    swap(c, cc);
    return 0;
}