#include <iostream>
using namespace std;

int main() {
    int grade, dayOfWeek;

    // Input grade and day of the week
    cout << "Enter grade (9, 10, or 11): ";
    cin >> grade;
    cout << "Enter day of the week (1 for Monday, 2 for Tuesday, ..., 5 for Friday): ";
    cin >> dayOfWeek;

    // Nested switch statements
    switch (grade) {
        case 9: // Grade 9
            switch (dayOfWeek) {
                case 1:
                    cout << "Grade 9 - Monday: Math" << endl;
                    break;
                case 2:
                    cout << "Grade 9 - Tuesday: English" << endl;
                    break;
                case 3:
                    cout << "Grade 9 - Wednesday: History" << endl;
                    break;
                case 4:
                    cout << "Grade 9 - Thursday: Science" << endl;
                    break;
                case 5:
                    cout << "Grade 9 - Friday: Physical Education" << endl;
                    break;
                default:
                    cout << "Invalid day of the week." << endl;
            }
            break;

        case 10: // Grade 10
            switch (dayOfWeek) {
                case 1:
                    cout << "Grade 10 - Monday: Biology" << endl;
                    break;
                case 2:
                    cout << "Grade 10 - Tuesday: Chemistry" << endl;
                    break;
                case 3:
                    cout << "Grade 10 - Wednesday: Geography" << endl;
                    break;
                case 4:
                    cout << "Grade 10 - Thursday: Literature" << endl;
                    break;
                case 5:
                    cout << "Grade 10 - Friday: Art" << endl;
                    break;
                default:
                    cout << "Invalid day of the week." << endl;
            }
            break;

        case 11: // Grade 11
            switch (dayOfWeek) {
                case 1:
                    cout << "Grade 11 - Monday: Physics" << endl;
                    break;
                case 2:
                    cout << "Grade 11 - Tuesday: Calculus" << endl;
                    break;
                case 3:
                    cout << "Grade 11 - Wednesday: Economics" << endl;
                    break;
                case 4:
                    cout << "Grade 11 - Thursday: Philosophy" << endl;
                    break;
                case 5:
                    cout << "Grade 11 - Friday: Computer Science" << endl;
                    break;
                default:
                    cout << "Invalid day of the week." << endl;
            }
            break;

        default:
            cout << "Invalid grade entered." << endl;
    }

    return 0;
}
