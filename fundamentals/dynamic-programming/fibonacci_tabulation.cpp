#include <iostream>
using namespace std;

// Start at the beginning and go forwards
int fibonacci(int n) {
  int arr[n + 1];
  for (int i = 0; i <= n; ++i) {
    if (i <= 1) {
      arr[i] = i;
    } else {
      arr[i] = arr[i - 1] + arr[i - 2];
    }
  }
  return arr[n];
}

int main() {
  cout << fibonacci(10) << "\n";
}
