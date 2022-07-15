#include <iostream>
using namespace std;
class Staff
{
protected:
    string name, address, post;

public:
    Staff(string name, string address, string post)
    {
        //				cout<<"Enter Name : "<<endl;
        //				cin>>name;
        //				cout<<"Enter Address : "<<endl;
        //				cin>>address;
        //				cout<<"Enter Post : "<<endl;
        //				cin>>post;

        this->name = name;
        this->address = address;
        this->post = post;
    }

   void display(){
        cout << "name :" << name;
        cout<<endl;
        cout << "address :" << address;
        cout<<endl;
        cout << "post :" << post;
        cout<<endl;cout<<endl;
    }
};

class Non_Teaching : virtual public Staff
{
protected:
public:
    Non_Teaching(string name, string address, string post) : Staff(name, address, post)
    {
    }
    
};

class Teaching : virtual public Staff
{
protected:
    string dept;

public:
    Teaching(string name, string address, string dept) : Staff(name, address, post)
    {
        this->dept = dept;
    }
    void displayt()
    {
        cout << "name :" << name;
        cout << endl;
        cout << "address :" << address;
        cout << endl;
        cout << "depr :" << dept;
        cout << endl;
        cout << endl;
    }
};

int main()
{
    Staff s("saaa", "saaaaas", "ssaf");
    s.display();

    Non_Teaching n("ntaaa", "ntasadasd", "ntaaaaaa");
    n.display();
    Teaching t("aaa", "asadasd", "aaaaaa");
    t.displayt();
    // Admin a("aaa", "asadasd", "aaaaaa", 12);
    return 0;
}