#include<iostream>

using namespace std;

int main(){
	
	int num;
	cout<<"Enter a number = ";
	cin>>num;
	
	
for(int i=1;i<=12;i++){
	
	int ans=num*i;
	cout<<num<<" * "<< i <<" = "<<ans<<endl;
}

}
