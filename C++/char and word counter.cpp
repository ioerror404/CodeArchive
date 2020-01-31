#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int wdcount=1,chcount=0;
	char ch;
	cout<<"Enter a pharase  : ";
	while(ch!='\r')
	{
		ch=getche();
		if(ch==' ')
		{
			wdcount++;
		}
		else
		{
			chcount++;
		}
	}
	cout<<"\nWords="<<wdcount<<"\nCharacters="<<chcount-1;
	
}
