#include<iostream>
using namespace std;
main()
{
	int x=0,sum=0;
	int D_in_M[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(x<12)
	{
		sum=sum+D_in_M[x];
		x++;
	}
	cout<<sum;
}
