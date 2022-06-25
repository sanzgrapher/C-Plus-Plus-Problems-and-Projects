#include <iostream>  
using namespace std;
// Function declaration
int divide(int x, int y = 2);


int main() 
{
    cout << divide(12);
  cout<<endl;
    cout << divide(10, 5);


    return 0;
}
int divide(int x,int y){
    int t;
    t = x / y;
    return t;
}