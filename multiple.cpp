#include<iostream>
using namespace std;
class base
{
	int age,salary;
	char name;
	
	public:
		void input()
		{
			cout<<"enter name :";
			cin>>name;
		}
		void dispaly()
		{
			cout<<"\nname :"<<name;
		}
};
class derived
{
	int salary;
	public:
		void input1()
		{
			cout<<"enter salary :";
			cin>>salary;
			
		}
		void display1()
		{
			cout<<"\nsalary :"<<salary;
		}
};
class derived1: public base,public derived 
{
	int age;
	
	public:
		void input2()
		{
			cout<<"enter age :";
			cin>>age;
			
		}
		void display2()
		{
			cout<<"\nage:"<<age;
		}
};

main()
{
	derived1 d;
	d.input();
	d.dispaly();
	
	d.input1();
	d.display1();
	
	d.input2();
	d.display2();
	
	
}
