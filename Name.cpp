#include<iostream>
#include<string>
using namespace std;


int main(){
	string name;int age;int rollno;char ch;
	do{
	
	
	cout<<"Enter name is ";
	cin>>name;
	cout<<"Enter age is ";
	cin>>age;
	cout<<"Enter rollno is ";
	cin>>rollno;
	
	cout<<"Your name is "<<name<<"\n Your age is "<<age<<"\n Your rollno is "<<rollno;
	cout<<" \n Next Student (y/n)?";
	cin>>ch;
	}while(ch=='y');
	return 0;
     	
	 
}
