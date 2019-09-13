#include<iostream>

using namespace std;
	
int main(){

	int mark=0;
	int mark2=0;
	int mark3=0;
	int avg=0;
	
	cout<<"Enter your Myanmar mark: ";
	cin>>mark;	

	cout<<"Enter your English mark: ";
	cin>>mark2;
	
	cout<<"Enter your Math mark: ";
	cin>>mark3;	
		
	avg=(mark+mark2+mark3)/3;
		
	if(mark<50 || mark2<50 || mark3<50)
	cout<<"Fail";
	
	else if(avg>80)
	cout<<"pass with grade A";
	
	else if(avg>70)
	cout<<"pass with grade B";
	
	else if(avg>60)
	cout<<"pass with grade C";
	
	else
	cout<<"pass";
	
	return 0;
	
	
}

	
