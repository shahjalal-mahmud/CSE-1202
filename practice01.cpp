#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void printPrime(int n)
{
    cout << "All the prime number in the given range: ";
    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printPrime(n);
    return 0;
}