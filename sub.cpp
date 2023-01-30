#include<iostream>
using namespace std;
class sub
{
	public:
		int subtraction;
		
		sub()
		{
			subtraction=0;
		}
		sub(int a,int b)
		{
			subtraction=a-b;
			
		}
		void display()
		{
			cout<<"ans :"<<subtraction;
		}
};

main()
{
	sub s;
	sub s1(34,23);
	
	s.display();
	s1.display();
}
