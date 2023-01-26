#include<iostream>
using namespace std;
class base
{
	public:
		int a,b;
		
		void input()
		{
			cout<<"\nenter value of base class :";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"\nsum="<<a+b;
		}
};

class derived : public base
{
	int n;
	public:
		void input1()
		{
			cout<<"\nenter value of n :";
			cin>>n;
		}
		void display1()
		{
			cout<<"\nn :"<<n<<endl<<"sum="<<a+b;
		}
	
};
class derived1: public base
{
	int n1;
	public:
		void input2()
		{
			cout<<"\nenter value of n1:";
			cin>>n1;
		}
		void display2()
		{
			cout<<"\nn1: "<<n1<<endl<<"sum: "<<a+b;
		}
};

main()
{
	derived d;
	derived1 d1;
	
	d.input();
	d.display();
	
	d.input1();
	d.display1();
	
	d1.input();
	d1.display();
	
	d1.input2();
	d1.display2();
	
	
	
}
