#include <iostream>
using namespace std;

class BankAccount{
	private:
		string name,acctType;
		int acctNumber,blcAmmount;
		
		public:
		void initial()
		{
			cout<<"\nEnter Your Account Title :";
			cin>>name;
			cout<<"\nEnter Your Account Number :";
			cin>>acctNumber;
			cout<<"\nEnter Your Account Type :";
			cin>>acctType;
			cout<<"\nEnter The Ammount in Your Account :";
			cin>>blcAmmount;
		}
		void deposit()
		{
			int newAmm;
			cout<<"\nEnter the Ammount You Wanna Deposit : ";
			cin>>newAmm;
			blcAmmount = newAmm+blcAmmount;
			cout<<"\nYour Ammount Has Been Deposited Your New Balance Is :"<<blcAmmount;
			
		}
		void withdraw()
		{
			cout<<"\nEnter the Ammount You Wanna Withdraw : ";
			int newAmm;
			cin>>newAmm;
			if(newAmm>=blcAmmount)
			{
				cout<<"Sorry ! your current balance is lower then withdraw ammount ";
			}
			else
			{
			
			  blcAmmount = blcAmmount-newAmm;
			  cout<<"\nYour Ammount Has Been Withdraw , Your New Balance Is :"<<blcAmmount;
		    } 
		}
		void display()
		{
			cout<<"\nAccount Title   : "<<name;
			cout<<"\nAccount Number  : "<<acctNumber;
			cout<<"\nAccount Type    : "<<acctType;
			cout<<"\nAccount Balance : "<<blcAmmount;
			
		}
};
main()
{
	BankAccount obj;
	int choice;
	char op;
	do
	{
	cout<<"What you wanna do with your account :"<<endl;
    cout<<"1-Assign initial values\n2-Deposit an ammount\n3-Withdraw an ammount\n4-Show credentials\n";
	cin>>choice;
	if(choice == 1)
	{
		obj.initial();
	}
	
	if(choice == 2)
	{
		obj.deposit();
	}
	
	if(choice == 3)
	{
		obj.withdraw();
	}
	
	if(choice == 4)
	{
		obj.display();
	}
	cout<<"\nWanna do another process (y/n) :";
	cin>>op;
  }while(op == 'y' || op == 'Y' );
  system("pause");

}
