#include<iostream>
using namespace std;
class div
{
	public:
		int division;
		
		div()
		{
			division=0;
		}
		div(int a,int b)
		{
			division=a/b;
			
		}
		void display()
		{
			cout<<"\nans :"<<division;
		}
};

main()
{
	div d;
	div d1(34,23);
	
	d.display();
	d1.display();
}
