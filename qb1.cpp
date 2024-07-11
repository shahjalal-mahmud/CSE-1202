#include <iostream>
using namespace std;
class students
{
private:
    string name;
    int roll;
    int marks[3];
    int totalmarks;
    string grade;

public:
    students(string n, int r, int m1, int m2, int m3);
    void setmarks();
    void getmarks();
    void totalMarks();
    string grade();
};
students ::students(string n, int r, int m1, int m2, int m3)
{
    name = n;
    roll = r;
    marks[0] = m1;
    marks[1] = m2;
    marks[2] = m3;
}
void students ::setmarks()
{
    cout << "Math marks: ";
    cin >> marks[0];

    cout << "Physics marks: ";
    cin >> marks[1];

    cout << "Chemistry marks: ";
    cin >> marks[2];
}
void students::getmarks()
{
    cout << "Marks in Math:" << marks[0] << endl
         << "Marks in Physics: " << marks[1] << endl
         << "Marks in Chemistry: " << marks[2] << endl;
}
void students ::totalMarks()
{
    totalmarks = marks[0] + marks[1] + marks[2];
}
string students ::grade()
{
    double average = totalmarks / 3;
    if (average >= 80)
    {
        return "A+";
    }
    else if (average >= 70)
    {
        return "A-";
    }
    else if (average >= 60)
    {
        return "B+";
    }
    else if (average >= 40)
    {
        return "C";
    }
    else if (average < 40)
    {
        return "FAIL";
    }
    else
    {
        cout << "Invalid marks." << endl;
    }
}
void getmarks()
{
    cout << "Marks in Math: ";
}

int main()
{
    return 0;
}