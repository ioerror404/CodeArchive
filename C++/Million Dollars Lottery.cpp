#include<iostream>
using namespace std;
main()
{int N=39,T=0,A;
name:
cout<<endl<<endl<<"Enter a number between 0 & 50 = ";
cin>>A;
T++;
if(A==N&&T<5)//and operator is used beacuse both of the condition should be true to win
{cout<<endl<<endl<<"Congratulations ! You won a Million Dollars. "<<endl<<endl<<endl<<endl<<endl<<endl;}
else if(A!=N&&T<5)// reason is same as in above statement given
{cout<<endl<<endl<<"You entered an incorrect number. Try Again!"<<endl;}
else
{cout<<endl<<endl<<"Better Luck Next Time.";}
if(T<5&&A!=N)//same as above
goto name;}

