#include<iostream>
using namespace std;
main()
{   char a,b,d,e;
	int countY=0,sumBM=0,sumCM=0,countD=0,countL=0,Grand_Total;
	float B_year,B_month,B_day,C_year,C_month,C_day,totalY;
	int DaysInMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"Enter your birth date : ";
	cin>>B_day>>a>>B_month>>b>>B_year;
	cout<<"Enter current date : ";
	cin>>C_day>>d>>C_month>>e>>C_year;
	B_year++;
	for(B_year;B_year<C_year;B_year++)
	{
		countY++;
		if(countY%4==0)
		{
			countL++;
		}
	}
	totalY=countY*365+countL;
	--B_month;
	for(int j=B_month;j<12;j++)
	{
		sumBM=sumBM+DaysInMonth[j];
	}
	sumBM=sumBM-B_day;
	for(int k=C_month-1;k>-1;k--)
	{
		sumCM=sumCM+DaysInMonth[k];	
	}
	sumCM=sumCM-C_day;
	Grand_Total=totalY+sumCM+sumBM;
	cout<<"You have spent "<<Grand_Total<<" days of your life.\n";
	Grand_Total=(((Grand_Total*24)*60)*60);
	cout<<"You have spent "<<Grand_Total<<" seconds of your life.";
}
