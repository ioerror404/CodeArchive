#include<iostream>
using namespace std;
main()
{
	char ind;
	int g[100],sum=0,avg,x=0,count=0;
	do
	{   pos:
	 	cout<<"Enter student's grade (1-9) :";
		cin>>g[x];
		if(g[x]<1 || g[x]>9)
	    {
	    	cout<<"Invalid Grade!"
	    	goto pos;
	    }
	    cout<<"Add another student (y/n) :";
	    cin>>ind;
	    x++;
	}while(ind!='n'); 
	
	for(int i=0;i<x;i++)
	{
		sum=sum+g[i];
		if(g[i]<=4)
		{
			count++;
		}
	}
	avg=sum/x;
	cout<<"\nThere are "<<count<<" fail students\n";
	cout<<"Average grade is "<<avg;
	
}
