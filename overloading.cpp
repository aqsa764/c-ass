#include<iostream>
using namespace std;
class student
{
	public:
		void display(int a)
		{
			cout<<"value of a:"<<a;
			
		}
		void display(int a,float b)
		{
			cout<<"\nvalue  of a:"<<a;
			cout<<"\nvalue of b:"<<b;
		}
};

main()
{
	student s;
	s.display(10);
	s.display(25,35.5);
}
