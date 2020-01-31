#include<iostream>
#include<cmath>
using namespace std;
main(){
	
	string bin;
	int dec = 0;
	getline(cin, bin, '\n');
	int len = bin.length();
	int pw = len - 1;
	
	for(int i = 0; i < len; i++)
		if(bin[i] == '1')
			dec = dec + 1*pow(2, pw--);
		else
			pw--;	
			
	cout<<dec;		
}
