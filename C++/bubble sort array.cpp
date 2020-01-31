#include<iostream>
using namespace std;
main()
{
	int arr[8]={2,5,4,9,11,25,41,9};
	int temp,flag;
	for( ; ;)
	{
		for(int i=0;i<8;i++)
		{
			flag=0;
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
		
	}
	cout<<"Sorted array is ARRAY{ ";
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<" , ";
	}
	cout<<"}";
}
