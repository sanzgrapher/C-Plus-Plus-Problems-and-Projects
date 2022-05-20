#include <iostream>
using namespace std;
class bedroom;
class room
{

	int length;
	int breadth;

public:
	int getlen();

	void setlen(int len);

	int getbr();

	void setbr(int bread);

	int area();
};

// ///////////////////////////////
int room::getlen()
{

	return length;
}
void room::setlen(int len)
{
	length = len;
}
int room::getbr()
{
	return breadth;
}
void room::setbr(int bread)
{

	breadth = bread;
}
int room::area()
{
	return length * breadth;
}
//////////////////////////////////////////////////////

class bedroom : public room
{
	int height;

public:
	void setdata(int l, int b, int h)
	{
		setlen(l);
		setbr(b);
		height = h;
	}
	int volume()
	{
		return getlen() * getbr() * height;
	}
};
int main()
{
	room r1;
	r1.getbr();
	r1.setbr(10);
	r1.getlen();
	r1.setlen(10);
	cout << "Area" <<r1.area() << endl;
}
