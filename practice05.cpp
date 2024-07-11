#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
bool isKrishnamurthy(int n)
{
    if (n <= 0)
    {
        return false;
    }

    int sum = 0;
    int originaalN = n;
    while(n>0)
    {
        int digit = n % 10;
        sum = sum + factorial(digit);
        n = n / 10;
    }
    return sum == originaalN;
}
void Display_Krishnamurthy(int n)
{
    cout << "All the Krishnamurthy number in the given range: ";
    for (int i = 2; i <= n; i++)
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
    cout<<"Enter a number: ";
    cin>>n;

    Display_Krishnamurthy(n);
    return 0;
}