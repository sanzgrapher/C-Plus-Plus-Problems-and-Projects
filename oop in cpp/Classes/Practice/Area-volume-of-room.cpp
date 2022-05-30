#include <iostream>
using namespace std;
class room
{
public:
    double length;
    double breadth;
    double height;
    // double volume;
    // double area;
    double getarea()
    {
        // area = length * breadth;
        return length * breadth;
    }
    double getvolume()
    {
        return length * breadth * height;
    }
   
};
int main()
{
    room r1;
    r1.length = 100;
    r1.breadth = 85;
    r1.height = 65;
  
    cout << "the volume of the room is : " << r1.getvolume() << endl;
    cout << "the volume of the room is : " << r1.getarea() << endl;

    return 0;
}
