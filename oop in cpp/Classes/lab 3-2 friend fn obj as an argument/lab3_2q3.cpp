#include <iostream>  
using namespace std;
class c1{
    int x,y,z;
    public:
    void setValue(int a,int b,int c)
    {
        x = a;
        y = b;
        z = c;
    }
    friend int mean(c1 o1);
};
int mean(c1 o1){
    int X;
    X = (o1.x+o1.y+o1.z) / 3;
    cout << "Mean : " << X;
    return 0;
}
int main() {
    c1 o1;
    o1.setValue(1,3,2);
    mean(o1);
    return 0;
}