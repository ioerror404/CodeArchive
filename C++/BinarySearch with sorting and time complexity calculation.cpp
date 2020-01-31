//library for high resolution time calculation
#include<time.h>
#include<iostream>
using namespace std;


this method will sort the array
void sort()
{
	for(int i=0;i<limit;i++)
	{
		for(int j=i+1;j<limit;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


main()
{
    int count = 0;    
	int limit,var;
	cout<<"Enter size of array : ";
	cin>>limit;
	cout<<"Enter num to find : ";
	cin>>var;
	int arr[limit];

	for(int i=0;i<limit;i++)					
	{
		arr[i] = i;                       
	}
	//call to method where sorting will happen
	//sort();
	// Record start time
    
	clock_t begin, end_t;
    double time_spent;
    begin = clock();
    
	int start=0,end=limit-1,mid, j=1;
	while(start<=end)
	{
		mid = (start + end)/2;
		if(arr[mid] == var)
		{
			cout<<endl<<var<<" found at index "<<mid;
			count++;
			break;
		}
		else if(var < arr[mid])
		{
			end = mid - 1;
			count++;
		}
		else if(var > arr[mid])
		{
			start = mid + 1;
			count++;
        }
	}

	
	// Record end time
    end_t = clock();
    
	//this will convert clock ticks into seconds
	time_spent = ((double)(end_t - begin) / (double)(CLOCKS_PER_SEC))/1000;
	cout<<endl<<count;
    
}
