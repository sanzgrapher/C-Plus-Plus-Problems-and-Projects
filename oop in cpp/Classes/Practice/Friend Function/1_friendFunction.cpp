#include<iostream>
using namespace std;
class sample{
    int a=5, b=10; // private member
    public:
    void setValue(){
        a = 25; // setting initial values
        b = 40;
    }
    friend float mean(sample s); // declaring friend function
};
float mean(sample s){
    return float(s.a + s.b) / 2;
}
int main (){
    sample x;
    x.setValue();
    cout << "Mean : " << mean(x);
}