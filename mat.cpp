#include<iostream>
using namespace std;
main()


{
	int size,i,arr1[10],arr2[10],add[10];
		
		{
			cout<<"\nenter the array item :";
			cin>>size;
			
			cout<<"enter first array = ";
			for(i=0;i<size;i++)
			{
				cin>>arr1[i];
			}
			cout<<"\nenter second array =";
			for(i=0;i<size;i++)
			{
				cin>>arr2[i];
			}
			for(i=0;i<size;i++)
			{
				add[i]=arr1[i]+arr2[i];
				cout<<arr1[i]<<"+"<<arr2[i]<<"="<<add[i]<<"\n";
			}
			cout<<"\nresult :";
			for(i=0;i<size;i++)
			{
				cout<<"add[i]"<<" ";
			}
			
	

}
}
