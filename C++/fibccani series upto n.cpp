#include<iostream>
using namespace std;
main()
{
	int limit,next=0,last=1;//user given limit,next to last term and last term
	cout<<"Enter last term : ";
	cin>>limit;
	while(last<=limit)
	{
		cout<<last<<" , ";
		int sum=last+next;
		next=last;
		last=sum;
	}
}
