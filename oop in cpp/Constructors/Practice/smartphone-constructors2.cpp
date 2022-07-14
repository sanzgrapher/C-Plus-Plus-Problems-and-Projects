#include <iostream>
using namespace std;
class smartphone
{
    int price;
    string brand;
    int manufacture_year;

public:
   
    // parameterized constructor
    smartphone(int pr, string br, int mfg_year)
    {
        price = pr;
        brand = br;
        manufacture_year = mfg_year;
    }
    // copy constructor
    smartphone(smartphone &obj){
        manufacture_year = obj.manufacture_year;
    
    }

    void display()
    {
        cout << "\nBrand name : " << brand << "\n"
             << "price : " << price << "\n"
             << "Mfg date : " << manufacture_year << "\n\n";
    }
};
int main()
{
    smartphone samsung(20000, "Samsung_g9", 2020);
    smartphone redemi(samsung);

    samsung.display();
    redemi.display();

    return 0;
}