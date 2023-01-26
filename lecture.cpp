#include<iostream>
using namespace std;
class lecture
{
	public:
		int num;
		char name[20];
		char sub[20];
		char course[15];
	 
	 	void inputdata()
	 	{
	 		cout<<"enter name of lecturer: ";
	 		cin>>name;
	 		
	 		cout<<"enter name of subject : ";
	 		cin>>sub;
	 		
	 		cout<<"enter course : ";
	 		cin>>course;
	 		
	 		cout<<"enter number of lecture :";
	 		cin>>num;
	 }
	 
	 void display()
	 {
	 	cout<<"\nname of lecture: "<<name;
	 	cout<<"\nname of subject: "<<sub;
	 	cout<<"\nname of course :"<<course;
	 	cout<<"\nnumber of lecture :"<<num;
	 }
};

main()
{
	lecture l;
	l.inputdata();
	l.display();
}
