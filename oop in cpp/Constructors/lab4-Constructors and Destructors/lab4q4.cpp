#include <iostream>  
using namespace std;
class area{
    int length,breadth;
    public:
    area(int l){
        length = l;
        cout << "Area of square : " << length * length;
        cout<<endl;
    }
    area(int l,int b){
        length = l;
        breadth = b;
        cout << "Area of rectangle :" << length * breadth;
    }
};
int main() 
{
    area square(5),rect(2,10);


    return 0;
}