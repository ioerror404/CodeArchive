#include<iostream>
#include<fstream>
using namespace std;
void display(char a)
{
	for(int i=0;i<80;i++)
	{
		cout<<a;
	}cout<<endl;
}
void list(char *names[10][10],int *marks[10],int *roll[10])
{   float avg=0;int loc=-1,max=0;char a,b;
	for(int i=0;i<10;i++)
	{
		avg=*marks[i]+avg;
		if(*marks[i]>max)
		{
			max=*marks[i];
			loc=i;
		}
	}avg=avg/10;
	
	cout<<"Enter your desired location along name and extension e.g(\"E:\\name.txt \n" ;
	cin>>a;
	ofstream list("a");
	b=*names[loc][10];
	for(int i=0;i<10;i++)
	{
	  list<<*names[i]<<"\t\t\t"<<*roll[i]<<"\t\t\t"<<*marks[10]<<endl;
    }
    for(int i=0;i<80;i++)
    {
    	cout<<"-";
    }
    list<<"\nAverage marks are : "<<avg<<endl<<b<<" got the maximum marks "<<max;
    
}
main()
{   
	cout<<"Enter names , marks and roll no of students. \n\n";
	display('-');
	cout<<"N A M E\t\t\tR O L L  N O.\t\t\tM A R K S\n";
	char name[10][10];int mark[10],rollNo[10];
	for(int i=0;i<10;i++)
	{
		cin>>name[i]>>mark[i]>>rollNo[i];
	}
	list(&name,&mark,&rollNo);
}
