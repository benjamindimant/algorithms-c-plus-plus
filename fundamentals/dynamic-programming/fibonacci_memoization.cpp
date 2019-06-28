#include <iostream>
using namespace std;

// Start at the end and go backwards
int fibonacci(int n) {
  int memoize[n + 1];
  for (int i = 0; i < n + 1; ++i) {
    memoize[i] = -1;
  }
  if (memoize[n] == -1) {
    if (n <= 1) {
      memoize[n] = n;
    } else {
      memoize[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
  }
  return memoize[n];
}

int main() {
  cout << fibonacci(10) << "\n";
}
