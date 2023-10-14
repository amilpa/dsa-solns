#include<iostream>
#include<vector>

void generateArray(int x,std::vector<int>& myArray)
{
  if(x<=0)
  {
    return;
  }
  myArray.push_back(x);
  generateArray(x-1,myArray);
}
std::vector<int> printNos(int x) {
    // Write Your Code Here
    std::vector<int> myArray;
    generateArray(x,myArray);
    return myArray;
}