#include<iostream>
using namespace std;
class interest
{
	public:
		int p,i,r,simple_interest;
		
		interest()
		{
			cout<<"enter value of p :";
			cin>>p;
			
			cout<<"enter value of i : ";
			cin>>i;
			
			cout<<"enter value of r:";
			cin>>r;
			
			simple_interest=p*i*r/100;
		}
		void display()
		{
			cout<<"ans :"<<simple_interest;
		}
};

main()
{
	interest i;
	i.display();
}
