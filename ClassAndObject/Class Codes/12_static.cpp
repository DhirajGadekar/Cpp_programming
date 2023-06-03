#include<iostream>

int fun() {
	
	static int x = 10;
	return ++x;
}

int main() {

	std::cout << fun() << std::endl;
	std::cout << fun() << std::endl;
	std::cout << fun() << std::endl;
	return 0;
}
