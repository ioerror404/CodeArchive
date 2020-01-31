#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node* prev;
	node* next;
};

class LinkList{
	node* head;
	public:
		LinkList(){
			head == NULL;
		}
	void Create_Node(int item){
		node *ptr,*temp;
		temp = new node;
		temp->data = item;
		temp->next = NULL;
		if(head == NULL){
			head = temp;
			head->prev = NULL;
		}
		else{
			ptr = head;
			while(ptr->next != NULL)
			{
			   ptr = ptr->next;	
			}
			ptr->next = temp;
			temp->prev = ptr;
		}
	}
	void ReverseList(){
		node *ptr,*tail,*start;
		int SwapData;
		 ptr = head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		tail = ptr;
		start = head;
		while(start->next != NULL && tail != start && start->next != tail){
			SwapData = start->data;
			start->data = tail->data;
			tail->data = SwapData;
			start = start->next;
			tail = tail->prev;
		}
			SwapData = start->data;
			start->data = tail->data;
			tail->data = SwapData;
	}
	void Insert_Nth(int pos,int item){
		int count = 1;
		node *ptr,*temp;
		ptr = head ;
		while(ptr->next != NULL){
			ptr = ptr->next;
			count++;
		}
		if(pos <! 1 || pos >! (count+1)){
		   temp = new node;
		   temp->data = item;
		   
		   if(pos == 1){
		   	temp->prev = NULL;
		   	temp->next = head;
		   	head->prev = temp;
		   	head = temp;
		   }
		  
		   else if(pos == (count+1)){
		   	   ptr = head;
		    while(ptr->next != NULL){
		    	ptr = ptr->next;
			}
			temp->next = NULL;
			ptr->next = temp;
			temp->prev = ptr;
		   }
		  
		   else{
		   	node *ago;
		   	    ptr = head ;
		   	    for(int k=1 ; k<pos-1 ; k++){
		   	    	 ptr = ptr->next;
				   }
				   ago = ptr->next;
				  temp->next = ago;
				  temp->prev = ptr;
				  ptr->next = temp;
				  ago->prev = temp;
		   }	
		}
		else
		cout<<"Invalid Command ! \n";
	}
	void Delete_Nth(int pos){
		int count = 1;
		node *ptr,*temp;
		ptr = head ;
		while(ptr->next != NULL){
			ptr = ptr->next;
			count++;
		}
		if(pos <! 1 || pos >! count){

		   if(pos == 1){
		   	ptr = head;
		   	head = ptr->next;
		   	delete(ptr);
		   }
		  
		   else if(pos == count){
		   	   ptr = head;
		    while(ptr->next != NULL){
		    	ptr = ptr->next;
			}
			temp = ptr->prev;
			temp->next = NULL;
			delete(ptr);
			
		   }
		  
		   else{
		   	node *ago,*back;
		   	    ptr = head ;
		   	    for(int k=1 ; k<pos ; k++){
		   	    	 ptr = ptr->next;
				   }
				   ago = ptr->next;
				   back = ptr->prev; 
				 back->next = ago;
				 ago->prev = back;
				 delete(ptr);
		   }	
		}
		else
		cout<<"Invalid Command ! \n";
	}
	void Display(){
		node *ptr;
		ptr = head;
		cout<<"Nodes data detail in LinkList !\n\n";
		cout<<ptr->data<<endl;
		while(ptr->next != NULL)
		{
		  ptr = ptr->next;
		  cout<<ptr->data<<endl;	
		}
		cout<<"\n\n\n\n";
	}
};
int main(){
	system("color 17");
	LinkList ksf;
	ksf.Create_Node(5);
	ksf.Create_Node(10);
	ksf.Create_Node(15);
	ksf.Create_Node(20);
	ksf.Create_Node(25);
	ksf.Create_Node(30);
	ksf.Display();
	system("pause");
	system("cls");
    int opt,pos,val;
    p:
    cout<<"Press 1 To Reverse the List\nPress 2 To Insert a Node at Nth Possition\nPress 3 To Delete the Nth Node\n\n\nPress ";
    cin>>opt;
    system("cls");
    switch(opt){
    	case 1: ksf.ReverseList(); cout<<"After Reversing the List\n"; ksf.Display(); break;
    	case 2: cout<<"Enter the Possition : "; cin>>pos;
    	        cout<<"Enter the Value : "; cin>>val;
    	        ksf.Insert_Nth(pos,val); cout<<"After this Operation\n"; ksf.Display(); break;
    	case 3: cout<<"Enter the Possition : "; cin>>pos;
    	        ksf.Delete_Nth(pos); cout<<"After this Operation\n"; ksf.Display(); break;
    	default:
    	{
		cout<<"Invalid Command !\n\nTry Again\n\n\n\n";
		system("pause");
		system("cls");
		goto p;
    	}
	}
}
