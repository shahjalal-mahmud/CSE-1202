#include<iostream>
#include<string>
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

int main()
{
    string name;
    int roll;
    int marks[3];

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your roll: ";
    cin >> roll;
    cout << "Your marks in 3 subjects: ";
    cin >> marks[0] >> marks[1] >> marks[2];

    Students S1(name, roll, marks[0], marks[1], marks[2]);

    S1.display();
    return 0;
}