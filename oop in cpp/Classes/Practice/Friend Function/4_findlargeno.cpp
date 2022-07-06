#include <iostream>  
using namespace std;
class data2;
class data1{
    int a;
    public:
    void setdata(){
        a = 10;
    }
    friend void max(data1 c1, data2 c2);
};
class data2{
    int a;

public:
    void setdata()
    {
        a = 0;
    }
    friend void max(data1 c1, data2 c2);
};
void max(data1 c1, data2 c2)
{
if (c1.a>c2.a){
    cout << "Large data1 : " <<c1.a;
}
else{
    cout << "Large data2 : "<< c2.a;
}
    
}
int main() 
{
    data1 d1;
    data2 d2;
    d1.setdata();
    d2.setdata();
    max(d1,d2);
    return 0;
}