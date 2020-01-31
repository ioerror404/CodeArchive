#include<iostream>
using namespace std;
main(){
	
	int sum = 0;
	int limit = 0;
	cout<<"Enter limit : ";
	cin>>limit;
	
	cout<<"NUMBER \t::\t SUM"<<endl;
	for(int i = 0; i < limit + 1; i++)
	{
		if(i % 3 == 0 && i % 5 == 0) 
		{
			sum = sum + i;
			cout<<i<<" \t::\t "<<sum<<endl;
		}	
	}
	
	cout<<"SUM = "<<sum;		
}
