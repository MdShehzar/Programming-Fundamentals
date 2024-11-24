// Determine eligibility for a loan based on age and income level

#include<iostream>
using namespace std;
int main(){
	
	int age, income;
	cout<<"Enter your age : ";
	cin>>age;
	
	// 1st we will check the age
	if (age>=18){
		// Now we will check income level
		
		cout<<"Please enter your income to check loan eligibility : ";
		cin>> income;
		
		if (income >= 50000){
			cout<<"Congrats, you are eligible for loan! \n";
		}
		else {
			cout<<"Sorry, your income does not qualify for loan eligibility. \n";
		}
	}
	else {
		cout<<"Your are below the required age to apply for a loan. \n";
	}
	
	return 0;
}
