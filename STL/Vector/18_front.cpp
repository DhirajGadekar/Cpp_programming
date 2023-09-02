#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> v = {10, 20, 30};
	std::cout << v.front() << std::endl;

	v.emplace(v.begin(), 100);
	std::cout << v.front() << std::endl;
	return 0;
}
