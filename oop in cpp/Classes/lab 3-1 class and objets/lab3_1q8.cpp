#include <iostream>  
using namespace std;
class item{
    public:
    static int count;
    item(){
        count++;
        cout << "called  " << count<<endl;
    }

};
int item::count=0;
int main() 
{
    item i1, i2, i3, i4;
    return 0;
}