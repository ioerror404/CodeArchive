#include<iostream>
using namespace std;
main()
{
	int z;
	cout<<"Enter limit : ";
	cin>>z;
	for(int i=1;i<=z;i++)
	{
		int x=1;
		cout<<x;
		for(int j=2;j<=i;j++)
		{
			++x;
			cout<<x;
		}
		cout<<endl;
	}
}
