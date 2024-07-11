#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

bool isArmstrong(int n)
{
    int sum = 0;
    int num = n;
    int digits = countDigits(n);
    while (n > 0)
    {
        int lastDigits = n % 10;
        sum += pow(lastDigits, digits);
        n = n / 10;
    }
    return sum == num;
}

void printArmstrong(int n)
{
    cout << "All the Armstrong number from 0 to " << n << " : ";
    for (int i = 0; i <= n; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter a nummber: ";
    cin >> n;

    printArmstrong(n);
    return 0;
}