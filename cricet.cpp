#include<iostream>
using namespace std;
class base
{
	public:
		int run;
		
		void getdata()
		{
			cout<<"enter batsman run: ";
			cin>>run;
		}
};

class derived1 : public base
{
	public:
		int innings;
		
		void setdata()
		{
			cout<<"enter innings :";
			cin>>innings;
		}
		
		void display()
		{
			cout<<"avg :"<<run/innings;
		}
};

main()
{
	derived1 d;
	d.getdata();
	d.setdata();
	d.display();
}

