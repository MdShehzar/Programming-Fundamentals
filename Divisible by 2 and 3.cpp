// Check if a number is divisible by 2 and 3

#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	if (n%2 == 0){				// checking if number is divisible by 2
		if (n%3 == 0){			// checking if number is divisible by 3
			cout<< n <<" is divisble by both 2 and 3.";
		}
		else{
			cout<< n << " is divisible by 2 only.";
		}
	} else if (n%3 == 0){
		cout<<n <<" is divisble by 3 only.";
	} else {
		cout<< n <<" is neither divisible by 2 nor 3.";
	}
		
	return 0;
} 
