#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> v = {10, 20, 30, 40, 50};
	std::cout << v.capacity() << std::endl;

	v.reserve(10);
	std::cout << v.capacity() << std::endl;
	return 0;
}
