#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        cout << "Invalid Number." << endl;
        return false;
    }
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimes(int n)
{
    cout << "Prime numbers from 0 to " << n << " are: ";
    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printPrimes(n);
    return 0;
}
