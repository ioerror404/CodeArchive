#include<iostream>
using namespace std;
int limit,locMax,locMin;
float avg;
struct student
{
	int r[5],m[5];
	char n[5][10];
}
void func(int *rNo[5],int *marks[5],char *name[5][10])
{int max=0,sum=0,min=0;
for(int i=0;i<5;i++)
{
	if(max<*marks[i]);
	{
		max=*marks[i];
		locMax=i;
	}
	sum=sum+*marks[i];
	if(min>*marks[i])
	{
		min=*marks[i];
		locMin=i;
	}
}avg=sum/5;
	
}
main()
{
	student s;
	for(int i=0;i<5;i++)
	{
		cin>>s.n[i]>>s.r[i]>>s.m[i];
	}
	func(&s.r,&s.m,&s.n);
}

