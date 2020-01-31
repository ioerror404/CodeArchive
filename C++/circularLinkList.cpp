#include<iostream>
using namespace std;

struct node{            //structure for declaration
	int data;           
	node *next;
};
class List{
	node *head,*head_ref;
	
	public:
	List()
	{
		head = NULL;
	}
	void add(int n)
	{
		node *temp = new node;
		node *cur;
		temp->data=n;
	    if(head == NULL)
		{
			head=temp;
			head->next=head;
		}
		else
		{
			cur=head;
			while(cur->next != head )
			{
				cur=cur->next;
			}
			cur->next=temp;
			temp->next=head;
		}
		
	}
	void dis()
	{
		node *ptr = head;
		while(ptr->next != head)
		{
			cout<<ptr->data<<endl;
			ptr = ptr->next;
		}
		cout<<ptr->data;
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
	/*obj.ins_start(5);
	obj.dis();
	obj.insert_position(6,6);
	obj.dis();
	obj.del_strt();
	obj.dis();
	obj.del_end();
	obj.dis();
	obj.del_pos(5);
	obj.dis();
    obj.find_update(40,3);
    obj.dis();/*/






}
