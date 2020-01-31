#include<iostream>
using namespace std;
main()
{
	float amm,per;
	cout<<"Ammount : ";
	cin>>amm;
	cout<<"Percentage : ";
	cin>>per;
	float newAmm;
	for( int i = 0; i < 30; i++ ){
		newAmm = (per*amm)/100;
		amm = newAmm + amm;
	}
	cout<<amm;
}
