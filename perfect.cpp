#include <iostream>
#include <cmath>
using namespace std;

bool Perfect(int n)
{
    if (n <= 1)
    {
        return false;
    }

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}
void printPerfect(int n)
{
    cout << "All the perfect number from 0 to " << n << " : ";
    for (int i = 1; i <= n; i++)
    {
        if (Perfect(i))
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

    printPerfect(n);
    return 0;
}