#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float plus,minus,a,b,c;
	cout<<"enter the values : ";
	cin>>a>>b>>c;
	b=(-1)*b;
	plus=((b*b)-(4*a*c));
	plus=sqrt(plus);
	minus=plus;//the value of plus will be equal to minus until line 10.
	plus=(b+plus);
	a=2*a;
	plus=plus/a; 
	
	minus=(b-minus);
	minus=minus/a;
	cout<<"The solution of equation is: ("<<minus<<","<<plus<<")";
}
