#include <iostream>  
using namespace std;
class batsman{
    string name;
    int runsMade;
    int no_Of_Fours;
    int no_Of_Sixes;
    public:
        void set( );
        void display();
};
void batsman::set(){
    cout << "\nName  :";
    cin >> name;
    cout << "Runsmade  :";
    cin >> runsMade;
    cout << "Six  :";
    cin >> no_Of_Sixes;
    cout << "Fours  :";
    cin >> no_Of_Fours;
    cout << "\n";
}
void batsman::display()
{
    cout << "\nName         : " << name << endl;
    cout << "Runs         : " << runsMade << endl;
    cout << "Fours Made   : " << no_Of_Fours << endl;
    cout << "Sixs Made    : " << no_Of_Sixes <<"\n" <<endl;
}

// int main()
// {
//     int i, noofPlayers = 2;
//     batsman player[noofPlayers];
//     for (i = 0; i <= 1; i++)
//     {
//         player[i].set();
//     }
//     for (i = 0; i <= 1; i++)
//     {

//         player[i].display();
//     }
//     // player[1].display();

//     return 0;
// }
int main() 
{
    int i ,noofPlayers=3,n;
    cout << "how many players data you want to enter : ";
    cin >> noofPlayers;
    n = noofPlayers;
    batsman player[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter player data no:" << i+1;
        player[i].set();
    }
    for (int j = 0; j < n; j++)
    {
   
        player[j].display();
    }
    // player[1].display();

    return 0;
}