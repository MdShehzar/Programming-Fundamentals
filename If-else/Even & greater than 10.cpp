// Write a program to check if a number is even and greater than 10

#include<iostream>
using namespace std;
int main(){
	
	int x;
	cout<<" Please enter a number : ";
	cin>>x;
	
	// 1st check if the number is even
	
	if (x%2 == 0){
		// if number is even, then check if is greater than 10
	
		if (x > 10){
			cout<< x << " is even and greater than 10";
		} 
		else {
			cout<< x << " is even but not greater than 10";
	}
	}
	else {
		cout<< x << " is odd";
	}	
	return 0;
}
