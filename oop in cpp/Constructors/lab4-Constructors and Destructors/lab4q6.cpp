#include <iostream>
using namespace std;
class Squares
{
    int length;

public:
    void display()
    {
        cout << length << endl;
    }
    Squares(int length)
    {
        this->length = length;
    }
    Squares(Squares &a1)
    {
        length = a1.length;
    }
   
};
int main()
{
    Squares sq(22);
    sq.display();
    Squares sq2(sq);

    sq2.display();
    return 0;
}