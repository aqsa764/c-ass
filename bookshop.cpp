#include<iostream>
using namespace std;
class bookshop
{
	public:
		char author[20];
		char title[30];
		char publisher[20];
		double price;
		
		void input()
		{
			cout<<"\nenter author :";
			cin>>author;
		
			cout<<"\nenter title :";
			cin>>title;
		
			cout<<"\nenter publisher :";
			cin>>publisher;
		
			cout<<"\nenter price : ";
			cin>>price;
		}
		
		void display()
		{
			cout<<"\nauthor :"<<author;
			cout<<"\ntitle :"<<title;
			cout<<"\npublisher: "<<publisher;
			cout<<"\nprice :"<<price;
		}
 };
 
 main()
 {
 	bookshop b;
 	b.input();
 	b.display();
 	
 }
  
