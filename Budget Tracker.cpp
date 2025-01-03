#include <iostream>
using namespace std;

int main() {
    double budget = 0.0;  // Total budget
    double income = 0.0;  // Total income
    double expenses = 0.0;  // Total expenses
    double amount;         // Temporary variable for income/expense
    int choice;

    do {
        // Display menu
        cout << "\n*** Budget Tracker ***\n";
        cout << "1. Set Initial Budget\n";
        cout << "2. Add Income\n";
        cout << "3. Add Expense\n";
        cout << "4. View Summary\n";
        cout << "5. Exit\n";
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Set Initial Budget
                cout << "Enter your initial budget: ";
                cin >> budget;
                if (budget < 0) {
                    cout << "Budget cannot be negative. Try again.\n";
                } else {
                    cout << "Initial budget set to Rs. " << budget << endl;
                }
                break;
            }
            case 2: {
                // Add Income
                cout << "Enter the amount of income to add: ";
                cin >> amount;
                if (amount > 0) {
                    income += amount;
                    budget += amount;
                    cout << "Income of Rs. " << amount << " added successfully!\n";
                } else {
                    cout << "Invalid amount. Please enter a positive value.\n";
                }
                break;
            }
            case 3: {
                // Add Expense
                cout << "Enter the expense amount: ";
                cin >> amount;
                if (amount > 0) {
                    if (amount <= budget) {
                        expenses += amount;
                        budget -= amount;
                        cout << "Expense of Rs. " << amount << " recorded successfully!\n";
                    } else {
                        cout << "Insufficient budget to record this expense.\n";
                    }
                } else {
                    cout << "Invalid amount. Please enter a positive value.\n";
                }
                break;
            }
            case 4: {
                // View Summary
                cout << "\n--- Budget Summary ---\n";
                cout << "Total Income: Rs. " << income << endl;
                cout << "Total Expenses: Rs. " << expenses << endl;
                cout << "Remaining Budget: Rs. " << budget << endl;
                break;
            }
            case 5:
                // Exit
                cout << "Thank you for using the Budget Tracker. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please select a valid option.\n";
        }
    } while (choice != 5);

    return 0;
}
