#include<iostream>
using namespace std;
main()
{
	int a,fact=1;
	cout<<"Enter the number for which you want to get factorial =";
	cin>>a;
	while(a>0)
	{
		fact=fact*a;
		a--;
	}
	
	cout<<fact;
}
