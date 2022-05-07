// Program to illustrate the working of
// public and private in C++ Class
#include <iostream>

using namespace std;
class room
{
    int length;
    int breadth;
    int heigth;

public:
    int init(int len, int brdh, int heit)
    {
        length = len;
        breadth = brdh;
        heigth = heit;
        return 0;
    }
    int calculatearea()
    {
        return length * breadth * heigth;
    }
};
// int room::calculatearea(){

int main()

{

    room r1;
    r1.init(1, 2, 3);
    cout << "area is : " << r1.calculatearea() << endl;

    return 0;
}