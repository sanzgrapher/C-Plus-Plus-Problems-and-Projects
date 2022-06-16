// object can be sent as argument in two ways
// a copy of entire object is passed to the function
// passing the address of the object





#include <iostream>
using namespace std;
class times{
    int hours;
    int minutes;
    public:
    void getTime(int h ,int m){
        hours = h;
        minutes = m;

    }
    void putTime(void){
        cout << hours << "Hours and ";
        cout << minutes << "minutes"<<endl;

    }
    void sum(times, times);// passing 2 objects
};

void times::sum(times t1,times t2){ // t1 and t2 are obj
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    hours = hours+t1.hours + t2.hours;
    minutes = minutes % 60;
}


int main(){
    times t1,t2,t3;
    t1.getTime(2, 30);
    t2.getTime(1, 60);

    t3.sum(t1, t2);
    t1.putTime();
    t2.putTime();
    t3.putTime();
    return 0;
}