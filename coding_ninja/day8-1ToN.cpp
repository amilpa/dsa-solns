#include <iostream>
#include <vector>

void createArray(int x, std::vector<int> &myArray) {
  if (x <= 0) {
    return;
  }
  createArray(x - 1, myArray);
  myArray.push_back(x);
};

std::vector<int> printNos(int x) {
  // Write Your Code Here
  std::vector<int> myArray;
  createArray(x, myArray);
  return myArray;
}
