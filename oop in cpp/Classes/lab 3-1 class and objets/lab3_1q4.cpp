// lab3_1q4.cpp
#include <iostream>
using namespace std;
class large
{
    int num1, num2;
    int large = 0;

public:
    void get();
    void largest();
    void put();
};
void large::get()
{
    cout << "Input two numbers" << endl;
    cin >> num1 >> num2;
    largest();
}
void large::largest()
{
    if (num1>num2)
    {
        large = 0;
    }
    else{
        large = 1;
    }
    put();
}
void large::put()
{
    if (large==0)
    {
        cout << "num1: " << num1 << "  is largest" << endl;
    }
    else
    {
        cout << "num2: " << num2 << "  is largest" << endl;
    }
}

int main()
{

    large l1;
    l1.get();
    return 0;
}