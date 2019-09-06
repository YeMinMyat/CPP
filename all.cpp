#include<iostream>

using namespace std;

int main(){
	int num1=0,num2=0,num3=0; 
	cout<<"Enter number 1 = ";
	cin>>num1;				//first input
	cout<<"Enter number 2 = ";
	cin>>num2;				//second input
	
	num3=num1+num2;
	cout<<"Sum is "<<num3;
	
	num3=num1-num2;
	cout<<"\nSubstraction is "<<num3;
	
	num3=num1*num2;
	cout<<"\nMultiplication is "<<num3;
	
	num3=num1/num2;
	cout<<"\nDivide is "<<num3;
	
	num3=num1%num2;
	cout<<"\nModuls is "<<num3;
	
	return 0;
	
	
}
