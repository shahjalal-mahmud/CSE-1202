#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Enter the upper limit (n): ";
  cin >> n;

  cout << "Perfect numbers between 2 and " << n << " are: ";

  // Iterate from 2 to n
  for (int i = 2; i <= n; i++) {
    int sum = 0;

    // Check for divisors from 1 to i-1 (excluding i)
    for (int j = 1; j < i; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }

    // If the sum of divisors is equal to the number, it's perfect
    if (sum == i) {
      cout << i << " ";
    }
  }

  cout << endl;

  return 0;
}