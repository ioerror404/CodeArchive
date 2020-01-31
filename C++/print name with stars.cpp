#include<iostream>
using namespace std;
main()
{
	for(int count=1;count<6;count++)
	{
		if(count==1)
		{
			cout<<"**   ** *  * **** *  * * ****";
			cout<<endl;
		}
		else if(count==2)
		{
			cout<<"* * * * *  * *    *  * * *   ";
			cout<<endl;
		}
		else if(count==3)
		{
			cout<<"*  *  * *  * * ** **** * ****";
			cout<<endl;
		}
		else if(count==4)
		{
			cout<<"*     * *  * *  * *  * *    *";
			cout<<endl;
		}
		else
		{
			cout<<"*     * **** **** *  * * ****";
			cout<<endl;
		}
		
	}
}
