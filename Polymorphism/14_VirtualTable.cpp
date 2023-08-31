#include<iostream>

void add(int x , int y) {
	
	std::cout << (x + y) << std::endl;
}

void division(int x , int y) {
	
	std::cout << (x / y) << std::endl;
}

void mul(int x , int y) {
	
	std::cout << (x * y) << std::endl;
}

int main() {
	
	void (*funArray[3])(int , int) = {add, division, mul};

	for(int i = 0; i < 3; i++) {
		
		funArray[i](10, 20);
	}
	return 0;
}
