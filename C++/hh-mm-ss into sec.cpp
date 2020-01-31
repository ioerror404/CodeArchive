#include<iostream>
using namespace std;
int hms_to_sec(int h,int m,int s);
main()
{   int h,m,s;
	hms_to_sec(h,m,s);
}
int hms_to_sec(int h,int m,int s)
{
	int hr,min,sec;
	int second;
	cout<<"Enter hours :";
	cin>>hr;
	cout<<"Enter minutes :";
	cin>>min;
	cout<<"Enter seconds :";
	cin>>sec;
	second=(hr*60*60)+(min*60)+(s);
	cout<<second<<" seconds";
}
