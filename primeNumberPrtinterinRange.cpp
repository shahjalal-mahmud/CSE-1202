#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Name: Preota Saha" << endl;
    cout << "Roll: 1538" << endl;
    
    int n;
    cout << "Enter a positive integer number: ";
    cin >> n;
    cout << "Prime numbers from 0 to " << n << ": ";

    for (int a = 2; a <= n; a++)
    {
        bool isPrime = true;
        for (int b = 2; b <= sqrt(a); b++)
        {
            if (a % b == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << a << " ";
        }
    }

    cout << endl;
    return 0;
}
