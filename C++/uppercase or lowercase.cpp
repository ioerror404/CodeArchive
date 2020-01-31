#include<iostream>
using namespace std;
main()
{
    char ch;
	cout<<"Enter a letter : ";
	cin>>ch;
	
	if(ch >= 'A' && ch <= 'Z')
	{
		cout<<"Uppercase";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
    	cout<<"Lowercase";
	}

 }
