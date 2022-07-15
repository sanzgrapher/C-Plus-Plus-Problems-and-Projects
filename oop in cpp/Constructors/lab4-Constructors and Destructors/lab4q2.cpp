#include <iostream>  
using namespace std;
class Rectangle{
    int len, br;
    public:
    Rectangle(){
        len =br= 0;
    }
    Rectangle(int l ,int b){
        len = l;
        br = b;
    }
    Rectangle(int a){
        len = br = a;
    }
    int area(){
        return len * br;
    }
};
int main() 
{
    Rectangle r1, r2(2, 5), r3(3);
    cout << "Area : "<< r1.area();
    cout<<endl;
    cout << "Area : " <<r2.area();
    cout<<endl;
    cout << "Area : " <<r3.area();

    return 0;
}