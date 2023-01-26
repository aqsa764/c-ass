#include<iostream>
using namespace std;
class account
{
	public:
		int num;
		char name;
		
		void input()
		{
			cout<<"\nname of depositor : ";
			cin>>name;
		}
		void display()
		{
			cout<<"\nname of depositor: "<<name;
		}
};

class derived: public account
{
	int num;
	char name;
	public:
		void input1()
		{
			cout<<"\nenter account number :";
			cin>>num;
		}
		void display1()
		{
			cout<<"\naccount number :"<<num;
		}
};

class derived1: public account, public derived 
{
	int num;
	char name;
	public:
		void input2()
		{
			cout<<"\nenter type of account :";
			cin>>name;
		}
		void display2()
		{
			cout<<"type of account :"<<name;
		}
};

class derived2: public account, public derived, public derived1
{
	int num;
	char name;
	public:
		void input3()
		{
			cout<<"\nenter balance amount :";
			cin>>num;
		}
		void display3()
		{
			cout<<"balance amount :"<<num;
		}
};

main()
{
	derived2 d;
	 d.input();
	d.display();
	
	d.input1();
	d.display1();
	
	d.input2();
	d.display2();
	
	d.display3();
	d.display3();

}
