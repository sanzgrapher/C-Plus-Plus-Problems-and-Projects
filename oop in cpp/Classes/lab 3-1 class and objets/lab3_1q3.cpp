#include <iostream>
using namespace std;
class square
{
    int length;

public:
    void getLength();
    void printArea();
    void printPerimeter();
};

void square::getLength()
{
    cout << "Input length" << endl;
    cin >> length;
    printArea();
    printPerimeter();
}

void square::printArea()
{
    float area;
    area = length * length;
    cout << "Area : " << area << "\n"<< "\n"<< endl;
}

void square::printPerimeter()
{
    float peri;
    peri = 4 * length;
    cout << "Perimeter : " << peri << "\n" << "\n" << endl;
}
int main()
{
    square s1, s2;
    s1.getLength();
    s2.getLength();

    return 0;
}