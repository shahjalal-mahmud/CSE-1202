// **************************** Swapping two variable without using a 3rd variable ************

#include <iostream>
using namespace std;

void Swap(double *a, double *b)
{
    *a = *a - *b;
    *b = *a + *b;
    *a = *b - *a;
}
void Display(double *a, double *b)
{
    cout << "a = " << *a << endl
         << "b = " << *b << endl;
}
int main()
{
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: " << endl;
    Display(&a, &b);

    Swap(&a, &b);

    cout << "After swapping: " << endl;
    Display(&a, &b);
    return 0;
}