#include<iostream>
using namespace std;
class menu
{
	public:
		int n;
		void input()
		{
			cout<<"--------------------tops tech,fast food--------------------";
			cout<<"please enter your name:";
			cin>>n;
	}
		void display()
		{
			cout<<"hello "<<n;
		}
		
};
class derived :public menu
{
	public:
		int choose;
		void set()
		{
			cout<<"what would you like to order?";
			cin>>choose;
			cout<<"-------------menu---------------";
			cout<<"\n1.pizza";
			cout<<"\n2.burger";
			cout<<"\n3.sandwich";
			
		}
		void display2()
		{
			cout<<"enter your choice :"<<choose;
			cout<<"-------------menu---------------";
			cout<<"\n1.pizza";
			cout<<"\n2.burger";
			cout<<"\n3.sandwich";
			
		}
};
class derived1 :public menu ,public derived
{
	public:
	int quality,amount,price,total_amount=0;
		void get()
		switch;
		{
			case 1:
				cout<<"you have choose pizza";
				cout<<"enter quantity :";
				cin>>quantity;
				price=120;
				break;
				
			case 2:
				cout<<"you have choose burger ";
				cout<<"enter quantity :";
				cin>>quantity;
				price=60;
				break;
			
			case 3:
				cout<<"you have choose sandwich ";
				cout<<"enter quantity :";
				cin>>quantity;
				price=50;
				break;
				
			amount=price*quantity;
			total_amount=total_amount+amount;
		}
		void display3()
		{
			cout<<"pizza";
			cout<<"your quantity"<<quantity;
			cout<<"price 120"<<price;
			
			cout<<"burger";
			cout<<"your quantity"<<quantity;
			cout<<"price 60"<<price;
			
			cout<<"sandwich";
			cout<<"your quantity"<<quantity;
			cout<<"price 50"<<price;
			
			cout<<"amount:"<<amount;
			cout<<"total_amount"<<total_amount;
		}
	
 }; 
main()
{
	derived1 d;
	d.input();
	d.display();
	d.set();
	d.display2();
	d.get();
	d.display3();
