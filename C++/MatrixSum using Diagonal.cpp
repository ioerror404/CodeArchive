#include<iostream>
using namespace std;

main()
{
    int sum=0;
	int matrix[3][3];
	//adding some values to matrix
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
	    {
	     	matrix[i][j] = 10*(i+j);
	    }
	}
	  
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		    if(i == j)
		    {
		    	sum = sum + matrix[i][j]
			}
		}
	}
	cout<<sum<<endl;
	cout<<"cross check : "<<sum1<<endl;  
	system("pause");  
}
