#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int marks;
    char grade;

    // Get student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks: ";
    cin >> marks;

    // Assign grade using if-else ladder
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    }
    else if (marks >= 60 && marks <= 69) {
        grade = 'B';
    }
    else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    }
    else if (marks >= 40 && marks <= 49) {
        grade = 'D';
    }
    else if (marks < 40 && marks >= 0) {
        grade = 'E';
    }
    else {
        cout << "Invalid marks!" << endl;
        return 0;
    }

    // Display results
    cout << "\n--- Student Results ---" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}