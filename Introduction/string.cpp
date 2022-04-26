// A string variable contains a collection of characters surrounded by double quotes:
#include <iostream>
// Including string library
#include <string>
using namespace std;
int main()
{
    // String declaratiion with initilization
    string name = "sanzgrapher";
    string address = "Nepal";
    // Displaying
    cout << "Name : " << name << "\nAddress : " << address << endl;

    // String input

    // string Name;
    // cout << "Enter your name : ";
    // cin >> Name;
    // cout << Name << endl;

    // Here only first text is taken if input was made firstname lastname
    // so using get line function we can take a complete sentence that was inputted

    // getline(cin >> ws, Name);
    // cout << Name;

    // C++ also supports input manipulators, which alter the way that input is accepted. The std::ws input manipulator tells std::cin to ignore any leading whitespace.

    //  String concatenations
    string fname = "Naran ";
    string lname = "Dhakal";
    string fullname;
    fullname = fname + lname;
    cout << fullname << endl;
    fullname = fname.append(lname);
    cout << fullname;
    // string length
    string spam = "Hello";
    cout << endl;
    cout << spam << endl;

    cout << "Str length : "<< spam.length() << endl;

    // acessing strings
    // index starts from 0
    cout << "string index 0 :" << spam[0];
    cout << endl;

    // change the index character
    spam[0] = 'o';
    cout << "After changing :"<<  spam << endl;
    
}