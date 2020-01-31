#include<iostream>
#include<cstring>

using namespace std;
main(){
	string bin = "";
	int num;
	cout<<"Number : ";
	cin>>num;
	int i = 0;
	
	while(num > 0){
		int digit = num%2;
		bin = bin.concat(digit);
		num = num/2;
	}
	cout<<bin;
}
