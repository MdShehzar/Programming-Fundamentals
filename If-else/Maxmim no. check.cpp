// Write a program to find the maximum of two number 

#include<iostream>
using namespace std;
int main(){
	
	int n1, n2;
	cout<<"Enter two numbers : ";
	cin>>n1>> n2;
	
	if(n1>n2){
		cout<<n1 <<" is maximum. "<<endl;
	}
	else {
		cout<<n2 <<" is maximum. "<<endl;
	}
	
	return 0;
}
