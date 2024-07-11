#include <iostream>
using namespace std;
bool isPlindrome(int n)
{
    if (n < 0)
    {
        return false;
    }
    int originalN, reversedN = 0, digit;
    originalN = n;
    while (n > 0)
    {
        digit = n % 10;
        reversedN = reversedN * 10 + digit;
        n = n / 10;
    }
    return reversedN == originalN;
}
void printPalindrome(int n)
{
    int count = 0;
    cout << "All the Palindrome number in the given range: ";
    for (int i = 0; i <= n; i++)
    {
        if (isPlindrome(i))
        {
            cout << i << " ";
            count++;
        }
    }
    cout << endl
         << "there are " << count << " palindrom numbers between 0 to " << n << " ." << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printPalindrome(n);
    return 0;
}