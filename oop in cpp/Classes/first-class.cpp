#include <iostream>
using namespace std;
class hero
{
public:
    string name;
    int health;

private:
    int power;
};
int main()
{
    hero h1;
    cout << "Hero name : " << endl;
    cin >> h1.name;
    cout << h1.name;

    return 0;
}