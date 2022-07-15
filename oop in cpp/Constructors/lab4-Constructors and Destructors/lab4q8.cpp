#include <iostream>

using namespace std;

class Time
{
    int hrs;
    int min;
    int sec;

public:
    Time()
    {
        hrs =min =sec = 0;
    }
    Time(int h, int m, int s)
    {
        hrs = h;
        min = m;
        sec = s;
    }
    void display()
    {
        cout << hrs << ":" << min << ":" << sec << endl;
    }
    Time add(Time t)
    {
        Time temp;
        temp.sec = sec + t.sec;
        temp.min = min + t.min + (temp.sec / 60);
        temp.hrs = hrs + t.hrs + (temp.min / 60);
        temp.min = temp.min % 60;
        temp.sec = temp.sec % 60;
        return temp;
    }
};
int main()
{
    Time t1, t2(1, 20, 35), t3;
    t1.display();
    t2.display();
    t3 = t1.add(t2);
}