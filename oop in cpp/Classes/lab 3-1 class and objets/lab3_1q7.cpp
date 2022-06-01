#include <iostream>  
using namespace std;

class item{
    int number;
    static int count;
    public:
        void getData();
};
int item ::count = 0;
void item::getData(){
    // count++;
    cout << "Function called : " << ++count;
    cout << "\nNumber     :";
    cin >> number;
}
int main() 
{
    item i1,i2,i3,i4;
    i1.getData();
    i2.getData();
    i3.getData();
    i4.getData();
    cout << "Count of function call by objects : " <<count;

    return 0;
}