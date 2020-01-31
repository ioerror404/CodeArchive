#include<iostream>
using namespace std;
void rev(char str[8]);
int count=0;
main()
{
	char str1[8];
	cout<<"\nEnter a string : ";
	cin.get(str1,8);
	rev(str1);
	
}
void rev(char str[8])
{
	char str2[8];
	for(int i=7,j=7;i>=0;i++)
	{
	    str2[j]=str[i];	
	}
	cout<<str2;
	
}
