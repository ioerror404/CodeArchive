#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	node *pre;
	node *next;
	int data;
};
class doubly
{    public:
     node *head;
	 doubly()
	 {
	 	head=NULL;
	 }	
	 void add_end_node(int n)
	 {
	 	node *temp;
	 	if(head==NULL)
	 	{
	 		temp=new node;
	 		temp->pre=NULL;
	 		temp->next=NULL;
	 		temp->data=n;
	 		head=temp;
	 	}
	 	else
	 	{
	 		node *ptr,*temp;
	 		ptr=head;
	 		while(ptr->next!=NULL)
	 		{
	 			ptr=ptr->next;
	 		}
	 		temp=new node;
	 		temp->data=n;
	 		temp->next=NULL;
	 		temp->pre=ptr;
	 		ptr->next=temp;
	 	}
	 }
	 void count_node()
	 {
	 	int count=1;
	 	node *ptr=head;
	 	while(ptr->next!=NULL)
	 	{
	 		ptr=ptr->next;
	 		count++;
	 	}
	 	cout<<"Total Node in doubly_Link are. "<<count;
	 	
	 }
	 void display()
	 {
	 	node *ptr=head;
	 	while(ptr->next!=NULL)
	 	{
	 		ptr=ptr->next;
	 	}
	 	cout<<"Doubly Values are.  "<<ptr->data<<endl;
	 	while(ptr->pre!=NULL)
	 	{
	 		ptr=ptr->pre;
			 cout<<ptr->data<<endl;
	 	}
	 }
};
int main()
{
	doubly obj;
	obj.add_end_node(2);
	obj.add_end_node(3);
	obj.add_end_node(4);
	obj.add_end_node(5);
	obj.add_end_node(6);
	obj.display();	
	obj.count_node();
}
