#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	string name;
	int num;
	node * rare;
};
class linklist{
	private:
		node * front;
		public:
			linklist(){
				front=NULL;
			}
			void add(string n,int r){
				node *temp,*ptr;
				if(front==NULL){
					front=new node;
					front->name=n;
					front->num=r;
					front->rare=NULL;
				}
				else
				{
					ptr=front;
					while(ptr->rare!=NULL){
						ptr=ptr->rare;
					}
					temp=new node;
					temp->name=n;
					temp->num=r;
					temp->rare=NULL;
					ptr->rare=temp;
				}
				
			}
			void leave(string n,int r){
				node * ptr=front;
				node * deq=front;
				if(deq->name==n&&deq->num==r){
					front=deq->rare;
					delete deq;
					cout<<"Car gone!";
				}
				else{
					deq=deq->rare;
					while(deq->rare!=NULL&&deq->name!=n&&deq->num!=r){
						ptr=ptr->rare;	
						deq=deq->rare;
					}
					ptr->rare=deq->rare;
					delete deq;
					cout<<"Car gone!";
				}
			}
			void display(){
				node *temp=front;
				while(temp->rare!=NULL){
					cout<<temp->num<<"\t"<<temp->name<<endl;
					temp=temp->rare;
				}
				cout<<temp->num<<"\t"<<temp->name<<endl;
			}
};
int main(){
	linklist x1,x2,x3;
	x1.add("car1",1);x1.add("car2",2);
	x2.add("car3",3);x2.add("car4",4);
	x3.add("car5",5);x3.add("car6",6);
	x1.display();x2.display();x3.display();
	x2.leave("car4",4);
	cout<<"\nNow Parking is:\n";
	x1.display();
	x2.display();
	x3.display();
	return 0;
	getch();
}
