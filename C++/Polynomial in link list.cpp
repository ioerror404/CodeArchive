#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
struct node{
	char var;
	int coef;
	int power;
	node * next;
};
class polynomial{
	private:
		node * head;
		public:
			polynomial(){
				head=NULL;
			}
			void add(int c,char v,int p){
				node *temp,*ptr;
				if(head==NULL){
					head=new node;
					head->coef=c;
					head->var=v;
					head->power=p;
					head->next=NULL;
					cout<<"Saved\n";
				}
				else
				{
					ptr=head;
						if(ptr->next!=NULL){
							while(ptr->var!=v){
								ptr=ptr->next;
							}
							while(ptr->next!=NULL&&ptr->power!=p){
								ptr=ptr->next;
							}
							if(ptr->var==v&&ptr->power==p){
								ptr->coef=ptr->coef+c;
								return;
							}
							else{
								ptr=head;
								while(ptr->next!=NULL){
									ptr=ptr->next;
								}
								temp=new node;
								temp->coef=c;
								temp->var=v;
								temp->power=p;
								temp->next=NULL;
								ptr->next=temp;
								cout<<"Saved\n";
							}
						}
						else{
							temp=new node;
							temp->coef=c;
							temp->var=v;
							temp->power=p;
							temp->next=NULL;
							ptr->next=temp;
							cout<<"Saved\n";
						}
										
				}
				
			}
			void action(){
				int a,a1;
				node *ptr=head;
				while(ptr->next!=NULL){
					while(ptr->coef!=ptr->next->coef){
						ptr=ptr->next;
					}
				}
			}
			int display(){
				int count=1;
				node *temp=head;
				while(temp->next!=NULL){
					if(temp->next->coef>0){
						cout<<temp->coef<<temp->var<<"^"<<temp->power<<"+";
					}
					else{
						cout<<temp->coef<<temp->var<<"^"<<temp->power;
					}
					temp=temp->next;
					count++;
				}
				cout<<temp->coef<<temp->var<<"^"<<temp->power;
				return count;
			}
};

int main(){
	polynomial p;
	int c;
	p.add(2,'x',2);
	p.add(3,'y',1);
	p.add(3,'y',2);
	p.add(-3,'x',2);
	p.add(5,'y',2);
	c=p.display();
	cout<<"\nTotal terms: "<<c;
	
	return 0;
}
