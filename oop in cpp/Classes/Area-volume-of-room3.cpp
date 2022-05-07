#include <iostream>  
using namespace std;
class Room{
    protected:
        int length;
        int breadth;
        int height;
};

class smallroom:Room{
    public:
        int inits(int len ,int br ,int hei );
        int calc();
};

int smallroom::inits(int len, int br, int hei){
    length = len;
    breadth = br;
    height = hei;
    return 0;
}
int smallroom::calc()
{
    return length * breadth * height;
}

int main() 
{
    smallroom s1;
    Room r1;
    s1.inits(2, 2, 2);
    cout << s1.calc();

    return 0;
}