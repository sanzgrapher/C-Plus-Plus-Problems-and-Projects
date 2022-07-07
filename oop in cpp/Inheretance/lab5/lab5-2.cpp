#include <iostream>
using namespace std;
class Class1

{
protected:
    int number1;

public:
    void getNum1(int n)
    {
        number1 = n;
    }
};
class Class2
{
protected:
    int number2;

public:
    void getNum(int n)
    {
        number2 = n;
    }
};
class C : public Class1, public Class2
{
public:
    void display()
    {
        cout << "a : " << number1 << endl;
        cout << "b  : " << number2 << endl;
        cout << "sum : " << number1 + number2;
    }
};
int main()
{
    C c;
    c.getNum1(50);
    c.getNum(15);
    c.display();
    return 0;
}