#include<iostream>
using namespace std;

class BinarySearch{
	int array[100],n,last,first,mid;
	public:
	void input(int SIZE)
	{
		int count=0;
		while(count<SIZE)
		{
			cout<<"Enter value : ";
			cin>>array[count];
			count++;
		}
		return;
	}
		
	void bSearch(int val_to_find,int size)
    { 
	   last = size-1;
	   first = 0;
	   mid = (first+last)/2; 
        	while(last<=first)
        	{
        		if(array[mid] == val_to_find)
        		{
        			cout<<val_to_find<<" found at "<<mid<<" and at pos "<<mid+1;
        			break;
				}
				else if(array[mid] < val_to_find)
				{
					first = mid +1;
				}
				else
				{
					last = mid-1;
				}
				mid = (first+last)/2;
        		
			}
		if(first>last)
		{
			cout<<"not found";
		}	
    }
	
};
main()
{
	BinarySearch b;
	cout<<"Enter size";
	int  size;
	cin>>size;
	b.input(size);
	cout<<"Enter value to find : ";
	int n;
	cin>>n;
	b.bSearch(n,size);
	
}
