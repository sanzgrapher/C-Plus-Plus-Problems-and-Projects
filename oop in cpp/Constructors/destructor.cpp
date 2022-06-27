

#include <iostream>
using namespace std;
int count = 0;
class Test
{
public:
    Test()
    {
        count++;
        cout << "\n No. of Object created:\t" << count;
    }

    ~Test()
    {
        cout << "\n No. of Object destroyed:" << count;
    --count;
    }
};

main()
{
    Test t;
    return 0;
}
