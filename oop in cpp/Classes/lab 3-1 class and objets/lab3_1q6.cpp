#include <iostream>
using namespace std;
class employee
{
    string name;
    string address;
    string phoneno;
    int salary;
    int netSalary;
    float tax;
    float calculate();
 

public:
    void input();
    void output();
};

float employee::calculate(){
    netSalary = salary - tax;
    return 0;
}
void employee::input(){
    cout << "\nName      :";
    cin >> name;
    cout << "address   :";
    cin >> address;
    cout << "Phone no  :";
    cin >> phoneno;
    cout << "salary    :";
    cin >> salary;
    cout << "tax       :";
    cin >> tax;
    calculate();
    output();
}
void employee::output(){
    cout << "\nName                 :" << name << endl;
    cout << "Address              :" << address<<endl;
    cout << "PhoneNo              :" << phoneno << endl;
    cout << "Salary               :" << salary << endl;
    cout << "Net salary with tax  :" << netSalary << endl;
}
int main()
{
    employee e1;
    e1.input();

    return 0;
}