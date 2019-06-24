#include <iostream>
#include "../util/util.hpp"
using namespace std;
using namespace util;

void merge(int arr[], int l, int m, int r) {
  // Initialize variables
  int i = 0;
  int j = 0;
  int n_l = m - l + 1;
  int n_r = r - m;

  // Copy into temp arrays
  int L[n_l];
  int R[n_r];
  for (i = 0; i < n_l; ++i) {
    L[i] = arr[l + i];
  }
  for (j = 0; j < n_r; ++j) {
    R[j] = arr[m + 1 + j];
  }

  // Merge temps back into array sorted
  i = 0;
  j = 0;
  int k = l;
  while (i < n_l && j < n_r) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Enter if all elements of L are larger than remaining R
  while (i < n_l) {
    arr[k] = L[i];
    i++;
    k++;
  }
  // Enter if all elements of R are larger than remaining L
  while (j < n_r) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void merge_sort(int arr[], int l, int r) {
  if (l < r) {
    int m = (l + r) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  merge_sort(arr, 0, n - 1);
  cout << "Sorted array: \n";
  print_array(arr, n);
}
