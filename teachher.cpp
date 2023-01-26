#include<iostream>
using namespace std;
class person
{
	int age;
	char name;
	
	public:
		void input()
		{
			cout<<"enter name :";
			cin>>name;
			
			cout<<"enter age :";
			cin>>age;
		}
		 
		void display()
		{
			cout<<name<<age;
		}
};

class student
{
	int percentage;
	
	public:
		
		void input1()
		{
			cout<<"\nenter student percentage :";
			cin>>percentage;
		}
		void display1()
		{
			cout<<"\npercentage :"<<percentage;
		}
};
 class teacher : public person,public student 
 {
 	int salary;
 	public:
 		void input2()
 		{
 			cout<<"\nenter salary: ";
 			cin>>salary;
 			
		 }
		 void display2()
		 {
		 	cout<<"\salary :"<<salary;
		 }
 };
 
 main()
 {
 	teacher t;
 	t.input();
 	t.display();
 	
 	t.input1();
 	t.display1();
 	
 	t.input2();
 	t.display2();
 }
