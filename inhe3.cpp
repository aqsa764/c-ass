#include<iostream>
using namespace std;
class base
{
	public:
		int x;
};

class derived1 : virtual public base
{
	public:
		int y;
};
class derived2: virtual public base
{
	public:
		int z;
};
class derived: public derived1,public derived2
{
	public:
		void mult()
		{
			cout<<"ans :"<<x*y*z;
		}
};

main()
{
	derived d;
	d.x=10;
	d.y=5;
	d.z=2;
	d.mult();
}
