#include<iostream>
using namespace std;
float cirarea(float rad)
{
	float A;
	A=(rad*rad)*3.14;
    cout<<A;
}
main()
{
	int r;
	cin>>r;
	cirarea(r);
	
}
