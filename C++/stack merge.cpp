#include<iostream>
using namespace std;
class stack{
	int t,t1;
	int a[20];
	int a1[10];
	public:
	stack(){
		t=-1;
		t1=-1;
	}
	void push(int x){
		if(t>=10){
			cout<<"stack is full";
		}
		
		else
		{
			a[++t]=x;
		}	
	}
	void display(){
		if(t==10){
			cout<<"stack is full";
		}
		else
		{
			for(int i=0;i<=t;i++){
				cout<<a[i];
				cout<<endl;
		}
	}
}
void push1(int x){
		if(t1>=10){
			cout<<"stack is full";
		}
		else
		{
			a1[++t1]=x;
		}	
	}
	void pop1(){
		
	}
	void display1(){
		if(t1==10){
			cout<<"stack is full";
		}
		else
		{
			for(int i=0;i<=t;i++){
				cout<<a1[i];
				cout<<endl;
		}
	}
}
   void mrg(){
   	int i=0,j=t+1;
   	for(;j<20&&i<=t1;j++,i++){
   		a[j]=a1[i];
   	}
   	for(int k=0;k<j;k++){
   		cout<<a[k];
   		cout<<endl;
   	}
   	
   }	
   void split(){
   	int c=0;
   	int split1[2],split2[2],split3[2],split4[2],split5[2];
   	for(int i=0;i<2;i++,c++){
   		split1[i]=a[c];
   	}
   		for(int i=0;i<2;i++,c++){
   		split2[i]=a[c];
   	}
   		for(int i=0;i<2;i++,c++){
   		split3[i]=a[c];
   	}
   		for(int i=0;i<2;i++,c++){
   		split4[i]=a[c];
   	}
   		for(int i=0;i<2;i++,c++){
   		split5[i]=a[c];
   	}
       for(int i=0;i<2;i++){
       	cout<<split1[i]<<"\t"<<split2[i]<<"\t"<<split3[i]<<"\t"<<split4[i]<<"\t"<<split5[i];
       	cout<<endl;
       }
   	}
   
	
	
};
int main(){
	stack x;
	cout<<"Stack 1\n";
	x.push(1),x.push(2),x.push(3),x.push(4),x.push(5);
	x.display();
	cout<<"Stack 2\n";
	x.push1(11),x.push1(12),x.push1(13),x.push1(14),x.push1(15);
	x.display1();
	cout<<"stack after merge\n";
	x.mrg();
	cout<<"Stack split into 5\n";
	x.split();

}
