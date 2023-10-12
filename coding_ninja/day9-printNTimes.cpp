#include<iostream>
#include<vector>

void generateArray(int x,vector<string>& myArray)
{
  if(x<=0)
  {
    return;
  }
  myArray.push_back("Coding Ninjas");
  generateArray(x-1,myArray);
}

vector<string> printNTimes(int n) {
	// Write your code here.
  std::vector<string> myArray;
  generateArray(n,myArray);
  return myArray;
}