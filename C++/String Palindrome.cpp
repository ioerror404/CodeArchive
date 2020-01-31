#include<iostream>
using namespace std;
main(){
	
	string str;
	bool flag = false;
	cout<<"string : ";
	getline(cin, str, '\n');
	int length = str.length() - 1;
	
	for(int i=0; i<str.length(); i++)
	{
		if(str[i] != str[length-i-1]) 
		{
			flag = false;
			break;
		}
		else
		{
			flag = true;
		}
	}
	
	if(flag)
	{
		cout<<"Palindrome";
	}
	
	else 
	{
		cout<<"Not";
	}		
}
