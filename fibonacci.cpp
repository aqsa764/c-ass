#include<iostream>
using namespace std;
main()
{
	int i,n,t1=0,t2=1,t3;
	
	t3=t1+t2;
	
	cout<<"enter number : ";
	cin>>n;
	
	cout<<"fibonacci sereies ="<<t1,t2;
	
	for(i=3;i<=n;i++)
	{
		cout<<"\n fibonacci :"<<t3;
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
}
