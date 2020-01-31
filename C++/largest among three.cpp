#include<iostream>
using namespace std;
int largest(int a,int b,int c);
main()
{
	int x,y,z,w;
	cin>>x;
	cin>>y;
	cin>>z;
	w=largest (x,y,z);
	cout<<"The largest no. is "<<w;
}
    int largest(int j,int k,int l)
    {
    	if(j>k&&j>l)
    	{
    		return j;
		}
		else if(k>j&&k>l)
		{
			return k;
		}
		else
		{
			return l;
		}
	}
