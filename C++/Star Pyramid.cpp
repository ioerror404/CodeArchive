#include<iostream>
using namespace std;
main()
{
	for(int a=0; a < 5; a++)
	{
		for(int b=0; b < a+1; b++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
