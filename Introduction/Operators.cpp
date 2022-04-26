#include <iostream>
using namespace std;
int main()
{
    //  Declaring variables
    int a = 10, b = 20;
    int result;
    // Operators
    // Arthmetic operators
    result = a + b;
    cout << "Sum is : " << result << endl;
    // Subtraction
    result = b - a;
    cout << "Difference is : " << result << endl;
    // Relational Operator
    result = a != b;
    cout << "Is a and b Not Equal  : " << result << endl;
    // Logical Operators
    result = (a > b) || (a != b);
    cout << "Returns true if at least one is true   : " << result << endl;
    // Bitwise operator
    cout << "a || b = " << (a || b) << endl;
}