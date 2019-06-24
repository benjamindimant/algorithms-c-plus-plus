#include <iostream>
using namespace std;

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - 1 - i; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);
  cout << "Sorted array: \n";
  print_array(arr, n);
}
