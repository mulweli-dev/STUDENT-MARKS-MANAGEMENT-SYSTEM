#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    string studentID;

    cout <<"==============================" << endl;
    cout << "STUDENT MARKS MANAGEMENT SYSTEM" << endl;
    cout <<"==============================" << endl;

    cout << "Enter student name:";
    cin >> studentName;
    getline(cin, studentName); // To read the full name including spaces
    cout << "Enter student ID:";
    cin >> studentID;
    getline(cin, studentID); // To read the full ID including spaces

    cout << "\nStudent Information:" << endl;
    cout << "Student name: " << studentName << endl;
    cout << "Student ID: " << studentID << endl;

    return 0;

    }