// Build a menu-driven program that prints options for a user to select

#include <iostream>
using namespace std;

int main() {
    int choice;

    // Start the menu loop
    cout << "Welcome to the menu program!" << endl;

    while (true) {
        // Display the menu
        cout << "\nMenu:" << endl;
        cout << "1. Say Hello" << endl;
        cout << "2. Display a Favorite Number" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        // Check user input using if and switch
        if (choice >= 1 && choice <= 3) {
            system ['cls'];
			switch (choice) {
                case 1:
                    cout << "Hello! Welcome to the program." << endl;
                    break;
                case 2:
                    cout << "My favorite number is 42!" << endl;
                    break;
                case 3:
                    cout << "Exiting the program. Goodbye!" << endl;
                    return 0; // Exit the program
            }
        } else {
            // Handle invalid input
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
