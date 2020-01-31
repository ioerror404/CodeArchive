#include<iostream>
using namespace std;
main()
{
	char ch;
    do
	{
		int response;
		float temp;
		
		cout<< "1-fahrenhit to celcius,"<<"2-celcius to fahrenhit:";
		cin>>response;
				
		if(response!=1 && response!=2)
		{
			cout<<"Entered incorrect number.\nDo it again(y/n):";
			cin>>ch;
		}
		else if(response==1)
		{
			cout<<"Enter temp in fahrenhit : ";
			cin>>temp;
			cout<<"In celcius the temp is "<<5.0/9.0*(temp-32);
			cout<<"Do it again(y/n):";
			cin>>ch;
		}  
		else if(response==2)
		{
			cout<<"Enter temp in celcius : ";
			cin>>temp;
			cout<<"In fahrenhit the temp is "<<9.0/5.0*(temp+32);
			cout<<"Do it again(y/n):";
			cin>>ch;
		}
	   
	}while(ch=='y');
}
