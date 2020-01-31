#include<iostream>
using namespace std;
main()
{
	int total[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int found[10]={1,3,5,7,9,11,13,15,17,19};
    int lenTotal = sizeof(total)/4;
    int lenFound =sizeof(found)/4;
	
	for(int i=0;i<lenFound;i++)
	{
		for(int j=0;j<lenTotal;j++)
		{
			if(found[i] == total[j])
			   total[j] = 0;
		}
	}
	
	
	for(int i=0;i<lenTotal;i++)
    {
    	if(total[i] != 0)
    	   cout<<"\t"<<total[i];
	}
	 	
	
	

}
