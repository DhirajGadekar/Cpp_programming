
#include<iostream>

int main() {
	
	int x = 10;
	int y = 20;

	std::cout<< x <<std::endl;
	std::cout<< y <<std::endl;

	const int *ptr = &x;

	std::cout<< *ptr <<std::endl;

	ptr = &y;
	
	std::cout<< *ptr <<std::endl;

	return 0;
}
