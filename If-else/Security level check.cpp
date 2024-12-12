// Verify if a user has the required credentials and security level

#include <iostream>
using namespace std;

int main() {
    string username, password;
    int securityLevel;

    // Set valid credentials
    string validUsername = "user";
    string validPassword = "1234";
    int requiredSecurityLevel = 3;

    // Get user input
    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    cout << "Enter security level: ";
    cin >> securityLevel;

    // Verify credentials and security level
    if (username == validUsername) {
        if (password == validPassword) {
            if (securityLevel >= requiredSecurityLevel) {
                cout << "Access granted." << endl;
            } else {
                cout << "Access denied. Security level too low." << endl;
            }
        } else {
            cout << "Access denied. Wrong password." << endl;
        }
    } else {
        cout << "Access denied. Invalid username." << endl;
    }

    return 0;
}
