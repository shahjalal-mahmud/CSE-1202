#include <iostream>
#include <cmath>
using namespace std;
int countDigit(int n)
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
    if (n < 0)
    {
        return false;
    }
    int sum = 0, digit, lastdigit, originalN;
    originalN = n;
    digit = countDigit(n);
    while (n > 0)
    {
        lastdigit = n % 10;
        sum = sum + pow(lastdigit, digit);
        n = n / 10;
    }
    return sum == originalN;
}
void Display_Armstrong(int n)
{
    cout << "All the Armstrong number in the given range: ";
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
    cout<<"Enter a number: ";
    cin>>n;

    Display_Armstrong(n);
    return 0;
}