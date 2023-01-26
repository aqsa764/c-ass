#include<iostream>
using namespace std;
class base
{
	int a,b,ans;
	
	public:
		void input()
		{
			cout<<"enter value base class :";
			cin>>a>>b;
			
			ans=a+b;
			
		}
		
		void display()
		{
			cout<<"\naddition : "<<ans;
			
		}
};

class derived 
{
	int a,b,ans;
	
	public:
		void input1()
		{
			cout<<"\nenter value of derived class : ";
			cin>>a>>b;
			
			ans=a*b;
			
		}
		void display1()
		{
			cout<<"\nmultiplication : "<<ans;
		}
};

class derived1 : public base, public derived 
{
	int a,b,ans;
	
	public:
		void input2()
		{
			cout<<"enter value of derived class :";
			cin>>a>>b;
			
			ans=a-b;
		}
		
		void display2()
		{
			cout<<"\nsub : "<<ans;
		}
};

main()
{
	derived1 d;
	d.input();
	d.display();
	
	d.input1();
	d.display1();
	
	d.input2();
	d.display2();
}
