#include<iostream>
#include<cmath>

bool checkArmstrong(int n){
	//Write your code here
	int temp = n;
	int num = 0;
	int rem = 0;
	std::string numberString = std::to_string(n);
	int power = numberString.length();
	while(temp>0){
		rem = temp % 10;
		num+= std::pow(rem,power);
		temp  = temp / 10;
	}
	if(num==n){
		return true;
	}
	else {
		return false;
	}
}
