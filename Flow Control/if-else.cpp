#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "enter your age";
    cin >> age;
    if(age<18){
        cout << "you are eligible to vote";
    }else{
        cout << "your age doesnopt meet the requirements ";
    }
    return 0;

}