#include<iostream>
using namespace std;
class stack{
	int top;
	int top1;
	int arr[20];
	int array[20];
	public:
		int sp=0;
	stack(){
		top=-1;
		top1=-1;
	}
	void dfault(){
		for(int i=0;i<20;i++){
			arr[i]=NULL;
			array[i]=NULL;
		}
	}
	void push(int x){
		if(top>=10){
			cout<"Overflow!";
		}
		else{
			arr[++top]=x;
			cout<<"Element inserted:"<<x<<"\n";
		}
	}
	int pop(){
		if(top<0){
			cout<<"Underflow!";
		}
		else{
			int d=arr[--top];
			cout<<"Element Popped off!\n";
			return d;
		}
	}
	void push1(int x){
		if(top1>=10){
			cout<"Overflow!";
		}
		else{
			array[++top1]=x;
			cout<<"Element inserted:"<<x<<"\n";
		}
	}
	int pop1(){
		if(top1<0){
			cout<<"Underflow!";
		}
		else{
			int d=array[--top1];
			cout<<"Element Popped off!\n";
			return d;
		}
	}
	int display(){
		if(top==-1){
			cout<<"No Element in the stack!";
		}
		else{
			for(int i=0;i<=top;i++){
				cout<<"Element No. "<<i+1<<" is: "<<arr[i]<<endl;
			}
		}
	}
	int display1(){
		if(top1==-1){
			cout<<"No Element in the stack!";
		}
		else{
			for(int i=0;i<=top1;i++){
				cout<<"Element No. "<<i+1<<" is: "<<array[i]<<endl;
			}
		}
	}
	int merge(){
		int i=0,j=top+1;
		for(;j<20&&i<=top1;j++,i++){
				arr[j]=array[i];
			}
		for(int k=0;k<j;k++){
			cout<<"Element is: "<<arr[k]<<endl;
			i=k;
		}
		return i+1;
	}
	int split(int x,int c,int last){
		int splt[x];
		int o=0;
		for(;sp<c;sp++){
			if(sp<c-1){
					cout<<"Stack "<<sp+1<<" is:\n";
			for(int i=0;i<x;i++,o++){
				splt[i]=arr[o];
			}
			for(int i=0;i<x;i++){
				cout<<splt[i]<<endl;
			}
		}
		else if(sp==c-1){
				int splt1[x+last];
				cout<<"Stack "<<sp+1<<" is:\n";
				for(int i=0;i<x+last;i++,o++){
					splt1[i]=arr[o];
				}
				for(int i=0;i<x;i++){
					cout<<splt1[i]<<endl;
				}
			}
		}
		
	}
};
int main(){
	stack s;
	int indx,n,last,size;
	s.dfault();
	cout<<"Dealing with stack 1..\n\n";
	s.push(1);s.push(2);s.push(3);s.push(4);s.push(5);s.push(6);s.push(7);s.push(8);s.push(9);s.display();
	cout<<"\n\nDealing with stack 2..\n\n";
	s.push1(11);s.push1(22);s.push1(33);s.push1(44);s.push1(55);s.push1(66);s.push1(77);s.push1(88);s.push1(99);s.display1();
	cout<<"\n\nMerged Stack is:\n";
	indx=s.merge();
	a:
	cout<<"\nTotal No. of elements in stack are: "<<indx;
	cout<<"\nEnter No. of Stacks to divide: ";
	cin>>n;
	last=indx%n;
	size=indx/n;
	if(n<=indx){
		s.split(size,n-1,last);
	}
	else{
		cout<<"Pehle Stack ty vekh!\n";
		goto a;
	}
	return 0;
}
