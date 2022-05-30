#include <iostream>
using namespace std;
class circle
{
    float radius;
public:

    void getRadius();
    void printArea();
};
// ///////////////////////////////////////////
void circle::getRadius()
{ 
    cout << "Input Radius" << endl;
    cin >> radius ;
    printArea();
}
void circle::printArea()
{
    float area;
    area = 3.14 * radius * radius;
    cout << "Area : " << area << endl;
}
// ///////////////////////////////////////////

int main()
{
    circle c1;
    c1.getRadius();
    // c1.printArea();
    return 0;
}