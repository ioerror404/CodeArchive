#include<iostream>
using namespace std;
main()
{
double a,b;
char op;
cout<<"Welcome to calculator v1.0 "<<endl;
cout<<"enter 1st number = ";
cin>>a;
cout<<"enter 2nd number = ";
cin>>b;
cout<<"Enter the operator you want to use : ";
	cin>>op;
	if(op=='+')
	{
		cout<<a+b;
	}
	else if(op=='-')
	{
		cout<<a-b;
	}
	else if(op=='*')
	{
		cout<<a*b;
	}
	else if(op=='/')
	{
		cout<<a/b;
	}
	else
	{
		cout<<"Invalid Operator";
	}
}
