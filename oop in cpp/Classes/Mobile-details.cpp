
#include<iostream>
using namespace std;
class smartphone{
    public:
    int price;
    string brand;
    void insertdata(int a, string b);
    void printdata();
};
void smartphone::insertdata(int a, string b)
{
    price = a;
    brand = b;
}
void smartphone::printdata()
{
    cout << "price : " << price << endl;
    cout << "Brandname : " << brand << endl;
}
int main(){
    smartphone s1, s2;
    s1.insertdata(199, "samsung");
    s1.printdata();
    s2.insertdata(1099, "dsamsung");
    s2.printdata();
}
// inside the call function 

// #include <iostream>
// using namespace std;
// class smartphone
// {
// public:
//     int price;
//     string brand;
//     void insertdata(int a, string b)
//     {
//         price = a;
//         brand = b;
//     }
//     void printdata()
//     {
//         cout << "price : " << price << endl;
//         cout << "Brandname : " << brand << endl;
//     }
// };
// int main()
// {
//     smartphone s1, s2;
//     s1.insertdata(199, "samsung");
//     s1.printdata();
//     s2.insertdata(1099, "dsamsung");
//     s2.printdata();
// }