#include <iostream>  
using namespace std;
class Time{
    int hrs,mint, sec;
    public:
    void getTime(int x =0,int y=0 ,int z=0){
        hrs = x;
        mint = y;
        sec = z;
    }
    void displaySumTime();

    friend Time sum(Time t1, Time t2);
};
Time sum(Time t1,Time t2){
    Time t3;
    t3.sec = t1.sec + t2.sec;   // sum of two input obj.sec
    t3.mint = t3.sec / 60; //if +60s its 1and some second 
    t3.sec = t3.sec % 60; //takes the remaining seconds 
// similarly as sec 
    t3.mint =t3.mint+ t1.mint + t2.mint;
    t3.hrs = t3.mint / 60;
    t3.mint = t3.mint % 60;
// add all hrs 
    t3.hrs = t3.hrs+t1.hrs + t2.hrs;
    return t3;
}
void Time ::displaySumTime()
{
    cout << "Summation of time for new object: " << endl;
    cout << "Hour: " << hrs << endl;
    cout << "Minutes: " << mint << endl;
    cout << "Second: " << sec << endl;
}
int main() 
{
    Time t, tt, t4;
    t.getTime(1, 60, 60);
    tt.getTime(1, 61,122);
    t4 = sum(t,tt);
    t4.displaySumTime();
    return 0;
}