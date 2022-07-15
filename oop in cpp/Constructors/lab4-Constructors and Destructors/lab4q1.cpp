#include <iostream>  
using namespace std;
class student{
    public:
    string name;
    student(string nm="unknown"){
        name = nm;
    }
};
int main() 
{
    student s1("naran"),s2;
    cout << s1.name;
    cout<<endl;
    cout << s2.name;

    return 0;
}