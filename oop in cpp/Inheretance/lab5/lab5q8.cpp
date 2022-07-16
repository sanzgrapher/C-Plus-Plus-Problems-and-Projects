#include <iostream>  
using namespace std;
class employee{
    private:
    int eId, eSalary;
    string eName;
    public:
    employee(int i,int s,string n){
        eId = i;
        eSalary = s;
        eName = n;
    }
};
class company:public employee{
    string cName ,cLocation ,employee;
    public:
    company(string n,string l){
        cName = n;
        cLocation = l;
        employee e1
    }
};
int main() 
{
    company c1("Padandas","Pokhara,chhorepatan");


    return 0;
}