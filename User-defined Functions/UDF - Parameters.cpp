#include<iostream>
using namespace std;

int getSum(int a, int b);			// (int a, int b) --> parameters (not actual values)
									// parameters and arguments are different
							// parameter used when declaring & defining functions
							// argument is when we provide the actual value 
int main(){
	int num1, num2;
	
	cout<<"Enter first integer: ";
	cin>> num1;
	
	cout<<"Enter second integer: ";
	cin>> num2;	
	
	cout<<"The sum of a & b is: "<< getSum(num1, num2);		// num1, num2 are arguments
	return 0;
}

int getSum(int a, int b){
	return a+b;
}
