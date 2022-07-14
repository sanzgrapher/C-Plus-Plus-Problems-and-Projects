#include <iostream>
using namespace std;
class smartphone
{
    int price;
    string brand;
    int manufacture_year;
    public:
    smartphone(int pr, string br, int mfg_year)
    {
        price = pr;
        brand = br;
        manufacture_year = mfg_year;
    }
    void display()
    {
        cout << "\nBrand name : " << brand << "\n"<< "price : " << price << "\n" <<"Mfg date : " <<manufacture_year<<"\n\n";
    }
};
int main()
{
    smartphone samsung(20000, "Samsung_g9", 2020);
    smartphone redemi(21000, "Redemi_g9", 2110);

    samsung.display();
    redemi.display();

    return 0;
}