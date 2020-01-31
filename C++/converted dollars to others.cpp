#include<iostream>
using namespace std;
main()
{
	float dollar;
	cout<<"Enter ammount in dollars :";
	cin>>dollar;
	
	cout<<endl<<"In pounds it is equivalent to "<<dollar*1.487<<endl<<endl;
	cout<<"In franc it is equivalent to "<<dollar*0.172<<endl<<endl;
	cout<<"In deutschemark it is equivalent to "<<dollar*0.584<<endl<<endl;
	cout<<"In yen it is equivalent to "<<dollar*0.00955<<endl<<endl;
	
	system("pause");
}
