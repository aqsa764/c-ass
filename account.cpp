#include<iostream>
using namespace std;
class account
{
	public:
		int num,balance;
		char name[20];
		char type[20];
		
		void inputdata()
		{
			cout<<"enter name of depositor :";
			cin>>name;
			
			cout<<"enter account number :";
			cin>>num;
			
			cout<<"enter type of account :";
			cin>>type;
			
			cout<<"enter balance account :";
			cin>>balance;
		
		}
		void display()
		{
			cout<<"\nname of depositor :"<<name;
			cout<<"\naccount number :"<<num;
			cout<<"\ntype of account:"<<type;
			cout<<"\nbalace account:"<<balance;
		}
};

main()
{
	account a;
	a.inputdata();
	a.display();
}
