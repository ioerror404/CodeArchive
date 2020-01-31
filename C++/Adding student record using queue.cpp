#include<iostream>
using namespace std;

#define MAX_SIZE 10
class Student
{
	private:
		int reg_no[MAX_SIZE];
		int front;
		int rear;
		string st_name[MAX_SIZE];
		float cgpa[MAX_SIZE];
		bool empty, full;
		
	public:
		Student()
		{
			front = 0;
			rear = -1;
			empty = true;
			full = false;
		}
		bool isEmpty()
		{
			if(front >= MAX_SIZE )
			{
				empty = true; 
			}
			else
			{
				empty = false;
			}  
			return empty;	
		}
		bool isFull()
		{
			if(rear>=MAX_SIZE-1)
			{
				full = true;
			}
			else
			{
				full = false;
			}
			return full;
		}
		void enqueue()
		{
			if(isFull() == false)
			{
				++rear;
				cout<<"Enter reg no : ";
			    cin>>reg_no[rear];
			    cout<<"Enter name : ";
			    cin>>st_name[rear];
			    cout<<"Enter cgpa :";
			    cin>>cgpa[rear];
			}
		}	
		void dequeue()
		{
			if(isEmpty() == false)
			{
				cout<<"\nRemoved : "<<reg_no[front]<<"\t"<<st_name[front]<<"\t"<<cgpa[front];
				front++;
			}
		}
		void print()
		{
			int count = front;
			while(count <= rear)
			{
				cout<<reg_no[count]<<"\t"<<st_name[count]<<"\t"<<cgpa[count]<<endl;
			    count++;
			}
		}
};
main()
{
	Student s;
	int choice;
	while(1)
	{
		cout<<"\n1-Enqueue  ||  2-Dequeue  ||   3-Print   ||   4-Exit"<<endl;
	    cin>>choice;
	     if(choice == 1)
	     {
	     	if(s.isFull() == false)
	     	{
	     		s.enqueue();
			}
			else
			{
				cout<<"\nQueue is Full";
			}
		 }
		 else if(choice == 2)
		 {
		 	if(s.isEmpty() == false)
		 	{
		 		s.dequeue();
			}
			else
			{
				cout<<"\nQueue is Empty";
			}
		 }
		 else if(choice == 3)
		 {
		 	s.print();
		 }
		 else if(choice == 4)
		 {
		 	exit(0);
		 }
		         
	}
}
