#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int roll;
    string name;
    int marks[3];
    int totalMarks;
    char grade;

    void calculateTotalMarks()
    {
        totalMarks = marks[0] + marks[1] + marks[2];
    }

    void determineGrade()
    {
        double average = totalMarks / 3.0;
        if (average >= 90)
        {
            grade = 'A';
        }
        else if (average >= 80)
        {
            grade = 'B';
        }
        else if (average >= 70)
        {
            grade = 'C';
        }
        else if (average >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
    }

public:
    Student(int r, const string &n, int m1, int m2, int m3)
    {
        roll = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        calculateTotalMarks();
        determineGrade();
    }

    void displayDetails() const
    {
        cout << "Roll Number: " << roll << "\n"
             << "Name: " << name << "\n"
             << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << "\n"
             << "Total Marks: " << totalMarks << "\n"
             << "Grade: " << grade << endl;
    }

    int getTotalMarks() const
    {
        return totalMarks;
    }

    char getGrade() const
    {
        return grade;
    }
};

int main()
{
    Student student1(1538, "Preo", 85, 90, 92);
    Student student2(1539, "Shahjalal", 98, 88, 89);

    cout << "\nStudent 1 Details:\n";
    student1.displayDetails();

    cout << "\nStudent 2 Details:\n";
    student2.displayDetails();

    return 0;
}
