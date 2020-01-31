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
	  void add_first_node(int n)
	  {
	  	node *temp,*ptr;
	  	ptr=head;
	  	temp=new node;
	  	temp->next=ptr;
	  	temp->data=n;
	  	head=temp;
	  }
	  void add_nth_node(int n,int p)
	  {
	  	node *first,*end,*temp;
	  	first=end=head;
	  	for(int i=1;i<p;i++)
	  	{
	  		first=first->next;
	  		end=end->next;
	  	}
	  	end=end->next;
	  	temp=new node;
	  	temp->data=n;
	  	first->next=temp;
	  	temp->next=end;
	  	
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
	  void prime()
	  {
	  	node *ptr=head;
	  	int count,p_total,c_total;
	  	p_total=c_total=0;
	  	for(ptr=head;ptr!=NULL;ptr=ptr->next)
	  	{  count=0;
	  	  for(int i=2;i<ptr->data;i++)
			{
				if(ptr->data%i==0)
				{
					count=1;
				}
			}	
		  if(count==0)
		  {
		  	cout<<"Prime numbers are. "<<ptr->data<<endl;
		  	p_total++;
		  }
		  else
		  {
		  	cout<<"Composite numbers are. "<<ptr->data<<endl;
		  	c_total++;
		  }
	  	}
	  	cout<<"Total Prime Numers are. "<<p_total<<endl;
	  	cout<<"Total Composite Numbers are. "<<c_total;
	  }
	  
};
int main()
{
	linklist obj;
	obj.add_end_node(2);
	obj.add_end_node(3);
	obj.add_end_node(4);
	obj.add_end_node(5);
	obj.add_end_node(6);
	obj.add_first_node(1);
	obj.add_nth_node(7,4);
	obj.display();
	obj.prime();
}
