#include<iostream>
using namespace std;
float retail(float wCost,float mUp)
{
	float rPrice;
	rPrice=(mUp/100)*wCost;////F O R M U L A used is /////////// ( M A R K U P / 100 ) * w h o l e c o s t \\\//
	rPrice=rPrice+wCost;
	return rPrice;
}
main()
{
	float wC,mU,rP;
	do
	{
	cout<<"Enter Wholesale cost : ";
	cin>>wC;
	cout<<"Enter markup percentage : ";
	cin>>mU;
    }while(wC<0&&mU<0);
	rP=retail(wC,mU);
	cout<<"Retailer price of product is "<<rP;
}
