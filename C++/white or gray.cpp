#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	const unsigned char WHITE = 219;  //solid color (primes) 
	const unsigned char GRAY  = 176;  //gray (non primes) 
	unsigned char ch;
	for(int count=0; count<80*25-1; count++) 
	{
		ch = WHITE;                //assume it’s prime
		for(int j=2; j<count; j++) //divide by every integer from 
		if(count%j == 0)        //2 on up; if remainder is 0, 
		{
			ch = GRAY;           //it’s not prime
			break;               //break out of inner loop
		}
	cout << ch;                //display the character 
	}
	getch();                     //freeze screen until keypress   

}
