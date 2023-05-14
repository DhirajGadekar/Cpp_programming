
#include<iostream>

int& fun(int &y) {
	
	y = 30;
	std::cout << y << std::endl;

	return y;
}

int main() {
	
	int x = 10;
	
	std::cout << x << std::endl;
	
	int ret = fun(x);
	std::cout << ret << std::endl;
	
	x = 20;
	std::cout << x << std::endl;
	return 0;
}
