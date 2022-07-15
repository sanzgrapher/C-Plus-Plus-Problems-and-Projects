#include <iostream>  
using namespace std;
class addAmount{
    int amount=50;
    public:
    addAmount(){

    }
    addAmount(int a){
        amount = amount + a;
    }
    void checkAmount()
    {
        cout << "Final Amount : " << amount << endl;
    }
};
int main() 
{
    addAmount p1, p2(500);
    p1.checkAmount();
    p2.checkAmount();


    return 0;
}