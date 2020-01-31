#include<iostream>
using namespace std;
main()
{
	float year,inRate,ammount,x,y;
	cout<<"Enter ammount : ";
	cin>>ammount;
	cout<<"Enter interst rate per year : ";
	cin>>inRate;
	x=inRate/100;
	cout<<"Enter the time in years : ";
	cin>>year;
	for(int i=0;i<year;i++)
	{
		y=x*ammount;
		ammount=y+ammount;
	}
	cout<<ammount;
}
