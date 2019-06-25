#include <iostream>
using namespace std;
int memoize[11];

// Start at the end and go backwards
int fibonacci(int n) {
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
  for (int i = 0; i < 11; ++i) {
    memoize[i] = -1;
  }
  cout << fibonacci(10) << "\n";
}
