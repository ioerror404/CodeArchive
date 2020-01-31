#include <iostream>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	node *next;
	node *pre;
};
class linklist{
	private:
	node *head;	
	public:
		linklist(){
			head=NULL;
			
		}
			void display()	
			{
			node *ptr;
			ptr=head;
			while(ptr!=NULL)
			{
			    cout<<ptr->data<<"    ";
				ptr=ptr->next;
		
			}}

			void atbeg(int num){
		node *temp,*ptr;
		ptr=head;
		temp = new node;
		temp->data=num;
		temp->pre=NULL;
		head=temp;
		temp->next=ptr;
	}
	void npos(int n,int p){
			node *temp,*ptr;
				ptr=head;
				int count=1;
				if(p==1){
					temp=new node;
					temp->data=n;
					temp->next=ptr;
					temp->pre=NULL;
					head=temp;
					return;
				}
				while(ptr->next!=NULL&&count<p-1){
					ptr=ptr->next;
					count++;
				}
				temp=new node;
				temp->data=n;
				temp->next=ptr->next;
				temp->pre=ptr;
				ptr->next=temp;
		}
		void Delatbeg(){
		node *ptr;
		ptr=head;
		 head=head->next;
		 head->pre=NULL;
		 delete(ptr);
	}
	void Delatend(){
		node *ptr,*back;
		ptr=head;
		while(ptr->next!=NULL){
			back=ptr;
			ptr=ptr->next;
		}
		back->next=NULL;
		delete(ptr);
	}
	void del(int p){
			node *temp,*ptr,*del;
				int count=1;
				del=head;
				if(p==1){
					head=del->next;
					delete del;
					return;
				}
				else{
					temp=head;
					del=del->next;
					while(del->next!=NULL&&count<p-1){
						del=del->next;
						count++;
						if(p>=2){
							temp=temp->next;
						}
					}
					ptr=new node;
					ptr=del->next;
					ptr->pre=temp;
					temp->next=ptr;
					delete del;
				}
		}
void add(int a)
{
		node *temp;
		if(head==NULL){
			temp = new node;
			temp->data=a;
			temp->next=NULL;
			temp->pre=NULL;
			head=temp;
		}
		else{
			node *temp,*ptr;
			ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			temp = new node;
			temp->data=a;
			temp->next=NULL;
			ptr->next=temp;
			temp->pre=ptr;
		}}};

 int main()
{
linklist x;
x.add(4);
x.add(6);
x.add(3);
	cout<<"\nEnter 1 to show link list\n";
	cout<<"Enter 2 to insert at beganing\n";
	cout<<"Enter 3 to delete at beganing\n";
	cout<<"Enter 4 to Delete at end\n";
	cout<<"Enter 5 to insert value at nth position\n";
    cout<<"Enter 6 to delete at nth position\n";
	
	int choise,num;
	cin>>choise;
	switch(choise)
	{
		case 1:{
                x.display();
			break;
		}
		case 2:{
			cout<<"Before ";
			x.display();
			int n;
			cout<<"Enter value to enter at beg : ";
			cin>>n;
        x.atbeg(n);
        cout<<"After ";
        x.display();
			break;
		}
		case 3:{
			cout<<"Before ";
	    x.display();
	    cout<<"After ";
        x.Delatbeg();
        x.display();
			break;
		}
		case 4:{
		cout<<"Before ";
			x.display();
        x.Delatend();
        cout<<"After ";
		x.display();
			break;
		}
		case 5:{
			cout<<"Before ";
			x.display();
			int n,p;
			cout<<"Enter value for nth position : ";
			cin>>n;
			cout<<"Enter position for nth position : ";
			cin>>p;
        x.npos(n,p);
        cout<<"After adding at nth position ";
        x.display();
			break;
		}
		case 6:{
			cout<<"Before ";
			x.display();
			int p;
			cout<<"Enter position to enter for deletion : ";
			cin>>p;
        x.del(p);
        cout<<"After del at nth position  ";
        x.display();
			break;
		}
		default:
			{
				cout<<"Invalid Input";
			}
	}
}		
							
