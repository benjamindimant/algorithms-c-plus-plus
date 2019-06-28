#include <iostream>
using namespace std;

int knapsack(int capacity, int num_items, int *weights, int *values) {
  if (capacity == 0 || num_items == 0) {
    return 0;
  }
}

int main() {
  int weights[3] = { 10, 20, 30 };
  int values[3] = { 1, 2, 3 };
  cout << knapsack(50, 3, weights, values) << "\n";
}
