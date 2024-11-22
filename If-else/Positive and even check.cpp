// Write a program to print whether a number is positive and even

#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	if (n > 0){				// checking if number is positive 
		if (n%2 == 0){			// checking if number is even
			cout<< n <<" is postive and even.";
		}
		else{
			cout<< n << " is positive but not even.";
		}
	} else if (n%2 == 0){
		cout<<n <<" is even but not positive.";
	} else {
		cout<< n <<" is neither positive nor even.";
	}
		
	return 0;
} 
