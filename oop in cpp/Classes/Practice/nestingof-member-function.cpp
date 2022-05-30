#include <iostream>
using namespace std;

class init
{
    int a, b;

public:
    void input(void);
    void display(void);
    void large(void);
};

void init::input(void)
{
    cout << "input number" << endl;
    cin >> a >> b;
}

void init::large()
{
    cout << a << endl;
}
void init::display()
{
    large();
}

int main()
{

    init A;
    A.input();

    A.display();

    return 0;
}