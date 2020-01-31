#include<iostream>
using namespace std;
class Sort
{
int arr[100];
public:
void sort(int limit)
{
	for(int i=0;i<limit;i++)
	{
		for(int j=i+1;j<limit;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	print(limit);
}
void input(int SIZE)
	{
		int count=0;
		while(count<SIZE)
		{
			cout<<"Enter value : ";
			cin>>arr[count];
			count++;
		}
		return;
	}
	void print(int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<"\t";
		}
	}
};
main()
{
	Sort s;
	cout<<"Enter size";
	int  size;
	cin>>size;
	s.input(size);
	s.sort(size);
}	
