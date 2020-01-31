#include<iostream>
using namespace std;
main()
{
	for(int row=1;row<11;row++)
	{
		for(int col=1;col<11;col++)
		{
			if(row==1 || row==10 || col==1 || col==10)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
