#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> v;
	
	v.push_back(5);

	std::cout << v.back() << std::endl;

	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	v.push_back(30);
	
	std::cout << v.back() << std::endl;

	return 0;
}
