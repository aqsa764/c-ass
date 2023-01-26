#include<iostream>
using namespace std;
class sum
{
	public:
		int simple_interest,principle,rate,time;
		
		sum()
		{
			cout<<"enter principle :";
			cin>>principle;
			
			cout<<"enter rate :";
			cin>>rate;
			
			cout<<"enter time:";
			cin>>time;
			
			simple_interest=(principle*rate*time)/100;
		}
		
		void display()
		{
			cout<<endl<<simple_interest;
		}
};

main()
{
	sum s;
	s.display();
}
