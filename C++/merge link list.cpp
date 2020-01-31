#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class linklist{
	node *head1;
	node *head2;
	public:
		linklist(){
			head1=NULL;
			head2=NULL;
		}
		void add(int n,int l){
				node *temp,*ptr;
				if(l==1){
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
					return;
				}
				else if(l==2){
					if(head2==NULL){
						head2=new node;
						head2->data=n;
						head2->next=NULL;
					}
					else
					{
						ptr=head2;
						while(ptr->next!=NULL){
							ptr=ptr->next;
						}
						temp=new node;
						temp->data=n;
						temp->next=NULL;
						ptr->next=temp;
					}
				}
				
		}
		void merge(){
			node *ptr;
			ptr=head1;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=head2;
		}
		void display(){
			node *temp=head1;
				while(temp->next!=NULL){
					cout<<temp->data<<endl;
					temp=temp->next;
				}
				cout<<temp->data;
		}
};
int main(){
	linklist x;
	x.add(1,1);
	x.add(2,1);
	x.add(3,2);
	x.add(4,2);
	cout<<"Merged LinkList is:\n";
	x.merge();
	x.display();
	return 0;
}
