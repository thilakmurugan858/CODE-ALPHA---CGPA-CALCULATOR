#include <iostream>
using namespace std;

int getGradePoint(char grade) {
    switch (grade) {
        case 'A': return 9;
        case 'B': return 8;
        case 'C': return 7;
        case 'D': return 6;
        case 'F': return 4;
        default:  return -1;
    }
}

int main() {
    int n;
    float credits;
    float totalCredits = 0.0;
    float totalGradePoints = 0.0;
    char grade;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;

        cout << "Enter Grade (A/B/C/D/F): ";
        cin >> grade;
        grade = toupper(grade);

        int gradePoint = getGradePoint(grade);
        if (gradePoint == -1) {
            cout << "Invalid grade entered. Skipping this course.\n";
            continue;
        }

        cout << "Enter Credit Points: ";
        cin >> credits;

        totalCredits += credits;
        totalGradePoints += gradePoint * credits;
    }

    if (totalCredits == 0) {
        cout << "\nCGPA cannot be calculated.\n";
    } else {
        float cgpa = totalGradePoints / totalCredits;
        cout << "\nFinal CGPA: " << cgpa << endl;
    }

    return 0;
}
