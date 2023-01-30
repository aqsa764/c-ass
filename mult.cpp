#include<iostream>
using namespace std;
class mult
{
	public:
		int multiplication;
		
		mult()
		{
			multiplication=0;
		}
		mult(int a,int b)
		{
			multiplication=a*b;
		}
		void  display()
		{
			cout<<"ans :"<<multiplication;
		}
};

main()
{
	mult m;
	mult m1(23,4);
	
	m.display();
	m1.display();
}
