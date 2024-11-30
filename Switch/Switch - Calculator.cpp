// Implement a simple calculator (add, subtract, multiply, divide).

#include<iostream>
using namespace std;
int main(){
	
	double n1, n2;
	char operation;
	
	cout<<" Enter first number : ";
	cin>>n1;
	
	cout<<" Select an operation from + - * and / : ";
	cin>>operation;
	
	cout<<" Enter second number : ";
	cin>>n2;
	
	switch (operation){
		case '+': 
			cout<< "Result : "<< (n1+n2) <<endl;
			break;
		case '-':
			cout<< "Result : "<< (n1-n2) <<endl;
			break;
		case '*':
			cout<< "Result : "<< (n1*n2) <<endl;
			break;
		case '/':
			cout<< "Result : "<< (n1/n2) <<endl;
			break;
	}
	
	return 0;
}
