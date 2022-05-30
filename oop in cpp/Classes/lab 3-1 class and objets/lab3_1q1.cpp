// lab3_1q1.cpp
#include <iostream>
using namespace std;
// declaring class
class student;

//  defining of class
class student
{
    // data members of class student
public:
    int id;
    string name;
};
int main()
{
    // creating objects
    student s1, s2;
    // accesing object
    s1.id = 10;
    s1.name = "naran";
    cout << s1.id << "\n"
         << s1.name;
    return 0;
}
