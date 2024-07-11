#include <iostream>
using namespace std;
int main()
{
    long double n, commision;
    cout << "Enter your salary: ";
    cin >> n;

    if (n >= 50000)
    {
        commision = n + (n * 0.05); // Above 50k salaray the commision is 5%
    }
    else if (n >= 100000)
    {
        commision = n + (n * 0.1); // Above 100k salaray the commision is 10%
    }
    else if (n < 50000)
    {
        commision = n; // Below 50k there is no commision at all.
    }
    else
    {
        cout << "Invalid Salary.";
    }
    cout << "Your salary is: " << n << endl
         << "Your salary with commision is: " << commision << endl;
    return 0;
}