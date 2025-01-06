#include<iostream>
using namespace std;
int main(){
	int choice; 
	double totalBalance = 0.0; 
	double amount;
	
	do{
		cout<<"***FINANCE MANAGEMENT SYSTEM***\n\n";
		cout<<"1. Add Income\n";
		cout<<"2. Add Expense\n";
		cout<<"3. View Balance\n";
		cout<<"4. Exit\n\n";
		cout<<"Please select an option: ";
		cin>>choice;
		
		switch (choice){
			case 1:
				cout<<"Enter income amount :";
				cin>>amount;
				if (amount > 0){
					totalBalance += amount;
					cout<<"Income added successfully! Your current balance is : Rs. "<< totalBalance <<endl;
				} else {
					cout<<"Invalid amount. Please enter a positive number.\n";
				}
				break;
			case 2:
				cout<<"Enter Expense amount :";
				cin>> amount;
				if (amount > 0){
					if (amount <= totalBalance){
						totalBalance -= amount;
						cout<<"Expense recorded! Your current balance is : Rs."<< totalBalance <<endl;
					} else {
						cout<<"Insufficient balance. Cannot record this expense.\n";
					}
				} else {
					cout<<"Invalid amount. Please enter a positive number.\n";
				}
				break;
			case 3:
				cout<<"Your current balance is Rs. "<<totalBalance <<endl;
				break;
			case 4:
				cout<<"Thanks for using the Finance Management System. Goodbye!\n";
				break;
			default:
				cout<<"Invalid selection. Please select an option from the menu (1-4).\n";
		}
			
	} while (choice != 4);
		
	return 0;
}
