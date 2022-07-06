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
    cout << "before"<<no << endl;
    cout << "count : " << count << endl;

    no = ++count;
    cout << "count : " << count << endl;

    cout << "after" << no << endl;
}
void test::dispno()
{ 
    cout << "obj no : " << no << endl;
}
  void test::dispcount()
{
    cout << "count : " << count<<endl;
}

int test::count;
int main()
{
    test t1, t2;
    test::dispcount();
    
    t1.dispno();
    t1.setno();
    t1.dispcount();
    t2.setno();
    // t2.dispcount();

    // t2.dispcount();

    // test::dispcount();

    return 0;
}