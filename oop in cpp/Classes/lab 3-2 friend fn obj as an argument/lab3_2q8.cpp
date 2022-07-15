#include <iostream>
using namespace std;
class bankAccount
{
    char name[20],accNo[16], accType[20];
    int withdrawAmt, balance, depositeAmt;

public:
    void openAcc();
    void depositeMoney();
    void checkBalance();
    void withdrawMoney();
};

void bankAccount::depositeMoney()
{
    cout << "Deposite amount" << endl;
    cin >> depositeAmt;
    balance = balance + depositeAmt;
}

void bankAccount::withdrawMoney()
{
    cout << "Withdraw amount" << endl;
    cin >> withdrawAmt;
    balance = balance - withdrawAmt;
}
void bankAccount::openAcc()
{
    cout << "NAME" << endl;
    cin >> name;

    cout << "Account type" << endl;
    cin >> accType;

    cout << "Pre deposite amount" << endl;
    cin >> balance;
}
void bankAccount::checkBalance()
{
    cout << name << endl;
    cout << balance << endl;
}

int main()
{
    bankAccount p1;
    p1.openAcc();
    p1.depositeMoney();
    p1.withdrawMoney();
    p1.checkBalance();
    return 0;
}