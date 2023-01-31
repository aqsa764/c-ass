#include<iostream>
using namespace std;
class menu
{
	public:
		int n,quantity,price,amount, totalamount=0;
		char addanother,name;
		
		void input()
		{
			do
			{
				cout<<"\n\n-------------------tops tech, fast food-----------------------------------------\n";
				cout<<"please enter your name :";
				cin>>name;
				
				cout<<"what would you like to order?";
				cout<<"\n\n-------------------menu -----------------------------------------\n";
				
				cout<<"\n1. pizza ";
				cout<<"\n2.burgers";
				cout<<"\n3.sandwich";
				cout<<"\n4.rolls";
				cout<<"biryani";
				
				cout<<"please enter your chice :";
				cin>>n;
				
				switch(n)
				{
					case 1:
						cout<<"\nyou have choosen pizza";
						cout<<"\nenter quantity :";
						cin>>quantity;
						price=120;
						break;
						
					case 2:
						cout<<"\nyou have choosen burger";
						cout<<"\nenter quantity :";
						cin>>quantity;
						price=60;
						break;
					
					case 3:
						cout<<"\nyou have choosen sandwich";
						cout<<"\nenter quantity :";
						cin>>quantity;
						price=50;
						break;
					
					case 4:	
						cout<<"\nyou have choosen roll";
						cout<<"\nenter quantity :";
						cin>>quantity;
						price=30;
						break;
						
					case 5:
						cout<<"\nyou have choosen biryani";
						cout<<"\nenter quantity :";
						cin>>quantity;
						price=100;
						break;			
				}
				
				amount=price*quantity;
				
				cout<<"amount :"<<amount;
				totalamount=totalamount+amount;
				
				cout<<"----------------your order------------------";
				cout<<"do you want to place more oreder?  Y & N :";
				
			}while(addanother=='y'||addanother =='Y');
		}
		
		void dispaly()
		{
			cout<<"\nhello"<<name;
			cout<<"your chopice :"<<n;
			cout<<"amount :"<<amount;
			cout<<"total amount :"<<totalamount;
				cout<<"do you want to place more oreder?  Y & N :"<<addanother;
			cout<<"your order will be delivered in 40 minutes \n";
			cout<<"thansks for ordereing from tops tech food.";
		}
};
main()
{
	menu m;
	m.input();
	m.dispaly();
}
