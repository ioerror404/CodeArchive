#include<iostream>
using namespace std;

struct structure{
	string name;
    int roll_no, marks_eng, marks_icp, marks_oop;
    	
};
main(){
	structure s;
	
	
	cout<<"Enter name of student ";
	cin>>s.name;
	cout<<"Enter Roll No. of student ";
	cin>>s.roll_no;
	cout<<"Enter marks in eng :";
	cin>>s.marks_eng; 
	cout<<"Enter marks in icp :";
	cin>>s.marks_icp;
	cout<<"Enter marks in oop :";
	cin>>s.marks_oop;
	
	if(s.marks_eng>=50)
    {
    	if(s.marks_eng>=90 && s.marks_eng<=100)
    		cout<<endl<<"You are pass in eng and grade is A";
    	else if(s.marks_eng>=80 && s.marks_eng<90)
    		cout<<endl<<"You are pass in eng and grade is B";
		else if(s.marks_eng>=70 && s.marks_eng<80)
    		cout<<endl<<"You are pass in eng and grade is C";
		else if(s.marks_eng>=60 && s.marks_eng<70)
    		cout<<endl<<"You are pass in eng and grade is D"; 
    	else if(s.marks_eng>=50 && s.marks_eng<60)
    		cout<<endl<<"You are pass in eng and grade is E";
    }
    else
    {
    	cout<<endl<<"You are fail in eng";
    }
    
	if(s.marks_icp>=50)
    {
    	if(s.marks_icp>=90 && s.marks_icp<=100)
    		cout<<endl<<"You are pass in icp and grade is A";
    	else if(s.marks_icp>=80 && s.marks_icp<90)
    		cout<<endl<<"You are pass in icp and grade is B";
		else if(s.marks_icp>=70 && s.marks_icp<80)
    		cout<<endl<<"You are pass in icp and grade is C";
		else if(s.marks_icp>=60 && s.marks_icp<70)
    		cout<<endl<<"You are pass in icp and grade is D"; 
    	else if(s.marks_icp>=50 && s.marks_icp<60)
    		cout<<endl<<"You are pass in icp and grade is E";
    }
    else
    {
    	cout<<endl<<"You are fail in icp";
    }
    
	if(s.marks_oop>=50)
    {
    	if(s.marks_oop>=90 && s.marks_oop<=100)
    		cout<<endl<<"You are pass in oop and grade is A"<<endl;
    	else if(s.marks_oop>=80 && s.marks_oop<90)
    		cout<<endl<<"You are pass in oop and grade is B"<<endl;
		else if(s.marks_oop>=70 && s.marks_oop<80)
    		cout<<endl<<"You are pass in oop and grade is C"<<endl;
		else if(s.marks_oop>=60 && s.marks_oop<70)
    		cout<<endl<<"You are pass in oop and grade is D"<<endl; 
    	else if(s.marks_oop>=50 && s.marks_oop<60)
    		cout<<endl<<"You are pass in oop and grade is E"<<endl;
    }
    else
    {
    	cout<<endl<<"You are fail in oop";
    }
}
