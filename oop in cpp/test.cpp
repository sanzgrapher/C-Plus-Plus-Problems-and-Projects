#include<iostream>
using namespace std;
class box{
    int a=10;
    int &b = a;


public:
   

        void put (){
            cout << a;
            cout << b;
            b = 15;
            cout << a;
            cout << b;
        }
};
int main(){
    box b1;
    // b1.a = 10; // incorrect
    // b1.b = 10; //correct

   
   
    b1.put();
}