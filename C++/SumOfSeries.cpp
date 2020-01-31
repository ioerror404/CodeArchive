#include<iostream>
using namespace std;
main()
{
	int limit;
	cout<<"Enter Limit : ";
	cin>>limit;
	
	float sum=0;
	for(int i = 1; i <= limit; i++)
	{
		sum = sum + ( 1 / i );
		
		if(i == 1)
		{
			cout<<"\n 1";
		}
		else if(i == n)
		{
			cout<<" + 1/"<<i;
		}
		else 
		{
			cout<<" + 1/"<<i;
		}
	
	}
	cout<<"\nSUM="<<sum;
}
