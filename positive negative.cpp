#include<iostream>

using namespace std;

int main(){
	
	int num1=0,num2=0;char ope;
	int result=0;
	
	cout<<"Enter first number:";
	cin>>num1;
	
	cout<<"Enter second number:";
	cin>>num2;
	
	cout<<"Enter operator (+,-,*,/):";
	cin>>ope;
	
	if(ope=='+')
	result=num1+num2;
	
	if(ope=='-')
	result=num1-num2;
	
	if(ope=='*')
	result=num1*num2;
	
	if(ope=='/')
	result=num1/num2;
	
	cout<<"Answer is:"<<result;
}

