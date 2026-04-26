#include <iostream>
using namespace std;

int main() {
    string student_name;
    int student_age;
    char student_grade;
    float student_marks;

    cout << "Enter your name: ";
    cin >> student_name;

    cout << "Enter your age: ";
    cin >> student_age;

    cout << "Enter your grade: ";
    cin >> student_grade;

    cout << "Enter your marks: ";
    cin >> student_marks;

    cout << "\n----- Student Details -----\n";
    cout << student_name << "\n"
         << student_age << "\n"
         << student_grade << "\n"
         << student_marks << "\n";

    return 0;
}