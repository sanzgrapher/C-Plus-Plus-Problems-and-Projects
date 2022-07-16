#include <iostream>  
using namespace std;
class class1{
    protected:
    int num;
    public:
    void setValue(int x){
        num = x;
    }
};
class class2{
    protected:
    int num1;
    public:
    void setValue1(int x){
        num1 = x;
    }
};
class class3:public class1,public class2{
    public:
    void display(){
        cout<<endl;
        cout<<"Sum : "<<num + num1;
        cout<<endl;
    }
};
int main() 
{
    class3 c3;
    c3.setValue(2);
    c3.setValue1(3);
    c3.display();

    return 0;
}