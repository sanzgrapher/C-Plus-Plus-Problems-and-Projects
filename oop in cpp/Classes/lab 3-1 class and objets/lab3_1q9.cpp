#include <iostream>  
using namespace std;
class student{
    string sName;
    int total=0;
    int tMax;
    int avg;

public:
    int marks[5];
    void assign();
    void compute();
    void display();
};

void student::assign(){
    cout << "Name" << endl;
    cin >> sName;
    cout << "marks of 5 subs";
    for (int i; i < 5; i++)
    {
        cout << "sub" << i + 1 << endl;
        cin >> marks[i];
       
    }
  
}
void student::compute(){
    
    for (int i=0; i < 5;i++){
        total = total + marks[i];

        cout << total;
        cout << marks[i];
    }
    avg = total / 5;

    for (int i = 0; i < 5; ++i)
    {

        // Change < to > if you want to find the smallest element
        if (marks[0] < marks[i])
            marks[0] = marks[i];
    }

    



}
void student::display(){
    cout << "\nname : " <<sName;
    cout << "Total : " << total;
    cout << "Average : " << avg;
    cout << endl<< "Largest element = " << marks[0];
}
int main() 
{
    student s1;
    s1.assign();
    s1.compute();
    // cout << s1.marks[1] + s1.marks[1];
    s1.display();

    return 0;
}