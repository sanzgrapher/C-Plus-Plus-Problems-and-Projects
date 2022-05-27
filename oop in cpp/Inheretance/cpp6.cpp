#include<iostream>

using namespace std;

class student{
	protected:
	int rollno;
	public:
		void setrollno(){
			int r;
			cout<<"enter roll no"<<endl;
			cin>>r;
			rollno=r;
		}
		int displayrollno(){
			cout<<"the roll no is "<<rollno<<endl;
		}
};
class theory : virtual public student{
	protected:
	int sub1;
	int sub2;
	public:
		public:
		void setmarkstheory(){
			int r, r1;
			cout<<"enter marks in theory of sub 1  "<<endl;
		 cin>>r;
		 cout<<"enter marks in theory of sub 2 is "<<endl;
		cin>>r1;
		sub1=r;
		sub2=r1;
		}
		int displaymarkstheory(){
		 cout<<"marks in theory of sub 1 is "<<sub1<<endl;
		 
		 cout<<"marks in theory of sub 2 is "<<sub2<<endl;
}
};
class practical : virtual public student{
	protected:
	int ssub1;
	int ssub2;
	public:
		public:
		void setmarkspractical(){
			int r, r1;
			cout<<"enter marks in practical of sub 1  "<<endl;
		 cin>>r;
		 cout<<"enter marks in practical of sub 2 is "<<endl;
		cin>>r1;
		ssub1=r;
		ssub2=r1;
		}
		int ddisplaymarkspractical(){
		 cout<<"marks in practical of sub 1 is "<<endl;
		 
		 cout<<"marks in practical of sub 2 is "<<endl;
}
};
class result : public theory, public practical{
	protected:
	int total1;
	int total2;
	public:
		void totalmarks(){
			total1=sub1+ssub1;
			total2=sub2+ssub2;
			cout<<"total in sub1 is "<<total1<<endl;
			cout<<"total in sub2 is "<<total2<<endl;
			cout<<"the total marks as a whole is "<<total1+total2;
		}
};

int main(){
	result r1;
	r1.setrollno();
	r1.setmarkspractical();
	r1.setmarkstheory();
	r1.displayrollno();
	r1.displaymarkstheory();
	r1.ddisplaymarkspractical();
	r1.totalmarks();
	return 0;
}