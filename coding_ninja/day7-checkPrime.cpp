#include <cmath>
bool isPrime(int n) {
  // Write your code here.
  if (n == 1) {
    return false;
  }
  if (n == 2) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }
  int i = 3;
  int flag = 0;
  while (i <= std::sqrt(n)) {
    if (n % i == 0) {
      return false;
    }
    i++;
  }
  return true;
}
