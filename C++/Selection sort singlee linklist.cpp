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
	  void selection_sort()
	  {
	  	node *ptr1,*ptr2,*min;
	  	int swap;
	  	
		  for(ptr1=head;ptr1->next!=NULL;ptr1=ptr1->next)
		  {
		  	min=ptr1;
		  	for(ptr2=ptr1->next;ptr2!=NULL;ptr2=ptr2->next)
		  	{
		  		if((ptr2->data)>(min->data))
		  		{
		  			min=ptr2;
		  		}
		  	}
		  	if(min!=ptr1)
		  	{
		  	   swap=min->data;
			   min->data=ptr1->data;
			   ptr1->data=swap;	
		  	}
		  }
	  }
	  void display()
	  {
	  	node *ptr=head;
	  	cout<<"Singly Linklist Values Are. "<<ptr->data;
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
	obj.add_end_node(-1);
	obj.add_end_node(4);
	obj.add_end_node(8);
	obj.add_end_node(3);
	obj.display();
	obj.selection_sort();
	cout<<"After Selection Sorting.";
	obj.display();
}
