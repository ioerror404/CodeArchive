#include<iostream>
using namespace std;
main()
{
	int x,y;
	for(x=1;x<=7;x++)
	{
		y=x;
		while(y<=7)
		{
			cout<<"*";
			y++;
		}
		cout<<endl;
	}
}
