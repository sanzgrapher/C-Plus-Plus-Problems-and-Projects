#include <iostream>
using namespace std;
class student
{
protected:
    int roll;
public:
    void assignRoll()
    {
        cout << "Enter RollNo : ";
        cin >> roll;
        cout << endl;
        displayRoll();
    }
    void displayRoll()
    {
        cout << "Roll no: " << roll;
        cout << endl;
    }
};
class theory : public student
{
protected:
    int t1_sub1, t2_sub2;
    void assignSub()
    {
        assignRoll();
        cout << "t1_Sub1 : ";
        cin >> t1_sub1;
        cout << endl;
        cout << "t1_Sub2 : ";
        cin >> t2_sub2;
        cout << endl;
        displayMarks();
    }
    void displayMarks()
    {
        cout << endl;
        cout << "t1_Sub1 : " << t1_sub1;
        cout << endl;
        cout << "t2_Sub2 : " << t2_sub2;
        cout << endl;
    }
};
class practical : public student
{
protected:
    int p1_sub1;
    int p2_sub2;
public:
    void assignPractical()
    {
        cout << endl;
        cout << "Enter Practical p1_sub1: ";
        cin >> p1_sub1;
        cout << endl;
        cout << "Enter Practical p2_sub2: ";
        cin >> p2_sub2;
        displayPractical();
    }
    void displayPractical()
    {
        cout << endl;
        cout << "Practical p1_sub1: " << p1_sub1;
        cout << endl;
        cout << "Practical p2_sub2: " << p2_sub2;
        cout << endl;
    }
};
class result : public theory, public practical
{
    int total;
public:
    void display()
    {
        assignSub();
        assignPractical();
        total = t1_sub1 + p1_sub1 + t2_sub2 + p2_sub2;
        cout << "Total : " << total;
    }
};
int main()
{
    result r1;
    r1.display();
    return 0;
}