#include<iostream>
using namespace std;
class student
{
	public:
		int no;
		
		void getdata()
		{
			cout<<"enter the roll number :";
			cin>>no;
		}
};

class test
{
	public:
		int marks;
		
		void setdata()
		{
			cout<<"enter marks :";
			cin>>marks;
		}
};
class result : public student , public test
{
	public:
		int result;
		
		void indata()
		{
			cout<<"enter result :";
			cin>>result;
		}
		void display()
		{
			cout<<"result"<<no<<marks<<result;
		}
	
};
main()
{
	result r;
	r.getdata();
	r.setdata();
	r.indata();
	r.display();
}
