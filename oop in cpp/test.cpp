#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int rollno;
    string address;

public:
    void set()
    {
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter your roll no" << endl;
        cin >> rollno;
        cout << "Enter your address" << endl;
        cin >> address;
    }
    void print()
    {
        cout << "Your name is" << name << endl;
        cout << "Your roll no is" << rollno << endl;
        cout << "Your address is" << address << endl;
    }
};
class derived_student : public student
{
public:
    void set()
    {
        set();
    }
    void get()
    {
        print();
    }
};
int main()
{
    student s;
    s.set();
    s.print();
}
