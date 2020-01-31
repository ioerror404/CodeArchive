#include<iostream>
using namespace std;
class stack{
	int top;
	int arr[10];
	int array[20];
	public:
	stack(){
		top=-1;
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
	int display(){
		if(top==-1){
			cout<<"No Element in the stack!";
		}
		else{
			for(int i=0;i<=top;i++){
				cout<<"Element No. "<<i+1<<" is: "<<arr[i]<<endl;
				return arr[i];
			}
		}
	}
	void merge(int x){
		int i,j;
		if(x==1){
			for(i=0;i<top;i++){
				array[i]=arr[i];
			}
			j=i;
			i=0;
		}
		else if(x==2){
			for(;j<top*2&&i<top;j++,i++){
				array[j]=arr[i];
			}
		}
		else
		for(int k=0;k<top*2;k++){
			cout<<"Element is: "<<array[k]<<endl;
		}
	}
};
int main(){
	stack s;
	stack x;
	cout<<"Dealing with stack 1..\n\n";
	s.push(1);s.display();s.push(2);s.display();//s.merge(1);
	cout<<"\n\nDealing with stack 2..\n\n";
	x.push(11);x.push(22);x.display();//x.merge(2);
//	x.merge(3);
	return 0;
}
