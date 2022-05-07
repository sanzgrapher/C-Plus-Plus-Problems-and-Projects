#include <iostream>

using namespace std;

class book
{
public:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};

int main()
{
    book book1;          // Declare Box1 of type Box
    book book2;          // Declare Box2 of type Box
    double volume = 0.0; // Store the volume of a box here

    // box 1 specification
    book1.height = 5.0;
    book1.length = 6.0;
    book1.breadth = 7.0;

    // box 2 specification
    book2.height = 10.0;
    book2.length = 12.0;
    book2.breadth = 13.0;

    // volume of box 1
    volume = book1.height * book1.length * book1.breadth;
    cout << "Volume of Box1 : " << volume << endl;

    // volume of box 2
    volume = book2.height * book2.length * book2.breadth;
    cout << "Volume of Box2 : " << volume << endl;
    return 0;
}
