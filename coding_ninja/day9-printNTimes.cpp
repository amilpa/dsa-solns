#include<iostream>
#include<vector>
#include<string>

void generateArray(int x,std::vector<std::string>& myArray)
{
  if(x<=0)
  {
    return;
  }
  myArray.push_back("Coding Ninjas");
  generateArray(x-1,myArray);
}

std::vector<std::string> printNTimes(int n) {
	// Write your code here.
  std::vector<std::string> myArray;
  generateArray(n,myArray);
  return myArray;
}