#include<iostream>
using namespace std;
class employee{
    char name[30];
    float salary;
    public:
        void getData(void);
        void putData(void);
};

void employee::getData(void){
    cout << "Enter Name" << endl;
    cin >> name;
    cout << "salary" << endl;
    cin >> salary;
}

void employee::putData(void){
    cout << "Name : " <<name << endl;
    cout << "salary : " << salary << endl;

}
int main(){
    employee workers[3];
    employee managers[3];
    employee admins[3];

    for (int i = 0; i < 3;i++){
        workers[i].getData();
    }
    for (int i = 0; i < 3; i++)
    {
        managers[i].getData();
    }
    for (int i = 0; i < 3; i++)
    {
        admins[i].getData();
    }
    for (int i = 0; i < 3;i++){
        workers[i].getData();
    }
    for (int i = 0; i < 3; i++)
    {
        managers[i].getData();
    }
    for (int i = 0; i < 3; i++)
    {
        admins[i].getData();
    }
    //
    for (int i = 0; i < 3; i++)
    {
        workers[i].putData();
    }
    for (int i = 0; i < 3; i++)
    {
        managers[i].putData();
    }
    for (int i = 0; i < 3; i++)
    {
        admins[i].putData();
    }
}