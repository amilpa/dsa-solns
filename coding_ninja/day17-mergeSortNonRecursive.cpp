#include <iostream>

int min(int a, int b) { return a < b ? a : b; }

void merge(int arr[], int left, int middle, int right) {
  int n1 = middle - left + 1;
  int n2 = right - middle;

  int left_arr[n1], right_arr[n2];

  for (int i = 0; i < n1; i++) {
    left_arr[i] = arr[left + i];
  }
  for (int i = 0; i < n2; i++) {
    right_arr[i] = arr[middle + 1 + i];
  }

  int i = 0, j = 0, k = left;

  while (i < n1 && j < n2) {
    if (left_arr[i] <= right_arr[j]) {
      arr[k] = left_arr[i];
      i++;
    } else if (left_arr[i] > right_arr[j]) {
      arr[k] = right_arr[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = left_arr[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = right_arr[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  // Write Your Code Here
  int current_size = 1;
  int left, right, middle;
  while (current_size < r + 1) {
    left = 0;
    while (left < r + 1 - current_size) {
      middle = left + current_size - 1;
      right = min(left + current_size * 2 - 1, r + 1);

      merge(arr, left, middle, right);
      left = left + 2 * current_size;
    }
    current_size *= 2;
  }
}
