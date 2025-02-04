#include <iostream>
#include <iomanip> // for fixed and setprecision
using namespace std;

int main() {
    // Declare a variable to store the points
    double points;

    // Prompt the user to enter the points
    cout << "Enter the number of points (0.0...12.0): ";
    cin >> points;

    // Check if the input is within the valid range
    if (points < 0.0 || points > 12.0) {
        cout << "Invalid number of points!" << endl;
        return 1; // Exit the program with an error code
    }

    // Determine the grade based on the points
    if (points >= 0.0 && points <= 4.4) {
        cout << "Grade: 2.0 (Unsatisfactory)" << endl;
    } else if (points >= 4.5 && points <= 5.2) {
        cout << "Grade: 3.0 (Satisfactory)" << endl;
    } else if (points >= 5.3 && points <= 6.2) {
        cout << "Grade: 3.5 (Above Satisfactory)" << endl;
    } else if (points >= 6.3 && points <= 7.2) {
        cout << "Grade: 4.0 (Good)" << endl;
    } else if (points >= 7.3 && points <= 8.2) {
        cout << "Grade: 4.5 (Above Good)" << endl;
    } else if (points >= 8.3 && points <= 9.0) {
        cout << "Grade: 5.0 (Very Good)" << endl;
    } else if (points >= 9.1 && points <= 10.0) {
        cout << "Grade: 5.5 (Excellent)" << endl;
    } else if (points >= 10.1 && points <= 11.0) {
        cout << "Grade: 6.0 (Outstanding)" << endl;
    } else if (points >= 11.1 && points <= 12.0) {
        cout << "Grade: 6.5 (Exceptional)" << endl;
    } else {
        cout << "Invalid number of points!" << endl;
    }

    return 0;
}
