#include <iostream>
using namespace std;
class test
{
    int no;
    static int count;

public:
    void setno();
    void dispno();
    static void dispcount(void);
};
void test::setno()
{
    no = ++count;
}
void test::dispno()
{
    cout << "obj no : " << no << endl;
}
  void test::dispcount()
{
    cout << "count : " << count;
}

int test::count;
int main()
{
    test t1, t2;
    t1.setno();
    t2.setno();

    t2.dispcount();

    test::dispcount();

    return 0;
}