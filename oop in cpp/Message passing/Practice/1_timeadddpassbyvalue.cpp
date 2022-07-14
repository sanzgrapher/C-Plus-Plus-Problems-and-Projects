#include <iostream>
using namespace std;
class times
{
    int hour, min;

public:
    void gettime(int a, int b)
    {
        hour = a;
        min = b;
    }
    void puttime(){
        cout << "hour :" << hour;
        cout << "Min :" << min;

    }
    void add(times t1 , times t2){
        min = t1.min + t2.min;
        hour = min / 60;
        min = min % 60;
        hour = hour + t1.hour + t2.hour;
    }
};
int main()
{
    times t1, t2, t3;
    t1.gettime(2, 30);
    t2.gettime(1, 30);
    t3.add(t1, t2);
    t3.puttime();

    return 0;
}