// Write a program to check if a number is positive

#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	if(n>0){
		cout<<"Number is positive. "<<endl;
	}
	else {
		cout<<"Number is negative. "<<endl;
	}
	
	return 0;
}
