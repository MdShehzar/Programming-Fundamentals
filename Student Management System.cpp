#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100; // Maximum number of students

// Structure to store student details
struct Student {
    string name;
    string id;
    string department;
};

// Function prototypes
void addStudent(Student students[], int& count);
void displayAllStudents(Student students[], int count);
void searchStudentById(Student students[], int count);
void updateStudentInfo(Student students[], int count);
void deleteStudent(Student students[], int& count);

int main() {
    Student students[MAX_STUDENTS]; // Array to store students
    int studentCount = 0;           // Current count of students
    int choice;

    do {
        // Menu for the system
        cout << "\nStudent Management System\n";
        cout << "1. Add a Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search for a Student by ID\n";
        cout << "4. Update Student Information\n";
        cout << "5. Delete a Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline character for input buffer

        switch (choice) {
            case 1:
                addStudent(students, studentCount);
                break;
            case 2:
                displayAllStudents(students, studentCount);
                break;
            case 3:
                searchStudentById(students, studentCount);
                break;
            case 4:
                updateStudentInfo(students, studentCount);
                break;
            case 5:
                deleteStudent(students, studentCount);
                break;
            case 6:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

// Function to add a new student
void addStudent(Student students[], int& count) {
    if (count >= MAX_STUDENTS) {
        cout << "Student limit reached. Cannot add more students.\n";
        return;
    }
    cout << "Enter Student Name: ";
    getline(cin, students[count].name);
    cout << "Enter Student ID: ";
    getline(cin, students[count].id);
    cout << "Enter Student Department: ";
    getline(cin, students[count].department);
    count++;
    cout << "Student added successfully!\n";
}

// Function to display all students
void displayAllStudents(Student students[], int count) {
    if (count == 0) {
        cout << "No students to display.\n";
        return;
    }
    cout << "\nList of Students:\n";
    for (int i = 0; i < count; i++) {
        cout << "Name: " << students[i].name
             << ", ID: " << students[i].id
             << ", Department: " << students[i].department << '\n';
    }
}

// Function to search for a student by ID
void searchStudentById(Student students[], int count) {
    string id;
    cout << "Enter Student ID to search: ";
    getline(cin, id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            cout << "Student Found:\n";
            cout << "Name: " << students[i].name
                 << ", ID: " << students[i].id
                 << ", Department: " << students[i].department << '\n';
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}

// Function to update student information
void updateStudentInfo(Student students[], int count) {
    string id;
    cout << "Enter Student ID to update: ";
    getline(cin, id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            cout << "Enter new details for the student:\n";
            cout << "Name (" << students[i].name << "): ";
            getline(cin, students[i].name);
            cout << "Department (" << students[i].department << "): ";
            getline(cin, students[i].department);
            cout << "Student information updated successfully!\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}

// Function to delete a student
void deleteStudent(Student students[], int& count) {
    string id;
    cout << "Enter Student ID to delete: ";
    getline(cin, id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            // Shift all elements after the found student
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            cout << "Student with ID " << id << " deleted successfully!\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}
