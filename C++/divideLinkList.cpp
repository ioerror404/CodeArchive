#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class linklist{
	node * head1;
	node * head2;
	public:
	linklist(){
		head1=NULL;
		head2=NULL;
	}
	void add(int n){
				node *temp,*ptr;
				if(head1==NULL){
					head1=new node;
					head1->data=n;
					head1->next=NULL;
				}
				else
				{
					ptr=head1;
					while(ptr->next!=NULL){
						ptr=ptr->next;
					}
					temp=new node;
					temp->data=n;
					temp->next=NULL;
					ptr->next=temp;
				}
	}
	void divide(int p){
		node * ptr;
		ptr=head1;
		int i=1;
		while(ptr->next!=NULL&&i<p){
			ptr=ptr->next;
			i++;
		}
		head2=ptr->next;
		ptr->next=NULL;
	}
	void display1(){
		node *ptr;
		ptr=head1;
		while(ptr->next!=NULL){
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}
		cout<<ptr->data;
	}
	void display2(){
		node *ptr;
		ptr=head2;
		while(ptr->next!=NULL){
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}
		cout<<ptr->data;
	}
	int position(){
		node *ptr;
		ptr=head1;
		int i=1,p;
		while(ptr->next!=NULL){
			i++;
		}
		p=i/2;
		return p;
	}
};
int main(){
	linklist x;
	x.add(1);
	x.add(2);
	x.add(3);
	x.add(4);
	cout<<"LinkList before division is:\n";
	x.display1();
	int p;
	p=x.position();
	x.divide(p);
	cout<<"\n\nLinkLists after division are:\n";
	cout<<"LinkList 1 is:\n";
	x.display1();
	cout<<"\n\nLinkList 2 is:\n";
	x.display2();
	return 0;
}
