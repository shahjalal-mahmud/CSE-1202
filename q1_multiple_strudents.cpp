#include <iostream>
#include <string>
#include <vector> // for storing multiple students

using namespace std;

class Students {
private:
    string name;
    int roll;
    int marks[3];
    int totalmarks;
    string grade;

    void calculateGrade() {
        double average = totalmarks / 3.0;
        if (average >= 80 && average <= 100) {
            grade = "A+";
        } else if (average >= 70) {
            grade = "A";
        } else if (average >= 60) {
            grade = "A-";
        } else if (average >= 50) {
            grade = "B";
        } else if (average >= 40) {
            grade = "C";
        } else if (average >= 0) {
            grade = "F";
        } else {
            grade = "Invalid";
        }
    }

public:
    Students(const string& n, int r, int m1, int m2, int m3)
        : name(n), roll(r), totalmarks(0) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        setData();
    }

    void setData() {
        totalmarks = marks[0] + marks[1] + marks[2];
        calculateGrade();
    }

    void display() const {
        cout << "\nStudent Details:\n"
             << "Name: " << name << endl
             << "Roll Number: " << roll << endl
             << "Marks in Subject 1: " << marks[0] << endl
             << "Marks in Subject 2: " << marks[1] << endl
             << "Marks in Subject 3: " << marks[2] << endl
             << "Total Marks: " << totalmarks << endl
             << "Grade: " << grade << endl;
    }
};

int main() {
    vector<Students> students;
    string name;
    int roll;
    int marks[3];
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        cin.ignore(); // to clear the newline character from the input buffer
        cout << "Enter name for student " << i + 1 << ": ";
        getline(cin, name);
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> roll;
        cout << "Enter marks for 3 subjects for student " << i + 1 << ": ";
        cin >> marks[0] >> marks[1] >> marks[2];

        Students student(name, roll, marks[0], marks[1], marks[2]);
        students.push_back(student);
    }

    for (const auto& student : students) {
        student.display();
    }

    return 0;
}
