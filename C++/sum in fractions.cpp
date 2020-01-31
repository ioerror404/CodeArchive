#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,sum_of_above,pro_of_below;
	char x,y;
	cout<<"Enter 1st fraction : ";
	cin>>a>>x>>b;
	cout<<endl<<"Enter 2nd fraction : ";
	cin>>c>>y>>d;
	
	sum_of_above=(a*d)+(b*c);
	pro_of_below=b*d;
	
	cout<<endl<<sum_of_above<<"/"<<pro_of_below;
	
}
