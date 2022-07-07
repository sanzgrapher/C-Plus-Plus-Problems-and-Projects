#include <iostream>

using namespace std;

class student
{
protected:
    int rollno;

public:
    void setrollno(int r)
    {
        rollno = r;
    }
};
// class C : public Class1, public Class2
class test : public student
{
protected:
    int sub1;
    int sub2;

public:
    void setmarks(int s1, int s2)
    {
        sub1 = s1;
        sub2 = s2;
    }
};
class result : public test
{
protected:
    int total;

public:
    void totalmarks()
    {
        total = sub1 + sub2;
    }
    void showresult()
    {
        cout << "your roll number is " << rollno << endl;
        cout << "your marks in 1st subject  is " << sub1 << endl;
        cout << "your marks in 2nd subject is  " << sub2 << endl;
        cout << "your total marks is  " << total << endl;
    }
};

int main()
{
    int roll;
    int mar1;
    int mar2;
    result r1;
    cout << "enter roll no" << endl;
    cin >> roll;
    cout << "enter marks 1" << endl;
    cin >> mar1;
    cout << "enter marks 2" << endl;
    cin >> mar2;

    r1.setrollno(roll);
    r1.setmarks(mar1, mar2);
    r1.totalmarks();
    r1.showresult();
    return 0;
}