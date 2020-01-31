#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *next;
};

class LinkList{
	node *head1,*head2,*head3,*head;
	public:
	LinkList(){
	head1 = NULL;
	head2 = NULL;
    head3 = NULL;
		}
	void Add_Node(int listno,int item){
	node *ptr,*temp;
	temp = new node;
    temp->data = item ;
	if(listno == 1){
			
	if(head1 == NULL){
	head1 = temp;
	head1->next = NULL;
	}
	else{
	ptr = head1;
	while(ptr->next != NULL){
    ptr = ptr->next;
	}
	ptr->next = temp;
	temp->next = NULL;
	}
	}
	else if(listno == 2){
				
	if(head2 == NULL){
	head2 = temp;
	head2->next = NULL;
	}
	else{
	ptr = head2;
	while(ptr->next != NULL){
	ptr = ptr->next;
	}
	ptr->next = temp;
	temp->next = NULL;
	}
	}
	else{			
	if(head3 == NULL){
	head3 = temp;
	head3->next = NULL;
	}
	else{
	ptr = head3;
	while(ptr->next != NULL){
	ptr = ptr->next;
	}
	ptr->next = temp;
    temp->next = NULL;
			}
		}
	}
	void merge(){
	node* ptr1,*ptr2;
	head = head1;
	ptr1 = head1;
	ptr2 = head2;
	while(ptr1->next != NULL || ptr2->next != NULL){
	if(ptr1->next != NULL){
    ptr1 = ptr1->next;
	}
	if(ptr2->next != NULL){
    ptr2 = ptr2->next;
	}
	}
	ptr1->next = head2;
	ptr2->next = head3;
	}
	void Split_Lists(int num){
    node *ptr;
    ptr = head;
    int rem,check,set,count = 1;
    while(ptr->next != NULL){
    ptr = ptr->next;
	count++;
    }
	set = count/num;
	rem = count%num;
	if(rem >= num/2){
	set++;
    }
    count = 0;
    check = 1;
	for(node* acc=head ; acc != NULL ; acc=acc->next){
	count++;
	cout<<acc->data<<"  ";
	if(count == set && check != num){
	cout<<endl;
	count = 0;
	check++;
	}
		  }	
	}
	void Display_List(int listno){
    node *ptr;
	if(listno == 1){
	ptr = head1;cout<<"List No.1 Details Are"<<endl<<endl;
			cout<<ptr->data<<endl;
			while(ptr->next != NULL){
				ptr = ptr->next;
				cout<<ptr->data<<endl;
			}
		}
		else if(listno == 2){
				ptr = head2;
			cout<<"List No.2 Details Are"<<endl<<endl;
			cout<<ptr->data<<endl;
			while(ptr->next != NULL){
				ptr = ptr->next;
				cout<<ptr->data<<endl;
			}
		}
		else if(listno == 3){
				ptr = head3;
			cout<<"List No.3 Details Are"<<endl<<endl;
			cout<<ptr->data<<endl;
			while(ptr->next != NULL){
				ptr = ptr->next;
				cout<<ptr->data<<endl;
			}
		}
		else{
					ptr = head;
			cout<<"Details Are"<<endl<<endl;
			cout<<ptr->data<<endl;
			while(ptr->next != NULL){
				ptr = ptr->next;
				cout<<ptr->data<<endl;
			}
		}
	}
};
int main(){
	LinkList k;
	k.Add_Node(1,1);
	k.Add_Node(3,3);
	k.Add_Node(3,9);
	k.Add_Node(2,2);
	k.Add_Node(3,27);
	k.Add_Node(2,4);
	k.Add_Node(1,2);
    k.Add_Node(2,16);
    k.Add_Node(1,3);
	k.Add_Node(1,4);
	k.Add_Node(3,81);
	k.Display_List(1);
	k.Display_List(2);
	k.Display_List(3);
	k.merge();
	cout<<"After merging the list\n\n\n";
	k.Display_List(4);
	cout<<"After Splitting the List\n\n\n";
	k.Split_Lists(4);
}
