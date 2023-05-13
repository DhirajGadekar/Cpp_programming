//Constant Variable :

#include<iostream>

int main() {

	/*
	const int x = 10;
	x = 30;             Error : Assignment readonly variable
	*/

	int y;
	std::cout<< "Enter Number" <<std::endl;
	std::cin>> y;

	const int x = y;
	std::cout<< x << std::endl;
	return 0;
}

