#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> v(10);

	std::cout << v.capacity() << std::endl;
	v.shrink_to_fit();
	
	v.resize(5);	
	std::cout << v.capacity() << std::endl;
	
	v.shrink_to_fit();
	std::cout << v.capacity() << std::endl;
	return 0;
}
