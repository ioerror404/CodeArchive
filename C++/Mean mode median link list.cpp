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
	 int count_node()
	 {
	 	int count=1;
	 	node *ptr=head;
	 	while(ptr->next!=NULL)
	 	{
	 		ptr=ptr->next;
	 		count++;
	 	}
	 	cout<<"Total Node in doubly_Link are. "<<count<<endl;
	 	return count;
	 }
	 void mean()
	 {
	 	int total=count_node();
		 int sum=0;
	 	node *ptr=head;
	 	sum=ptr->data;
	 	while(ptr->next!=NULL)
	 	{
	 		ptr=ptr->next;
	 		sum=sum+ptr->data;	
	 	}
	 	cout<<"Mean of Given Doubly_linklist is. "<<sum/total<<endl;
	 }
	 void median()
	 {
	 	int total=count_node();
	 	int med_node=total/2;
	 	node *ptr=head;
	 	for(int i=1;i<=med_node;i++)
	 	{
	 		ptr=ptr->next;
	 	}
	 	cout<<"Median node number is."<<med_node<<"  And value is "<<ptr->data<<endl;
	 }
	 void mode()
	 {
	 	node *ptr1,*ptr2;
	 	int save,count;
	 	for(ptr1=head;ptr1->next!=NULL;ptr1=ptr1->next)
	 	{   count=0;
	 		for(ptr2=head;ptr2->next!=NULL;ptr2=ptr2->next)
	 		{
	 			if(ptr2->next->data==ptr1->data)
	 			{
	 				 save=ptr1->data;
	 				  count++;
	 			}
	 		}
	 	}
	 	cout<<"total Mode values are. "<<count<<"  And values is "<<save<<endl;
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
	obj.add_end_node(9);
	obj.add_end_node(5);
	obj.add_end_node(5);
	obj.add_end_node(5);	
	obj.display();	
	obj.mean();
	obj.median();
	obj.mode();
}
