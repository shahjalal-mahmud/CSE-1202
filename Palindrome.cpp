#include <iostream>
using namespace std;

bool Palindrome(int n)
{
    int originalNum, reversedNum = 0, digit;
    originalNum = n;
    while (n > 0)
    {
        digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n = n / 10;
    }
    return originalNum == reversedNum;
}
void printPalindrome(int n)
{
    cout << "All the Palindrome numbers from 0 to " << n << " are: ";
    for (int i = 10; i <= n; i++)
    {
        if (Palindrome(i))
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
    printPalindrome(n);
    return 0;
}