#include <iostream>
using namespace std;

namespace util {
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
}  // namespace util
