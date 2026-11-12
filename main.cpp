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
    getline(cin, studentName); 
    cout << "Enter student ID)";
    getline(cin, studentID);

    cout << "\nStudent Information:" << endl;
    cout << "Student name: " << studentName << endl;
    cout << "Student ID: " << studentID << endl;

    return 0;

    }
