#include<iostream>
#include<ctime>
using namespace std;

void seqSearch(int limit,int var)
{

	int arr[limit],value,loc=-1;
	
	for(int i=0;i<limit;i++)					
	{
		cout<<"Enter value : ";
		cin>>array[count];                       
	}
    
	for(int i=0;i<limit;i++)
	{
		if(var == arr[i])
		{
			loc = i;
			value = arr[i];
		}
	}
	
	
	if(loc !=-1)
	{
	    cout<<endl<<value<<" found at index "<<loc<<endl;
    }
    else
    {
    	cout<<endl<<"value not  found. "<<endl;
    }
    
}

main()
{
	int limit,var;
	cout<<"Enter size of array : ";
	cin>>limit;
	cout<<"Enter num to find : ";
	cin>>var;
	seqSearch(limit,var);
}

