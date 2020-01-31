#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream outfile("input.txt");
	for(int i=1960;i<=2018;i++)
		outfile<<i<<endl;
}
