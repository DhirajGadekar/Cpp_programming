#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> v;
	
	std::cout << v.capacity() << std::endl;
	
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);

	std::cout << v.capacity() << std::endl;  
	
	return 0;
}
