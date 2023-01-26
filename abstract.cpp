#include<iostream>
using namespace std;
class rbi
{
	public:
		virtual void roi()=0;
		
};

class sbi:public rbi
{
	public:
		void roi()
		{
			cout<<"sbi rate of interest is :8.5";
		}
};

class hdfc: public rbi
{
	public:
		void roi()
		{
			cout<<"hdfc rate of inetrest is:6.5";
		}
};
main()
{
	sbi obj;
	hdfc h;
	
	obj.roi();
	h.roi();
}
