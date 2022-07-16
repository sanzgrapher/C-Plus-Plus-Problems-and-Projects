#include <iostream>  
using namespace std;
class Room {
    protected:
    int length, breadth;
    public:
    int area(){
        cout << "area : " << length * breadth;
        cout<<endl;
        return 0;
    }
};
class bedRoom:public Room{
    private:
    int height;

public:
    void setData(int len, int br ,int he)
    {
        length = len;
        breadth = br;
        height = he;
        }
        int volume(){
            cout << "Volume : " << length * breadth * height;

            return 0;
        }
};
int main() 
{
    bedRoom b1;
    b1.setData(10, 10,10);
    b1.area();
    b1.volume();

    return 0;
}