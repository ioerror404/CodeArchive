#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	node *next;
	int data;
};
class linklist
{     public:
      node * head;
	  linklist()
	  {
	  	head=NULL;
	  }	
	  void add_end_node(int n)
	  { node *temp;
	  	if(head==NULL)
	  	{
	  		temp=new node;
	  		temp->next=NULL;
	  		temp->data=n;
	  		head=temp;
		}
		else
		{
			node *ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			temp=new node;
			temp->next=NULL;
			temp->data=n;
			ptr->next=temp;
		}
	  }
	  void bubble_sort()
	  {
	  	node *ptr1,*ptr2;
	  	int swap;
	  	for(ptr1=head;ptr1->next!=NULL;ptr1=ptr1->next)
	  	{
	  		for(ptr2=ptr1;ptr2->next!=NULL;ptr2=ptr2->next)
	  		{
	  			if((ptr1->data)>(ptr2->next->data))
	  			{
	  				swap=ptr1->data;
	  				ptr1->data=ptr2->next->data;
	  				ptr2->next->data=swap;
	  			}
	  		}
	  	}
		  
	  }
	 void display()
	  {
	  	node *ptr=head;
	  	cout<<" Singly Linklist Values Are. "<<ptr->data;
	  	while(ptr->next!=NULL)
	  	{
	  		ptr=ptr->next;
	  		cout<<ptr->data;
	  	}
	  	cout<<endl;
	  }	 
};
int main()
{
	linklist obj;
	obj.add_end_node(2);
	obj.add_end_node(8);
	obj.add_end_node(7);
	obj.add_end_node(10);
	obj.add_end_node(6);
    obj.add_end_node(12);
	obj.add_end_node(-1);
	obj.add_end_node(-5);	
	cout<<"Before Sorting  ";
	obj.display();
	obj.bubble_sort();
	cout<<"After  Ascending Sorting   ";
	obj.display();
}
