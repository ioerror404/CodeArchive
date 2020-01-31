#include<iostream>
using namespace std;
bool multiple(int *x,int *y)
{
	bool z;int t;
	if(*x%*y==0)
	{
		z=true;
	}
	else if(*y%*x==0)
	{
		z=true;
		t=*x;*x=*y;*y=t;
	}
	else
	{
		z=false;
	}
	return z;
}
main()
{
	int a,b;bool r;
	cin>>a>>b;
	r=multiple(&a,&b);
	if(r==true)
	{
		cout<<a<<" is multiple of "<<b;
	}
	else if(r==false)
	{
		cout<<a<<" is not a multiple of "<<b;
	}
}
