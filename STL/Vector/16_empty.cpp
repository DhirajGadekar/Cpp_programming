#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> v;

	std::cout << v.empty() << std::endl;

	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	std::cout << v.empty() << std::endl;
	return 0;
}
