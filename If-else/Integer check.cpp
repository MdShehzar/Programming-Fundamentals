// Classify an integer as positive, negative, or zero

#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	if (n == 0){
		cout<<" The integer is zero";
	}
	else if (n >= 0){
		cout<<" The integer is positive";
	}
	else if (n <= 0){
		cout<<" The integer is negative";
	}
	return 0;
}
