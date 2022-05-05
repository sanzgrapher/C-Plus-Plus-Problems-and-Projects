#include <iostream>
using namespace std;

// created class
// syntax
/*/////////////////
class class_name{

datatype variablename;

};

*///////////
class hero{
    public:
        
        int health;
        int level;
};

int main()
{
// creating object
//syntax
/*
class_name objectname;
*/
hero rajesh;


// acessing the class
cout << "Health is " << rajesh.health << endl;


// cout << sizeof(h1) << endl;

return 0;
}