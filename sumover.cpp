#include<iostream>
using namespace std;
class sum 
{
	public:
		int ans;
		void display(int a)
		{
			cout<<"enter value of a :";
			cin>>a;
			
			cout<<"enter value of b:";
			cin>>a;
			
			ans=a+a;
			cout<<"\nans :"<<ans;
			
		}
		
		void display(int x,float y)
		{
			cout<<"enter value of x :";
			cin>>y;
			
			cout<<"enter value of y:";
			cin>>y;
			
			ans=x*y;
			cout<<"\nans :"<<ans;
			
		}
		void display(int p,int q,int r)
		{
			cout<<"enter value of p :";
			cin>>p;
			
			cout<<"enter value of q:";
			cin>>q;
			
			ans=p-q;
			cout<<"\nans :"<<ans;
			
		}
};

main()
{
	sum s;
	s.display(10,20);
	s.display(3,7);
	s.display(54,32);
	
}
