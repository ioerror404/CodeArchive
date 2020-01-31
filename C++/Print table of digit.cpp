#include<iostream>
using namespace std;
main()
{
	int a,b,c=1;
	cout<<"Table of which number? ";
	cin>>a;
	cout<<"Enter limit of table : ";
	cin>>b;
	while(b>=c)
	{
		cout <<a <<"*" <<c <<"=" <<a*c <<endl;
		c++;
	}
}

