#include <iostream>
#include <string>
using namespace std;

class students
{
private:
    string name;
    int roll;
    int marks[3];
    int totalmarks;
    string Grade;

    void TotalMarks()
    {
        totalmarks = marks[0] + marks[1] + marks[2];
    }

    void calculateGrade()
    {
        double average = totalmarks / 3.0;
        if (average >= 80)
        {
            Grade = "A+";
        }
        else if (average >= 70)
        {
            Grade = "A-";
        }
        else if (average >= 60)
        {
            Grade = "B+";
        }
        else if (average >= 40)
        {
            Grade = "C";
        }
        else
        {
            Grade = "FAIL";
        }
    }

public:
    students(string n, int r, int m1, int m2, int m3)
    {
        name = n;
        roll = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        TotalMarks();
        calculateGrade();
    }

    void setdata()
    {
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter your roll: ";
        cin >> roll;
    }

    void setmarks()
    {
        cout << "Enter Math marks: ";
        cin >> marks[0];

        cout << "Enter Physics marks: ";
        cin >> marks[1];

        cout << "Enter Chemistry marks: ";
        cin >> marks[2];
        TotalMarks();
        calculateGrade();
    }

    void display() const
    {
        cout << "\nStudent Details:\n"
             << "Name: " << name << endl
             << "Roll Number: " << roll << endl
             << "Marks in Math: " << marks[0] << endl
             << "Marks in Physics: " << marks[1] << endl
             << "Marks in Chemistry: " << marks[2] << endl
             << "Total Marks: " << totalmarks << endl
             << "Grade: " << Grade << endl;
    }
};

int main()
{
    string name;
    int roll, m1, m2, m3;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter marks for three subjects:" << endl;
    cout << "Math marks: ";
    cin >> m1;
    cout << "Physics marks: ";
    cin >> m2;
    cout << "Chemistry marks: ";
    cin >> m3;

    students s1(name, roll, m1, m2, m3);
    s1.display();

    return 0;
}
