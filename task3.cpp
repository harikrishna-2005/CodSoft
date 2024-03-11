#include <iostream>
#include <vector>
#include <limits> // For std::numeric_limits

using namespace std;

int main() {
    vector<string> studentNames;
    vector<float> grades;
    string studentName;
    float grade;
    int numberOfStudents;

    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    cin.ignore(); // To ignore the newline character after reading numberOfStudents

    // Input student names and grades
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Enter name for student " << i + 1 << ": ";
        getline(cin, studentName);
        studentNames.push_back(studentName);

        cout << "Enter grade for " << studentName << ": ";
        cin >> grade;
        cin.ignore(); // To ignore the newline character after reading grade
        grades.push_back(grade);
    }

    // Calculate total, average, highest, and lowest grades
    float total = 0, average = 0;
    float highestGrade = numeric_limits<float>::min();
    float lowestGrade = numeric_limits<float>::max();

    for (int i = 0; i < grades.size(); ++i) {
        total += grades[i];
        if (grades[i] > highestGrade) highestGrade = grades[i];
        if (grades[i] < lowestGrade) lowestGrade = grades[i];
    }

    average = total / numberOfStudents;

    // Display results
    cout << "\nAverage grade: " << average << endl;
    cout << "Highest grade: " << highestGrade << endl;
    cout << "Lowest grade: " << lowestGrade << endl;

    return 0;
}
