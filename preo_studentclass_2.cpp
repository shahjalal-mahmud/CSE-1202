#include<iostream>
#include <string>
using namespace std;
class Student{
    private:
    string name;
    int id;
    int physicsMarks;
    int chemistryMarks;
    int mathMarks;
    public:
    Student(string n, int ID, int p, int c, int m) {
        name = n;
        id = ID;
        physicsMarks = p;
        chemistryMarks = c;
        mathMarks  = m;
    }
    double AverageMarks() {
        return (physicsMarks + chemistryMarks + mathMarks) / 3.0;
    }
     char Grade()
    {
        double average =AverageMarks();
        if (average >= 90)
        {
            return 'A';
        }
        else if (average >= 80)
        {
           return  'B';
        }
        else if (average >= 70)
        {
           return  'C';
        }
        else if (average >= 60)
        {
            return 'D';
        }
        else
        {
            return  'F';
        }
       
    }
    /*int Grade(){
    char Grade = 0;
    Grade = ( physicsMarks + chemistryMarks + mathMarks)/3;
  return Grade;
    }*/
    
void SDetails() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Physics Marks: " << physicsMarks << endl;
        cout << "Chemistry Marks: " << chemistryMarks << endl;
        cout << "Math Marks: " << mathMarks << endl;
        cout << "AverageMarks: " <<  AverageMarks()  << endl;
        cout << "Grade: " << Grade() << endl;
        
}

};

int main()
{
    string name;
    int id, physicsMarks, chemistryMarks, mathMarks;

    cout << "Enter student name: ";
    getline(cin, name); 

    cout << "Enter student ID: ";
    cin >> id;

    cout << "Enter marks for three subjects : ";
    cin >>physicsMarks>>chemistryMarks>>mathMarks;

    Student s1(name, id, physicsMarks, chemistryMarks, mathMarks);

    s1.SDetails();

    return 0;
}