#include<iostream>

struct player {
	int x = 10;
	int &y = x;
};

int main() {
	
	player obj;

	std::cout << obj.x << std::endl;
	std::cout << obj.y << std::endl;

	obj.y = 30;
	
	std::cout << obj.x << std::endl;
	std::cout << obj.y << std::endl;

	return 0;
}
