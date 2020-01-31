#include<iostream>
using namespace std;
void calc()
{char ind;
do
  {
	int a,b;
	char op;
	cout<<"Enter num1 op num2 :";
	cin>>a>>op>>b;
	switch(op)
	{
		case '+' :cout<<a+b<<endl; break;
		case '-' :cout<<a-b<<endl; break;
		case '*' :cout<<a*b<<endl; break;
		case '/' :cout<<a/b<<endl; break;
		default  :cout<<"";
		
	}
	cout<<"Enter indicator :";
	cin>>ind;
	
  }while(ind=='y');
}
main()
{
	calc();
}
