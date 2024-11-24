// Assign grades based on marks (A for 90+, B for 80–89, C for 70–79, etc.)

#include<iostream>
using namespace std;
int main(){
	
	int marks;
	cout<<"Enter your marks : ";
	cin>>marks;
	
	if (marks >= 90){
		cout<<" Your Grade is A";
	}
	else if (marks >= 80){
		cout<<" Your Grade is B";
	}
	else if (marks >= 70){
		cout<<" Your Grade is C";
	}else if (marks >= 60){
		cout<<" Your Grade is D";
	}
	else if (marks 	>= 50){
		cout<<" Your Grade is E";
	}
	else {
		cout<<" Failed! Work hard next time";
	}
}
