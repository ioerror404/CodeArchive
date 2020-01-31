#include<iostream>
using namespace std;
int main()
{
	
	int num, c, limit;
	cout<<"Enter Limit : ";
	cin>> limit;
	for(int num = 2; num <= limit; num++)
	{ 
		c=0;
		for(int i=2; i < num; i++)
		{
			if(num % i == 0)
			{
				c++;
			}
    	}
		if(c == 0)
		{	
			cout<<"Prime Numbers ares."<<num<<endl;
		}
    	else
		{
			cout<<"Composite number ares."<<num<<endl;
		}
    }
}
