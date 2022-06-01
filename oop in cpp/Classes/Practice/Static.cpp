#include <iostream>
using namespace std;
class test
{
    int no;
    static int count;

public:
    void getval(int);
    void dispcount(void);
};

int test::count;

void test::getval(int x){
    no = x;
    cout << "number : " << no<<endl;
    count++;
}
void test ::dispcount(){
    cout << "cout : " << count<<endl;
}
int main()
{
    test t1, t2, t3;
    
    t1.dispcount();
    t2.dispcount();
    t3.dispcount();

    t1.getval(2);
    t2.getval(3);
    t3.getval(4);

    t1.dispcount();
    t2.dispcount();
    t3.dispcount();

    return 0;
}