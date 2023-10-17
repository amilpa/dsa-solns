#include <iostream>
#include <vector>

std::vector<int> countFrequency(int n, int x, std::vector<int> &nums) {
  // Write your code here.
  std::vector<int> freq(n, 0);

  int i;
  for (i = 0; i < nums.size(); i++) {
    freq[nums[i] - 1]++;
  }
  return freq;
}