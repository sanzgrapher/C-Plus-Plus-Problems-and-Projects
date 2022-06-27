#include <iostream>  
#include<conio.h>
using namespace std;
class Max{
    int no;
    public:
    // constructor with arguments having default value 0
    Max(int no =0){
        this-> no = no;
    }
    // greater function having obj as an argument and having return type obj as reference
    Max& greater(Max &X ){
        if (no >X.no)
        {
            return *this;
        }else{
            return X;
        }

    }
    void disp(){
        cout << "Greater number " <<no << endl;
    }
};

int main() 
{
    Max no1(100), no2(50), no3;

    no3 = no1.greater(no2);
    no3.disp();

    return 0;
}