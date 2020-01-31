#include<iostream>
using namespace std;
main()
{
	int in;
	cout<<"Enter a day ( mon=1-sun=7 ) : ";
	cin>>in;
	switch(in)
	{
		case 1:
			cout<<"Tuesday\nWednesday\nThrusday\nFriday\nSaturday\nSunday";
			break;
		
		case 2:
			cout<<"Wednesday\nThrusday\nFriday\nSaturday\nSunday\nTuesday";
			break;
		
		case 3:
			cout<<"Thrusday\nFriday\nSaturday\nSunday\nTuesday\nWednesday";
			break;
		
		case 4:
			cout<<"Friday\nSaturday\nSunday\nTuesday\nWednesday\nThrusday";
			break;
		
		case 5:
			cout<<"Saturday\nSunday\nTuesday\nWednesday\nThrusday\nFriday";
			break;
		
		case 6:
			cout<<"Sunday\nTuesday\nWednesday\nThrusday\nFriday\nSaturday";
			break;
		
		case 7:
			cout<<"Sunday\nTuesday\nWednesday\nThrusday\nFriday\nSaturday";
			break;
		
		default:
			cout<<"Invalid day";	
	}
}
