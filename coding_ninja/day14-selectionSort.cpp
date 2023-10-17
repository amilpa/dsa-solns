#include <iostream>
#include <vector>

void selectionSort(std::vector<int> &arr) {
  // Write your code here.
  int min;
  int temp;
  for (int i = 0; i < arr.size(); i++) {
    min = i;
    for (int j = i; j < arr.size(); j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    if (min != i) {
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
  }
}
