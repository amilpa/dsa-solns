#include <iostream>
#include <vector>

void insertionSort(int arr[], int n) {
  // write your code here
  int temp;
  int key;
  int i, j;
  for (i = 1; i < n; i++) {

    key = arr[i];
    j = i - 1;

    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}