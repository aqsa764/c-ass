#include<iostream>
using namespace std;
class add
{
	public:
		int addition;
		
		add()
		{
			addition=0;
		}
		
		add(int a,int b)
		{
			addition=a+b;
		}
		void display()
		{
			cout<<"\naddition :"<<addition;
		}
};

main()
{
	add a;
	add a1;
	
	a.display();
	a1.display();
}
