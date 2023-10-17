#include <iostream>

int sumOfAllDivisors(int n) {
  // Write your code here.
  int sum = 0;
  int div = 1;
  for (int i = 1; i <= n; i++) {
    div = 1;
    while (div <= i / 2) {
      if (i % div == 0) {
        sum += div;
      }
      div++;
    }
    sum += i;
  }
  return sum;
}