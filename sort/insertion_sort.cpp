#include <iostream>
#include "../util/util.hpp"
using namespace std;
using namespace util;

void insertion_sort(int arr[], int n) {
  for (int i = 1; i < n; ++i) {
    int j = i - 1;
    while (j >= 0 && arr[j + 1] < arr[j]) {
      swap(&arr[j], &arr[j + 1]);
      j--;
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  insertion_sort(arr, n);
  cout << "Sorted array: \n";
  print_array(arr, n);
}
