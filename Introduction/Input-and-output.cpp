#include <iostream>
using namespace std;
int main()
{

    // Output in different forms
    cout << "Simple Input and Output \n";
    // Declaring variables
    string name;
    int age;
    int num;

    cout << "User details \n";

    // Input in different forms

    // Taking single Input
    cout << "Enter Your name : ";
    cin >> name;

    cout << "Enter your phone no and Your Age  \n ";
    // Taking multiple inputs
    cin >> num >> age;
    
    // Displaying multiple inputs

    cout << "Name : " << name << "\nPhone no :" << num << "\nAge : " << age << endl;

    return 0;
}
/*
If we don't include the using namespace std; statement, we need to use std::cout instead of cout
*/