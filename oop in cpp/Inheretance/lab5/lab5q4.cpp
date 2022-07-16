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
    void displayRoll(){
        cout << "Roll no: " << roll;
        cout << endl;
    }
};
class test : public student
{
protected:
    int sub1, sub2;
    void assignSub()
    {
        cout << "Sub1 : ";
        cin >> sub1;
        cout << endl;
        cout << "Sub2 : ";
        cin >> sub2;
        cout << endl;
        displayMarks();
    }
    void displayMarks()
    {
        
        cout << "Sub1 : " << sub1;
        cout << endl;
        cout << "Sub2 : " << sub2;
        cout << endl;
    }
};
class Sport{
protected:
    int score;

public:
    void assignScore()
    {
        cout << "Enter score : ";
        cin >> score;
        cout << endl;
        displayScore();
    }
    void displayScore()
    {
        cout << "score no: " << score;
        cout << endl;
    }
};
class result : public test,public Sport
{
    int total;

public:
    void display()
    {
        assignRoll();
        assignSub();
        assignScore();
        total = sub1 + sub2 +score;
     
     
        cout << "Total : " << total;
    }
};
int main()
{
    result r1;
    r1.display();

    return 0;
}