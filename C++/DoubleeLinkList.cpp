#include<iostream>
using namespace std;
struct node{
	int data;
	node *next,*prev;
};
class List{
	node *head;
	public:
	List()
	{
		head = NULL;
	}
	void add(int n)
	{
		cout<<"normal ins"<<endl;
		node *temp = new node;
		node* cur;
		temp->data = n;
		temp->next = NULL;
		if(head == NULL)
		{
			temp->prev=NULL;
			head = temp;
		}
		else
		{
			cur = head;
			while(cur->next != NULL)
			{
				cur=cur->next;
			}
			cur->next=temp;
			cur->prev=temp;
		}
	}
	void ins_start(int n)
	{
		cout<<"start ins"<<endl;
		node *temp = new node;
		temp->data=n;
		temp->next=head;
		head->prev=temp;
		temp->prev=NULL;
		head=temp;
	}
	void ins_pos(int pos,int n)
	{
		cout<<"pos ins"<<endl;
		node *temp = new node;
		node *pre = new node;
		node *cur = new node;
		cur = head;
		for(int i=1;i<pos;i++)
		{
			pre=cur;
			cur=cur->next;
		}
		temp->data=n;
		pre->next=temp;
		temp->prev=pre;
		temp->next=cur;
		cur->prev=temp;
	}
	void del_strt()
	{
		cout<<"start del"<<endl;
		node* temp = new node;
		temp=head;
		head=head->next;
		head->prev=NULL;
		delete temp;
	}
	void del_end()
	{
		cout<<"end del"<<endl;
		node *pre=new node;
		node *cur=new node;
		cur=head;
		while(cur->next != NULL)
		{
			pre=cur;
			cur=cur->next;
		}
		pre->next=NULL;
		delete cur;
	}
	void del_pos(int pos)
	{
		cout<<"pos del"<<endl;
		node* cur = new node;
		node * pre = new node;
		cur=head;
		for(int i=1;i<pos;i++)
		{
			pre = cur;
			cur=cur->next;
		}
		pre->next=cur->next;
		cur->next->prev=pre;
		delete cur;
	}
	void dis()
	{
		cout<<endl;
		node* ptr = head;
		while(ptr->next != NULL)
		{
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}cout<<ptr->data<<endl;
	}
	
};
main()
{
	List obj;
	obj.add(10);
	obj.add(20);
	obj.add(30);
	obj.add(40);
	obj.add(50);
	obj.add(50);
	obj.add(50);
	obj.dis();
	obj.ins_start(5);
	obj.dis();
	obj.ins_pos(6,6);
	obj.dis();
	obj.del_strt();
	obj.dis();
	obj.del_end();
	obj.dis();
	obj.del_pos(5);
	obj.dis();
    /*obj.find_update(40,3);
    obj.dis();/*/






}
