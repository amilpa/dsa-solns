#include<iostream>
#include<vector>

void recurse(int len,int n,std::vector<int> &nums){
    if(n<len/2){
      return;
    }
    std::swap(nums[n],nums[nums.size()-1-n]);
    recurse(len, n-1 ,nums);
}

std::vector<int> reverseArray(int n, std::vector<int> &nums)
{
    // Write your code here.
    recurse(nums.size(),n-1,nums);
    return nums;
}

