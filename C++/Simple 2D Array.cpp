#include<iostream>
using namespace std;
main()
{
	int row,col,element;
	cout<<"Rows : ";
	cin>>row;
	cout<<"col : ";
	cin>>col;
	int arr[row][col];
	cout<<"enter elements : ";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[row][col];
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"arr["<<row<<"]["<<col<<"]="<<arr[row][col]<<endl;
		}
	}
}
