#include <iostream>  
using namespace std;
class banksys{
    char name[20], accType[20];
    int withdrawAmt, balance, depositeAmt;
    public:
        void openAcc();
        void depositeMoney();
        void checkBalance();
        void withdrawMoney();
};

void banksys::depositeMoney()
{
    cout << "Deposite amount" << endl;
    cin >> depositeAmt;
    balance = balance + depositeAmt;
}

void banksys::withdrawMoney()
{
    cout << "Withdraw amount" << endl;
    cin >> withdrawAmt;
    balance = balance - withdrawAmt;
}
void banksys::openAcc()
{
    cout << "NAME" << endl;
    cin >> name ;

    cout << "Account type" << endl;
    cin >> accType ;

    cout << "Pre deposite amount" << endl;
    cin >> balance ;
}
void banksys::checkBalance(){
    cout << name << endl;
    cout << balance << endl;
}

    int main()
{
    banksys p1;
    p1.openAcc();
    p1.depositeMoney();
    p1.withdrawMoney();
    p1.checkBalance();
    return 0;
}