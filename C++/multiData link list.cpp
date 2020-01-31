#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
	string name;
	int num;
	node * next;
};
class linklist{
	private:
		node * head;
		public:
			linklist(){
				head=NULL;
			}
			void add(string n,int r){
				node *temp,*ptr;
				if(head==NULL){
					head=new node;
					head->name=n;
					head->num=r;
					head->next=NULL;
				}
				else
				{
					ptr=head;
					while(ptr->next!=NULL){
						ptr=ptr->next;
					}
					temp=new node;
					temp->name=n;
					temp->num=r;
					temp->next=NULL;
					ptr->next=temp;
				}
				
			}
			void display(){
				node *temp=head;
				while(temp->next!=NULL){
					cout<<temp->num<<"\t"<<temp->name<<endl;
					temp=temp->next;
				}
				cout<<temp->num<<"\t"<<temp->name<<endl;
			}
};
int main(){
	linklist x;
	x.add("Ahsan Irshad",50);
	x.add("M. Hamza",62);
	x.display();
	return 0;
}
