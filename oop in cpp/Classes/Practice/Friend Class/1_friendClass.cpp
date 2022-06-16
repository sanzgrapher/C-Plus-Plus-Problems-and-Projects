#include<iostream>
using namespace std;
class ABC;
class XYZ{
    int x;
    public:
    void setValue(void){
        x = 10;
    
    }
    friend void max(XYZ, ABC);
};

class ABC{
    int a;
    public:
        void setValue(void)
        {
            a = 11;
        }
        friend void max(XYZ, ABC);
};

void    max(XYZ objx , ABC obja ){
    if (objx.x>obja.a){
        cout << "Xyx is greater" << objx.x;
    }
    else{

        cout << "abc" << obja.a;
    }
}

int main (){
    ABC obja;
    XYZ objx;
    obja.setValue();
    objx.setValue();
    max(objx,obja );
    return 0;
}