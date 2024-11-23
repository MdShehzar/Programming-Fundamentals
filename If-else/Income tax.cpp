// Determine tax brackets based on income levels

#include<iostream>
using namespace std;
int main(){
	
	int salary;
	cout<<"Enter your monthly salary : ";
	cin>>salary;
	
	if (salary <= 50000){
		cout<<" Your income tax is 5%";
	}
	else if (salary <= 75000){
		cout<<" Your income tax is 10%";
	}
	else if (salary <= 100000){
		cout<<" Your income tax is 20%";
	}
	return 0;
}
