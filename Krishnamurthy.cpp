#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

bool isKrishnamurthy(int n)
{
    int sum = 0;
    int num = n;
    while (num > 0)
    {
        int digit = num % 10; 
        sum += factorial(digit);
        num = num / 10;
    }
    return sum == n;
}

void printKrishnamurthy(int n)
{
    cout << "All the Krishnamurthy numbers from 0 to " << n << " are: ";
    for (int i = 0; i <= n; i++)
    {
        if (isKrishnamurthy(i))
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

    printKrishnamurthy(n);
    return 0;
}
