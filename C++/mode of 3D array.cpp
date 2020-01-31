#include<iostream>
using namespace std;
main()
{
	int arr[2][2][2];
	int count=0,temp,mode = 0;
    for(int i=0;i<2;i++)
    {
		for(int j=0;j<2;j++)
    	{
			for(int k=0;k<2;k++)
    		{		
				count++;
    			cout<<"Enter value "<<count<<endl;
				cin>>arr[i][j][k];
			}
		}
	}
     
	for(int i=0;i<2;i++)
    {
		for(int j=0;j<2;j++)
    	{
			for(int k=0;k<2;k++)
    		{
    			if(arr[i][j][k] == arr[i+1][j+1][k+1])
    			{
    				mode=arr[i][j][k];
    			}
    		}
		}
	}
	
     cout<<mode;
}
