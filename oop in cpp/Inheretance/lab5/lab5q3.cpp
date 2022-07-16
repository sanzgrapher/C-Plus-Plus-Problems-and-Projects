#include <iostream>  
using namespace std;
class student{
    protected:
    int roll;
    public:
   void assignRoll(){
       cout << "Enter RollNo : ";
       cin >> roll;
       cout<<endl;
    }

};
class test:public student{
    protected:
    int sub1, sub2;
 void assignSub(){
     cout << "Sub1 : " ;
     cin >> sub1;
     cout << endl;
     cout << "Sub2 : ";
     cin >> sub2;
     cout << endl;
 }
};
class result:public test{
    int total;
    public:
    void display(){
        assignRoll();
        assignSub();
        total = sub1 + sub2;
        cout << "Roll no: " << roll;
        cout<<endl;
        cout << "Sub1 : " << sub1;
        cout<<endl;
        cout << "Sub2 : " << sub2;
        cout<<endl;
        cout << "Total : " << total;
    }
};
int main() 
{
    result r1;
    r1.display();

    return 0;
}