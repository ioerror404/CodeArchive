#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int array[5];
	int max=0;
	cout<<"Enter Numbers.";
	for(int i=0;i<=4;i++)
	{
		cin>>array[i];
	}
	 max=array[0];
	for(int j=1;j<=4;j++)
	{
		if(array[j]>max)
		{
			max=array[j];
		}
	}
	cout<<"Max number is."<<max;
	
}
