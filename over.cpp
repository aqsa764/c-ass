#include<iostream>
using namespace std;
class a
{
	public:
		void  display()
		{
			cout<<"hello class a";
		}
};

class b: public a
{
	public:
		void display()
		{
			a::display();
			cout<<"\nhello class b";
		}
};

main()
{
	b obj;
	obj.display();
}
