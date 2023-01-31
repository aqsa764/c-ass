#include<iostream>
using namespace std;
main()
{
	int i,j,row,column;
	cout<<"enter matrix  =";
	cin>>i>>j;
	
	
	{
		int matrix[i][j];
		{
			cout<<"enter item :";
			for(row=0;row<i;row++)
			{
				for(column=0;column<i;column++)
				{
					cin>>matrix[i][j];
				}
			}
			cout<<"\nresult :";
			for(row=0;row<i;row++)
			{
				cout<<"\n";
				for(column=0;column<j;column++)
				{
					if(row>=column)
					{
						cout<<matrix[i][j];
					}
					else {
						cout<<"0";
					}
				}
			}
		}
	}
}
