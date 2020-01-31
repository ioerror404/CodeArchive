#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char dir;
	int x=0,y=0;                                           //default location 
	int tressure_location_x=3,tressure_location_y=1;         //tressure location
	
	cout<<"\n\t\t  P R E S S   E N T E R   T O   Q U I T\n\n";               //not gonna stop until enter is typed
	cout<<"--------------------------------------------------------------------------------\n\n";
	while(dir!='\r')
	{
		cout<<"\nyour location along x,y cordinates is (x,y) : "<<x<<" , "<<y;
		cout<<"\nPress direction key ( upward(u) , downward(d) , left(l) , right(r) ) : ";
		dir=getche();                                        //takes input
		switch(dir)                                          //condition evaluation
		{
			case 'u':++y;break;
			case 'd':--y;break;
			case 'l':--x;break;
			case 'r':++x;break;
			default:cout<<"\n\n\n T R Y   A G A I N ! you entered an invalid character\n\n";
		}
		cout<<endl;
		if(x==tressure_location_x && y==tressure_location_y)      //check whether location of tressure is found  
		{
			cout<<"\n\n------------------------------------------------------------------------------\n\n";
			cout<<"\n\n\tC O N G R A T U L A T I O N S !   You have found the tressure.\n\n";
			cout<<"\n\n------------------------------------------------------------------------------\n\n";
			break;
		}
		
	}system("pause");
 } 
