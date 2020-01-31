#include<iostream>
using namespace std;
main()
{
	float old_pence,new_pence,old_shill,new_shill,pound;
	char ch,ch1,ch2;
	do
	{
		cout<<"Enter Pounds : shillings : pence : ";
		cin>>pound>>ch1>>old_shill>>ch2>>old_pence;
	
		new_pence=old_pence/12;
		new_shill=(old_shill+new_pence)/20;
		pound=pound+new_shill;
		
		cout<<endl<<"Decimal pounds ="<<'\x9c'<<pound;
		cin>>ch;
    
	}while(ch !='n');
}
