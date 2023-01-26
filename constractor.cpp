#include<iostream>
using namespace std;
class student
{
	int id;
	char name[25];
	double fees;
	
	public:
		student();
		void display();
};

student::student()
{
	cout<<"enter id: ";
	cin>>id;
	
	cout<<"enter name: ";
	cin>>name;
	
	cout<<"enter fees :";
	cin>>fees;
}

void student::display()
{
	cout<<endl<<id<<"\t"<<name<<"\t"<<fees;
	
}
main()
{
	student s;
	s.display();
}
