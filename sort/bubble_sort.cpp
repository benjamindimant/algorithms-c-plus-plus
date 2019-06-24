#include <iostream>
#include "../util/util.hpp"
using namespace std;
using namespace util;

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - 1 - i; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);
  cout << "Sorted array: \n";
  print_array(arr, n);
}
