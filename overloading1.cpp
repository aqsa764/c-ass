#include<iostream>
using namespace std;
class sum
{
	public:
		void display(int l,int b,float r)
		{
		
		cout<<"enter length and breadth of reactangle :";
		cin>>l>>b;
		
		cout<<"enter radius of circle:";
		cin>>r;
		
		
		cout<<"\narea of rectangle:"<<area(l,b);
		cout<<"\narea of circle :"<<area(r);
		}
		
		void display(int l,int b)
		{
			sum(l*b);
		}
		float area(float r)
		{
			sum(3.14*r*r);
		}
		
};

main()
{
	sum s;
	s.display();
	s.display();
	s.area();
}
