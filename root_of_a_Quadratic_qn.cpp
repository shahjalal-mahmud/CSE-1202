// ****************************** Finding the root of a Quadratic Equation *********************

#include <iostream>
#include <cmath>
using namespace std;
int Root(double a, double b, double c)
{
    double d = (b * b) - (4 * a * c);
    if (sqrt(d) == 0)
    {
        cout << "The both roots are equal." << endl;
        double r;
        r = (-b) / (2 * a);
        cout << "r1 = r2 = " << r << endl;
    }
    else if (sqrt(d) > 0)
    {
        cout << "The roots are not equal." << endl;
        double r1, r2;
        r1 = ((-b) + sqrt(d)) / (2 * a);
        r2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "r1 = " << r1 << endl
             << "r2 = " << r2 << endl;
    }
    else
    {
        cout << "The roots are complex" << endl;
    }
}
int main()
{
    double a, b, c;
    cout << "Enter value for a, b, c: ";
    cin >> a >> b >> c;

    Root(a, b, c);

    return 0;
}