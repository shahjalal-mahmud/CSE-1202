#include <iostream>
#include <cmath>
using namespace std;
bool isPerfect(int n)
{
    int sum = 0;

    if (n <= 1)
    {
        return false;
    }
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
    cout << "All the Perfect number in the given range: ";
    for (int i = 1; i <= n; i++)
    {
        if (isPerfect(i))
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