#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	
	std::cout << *(v.data()) << std::endl;  
	int *ptr = v.data();

	*ptr = 50;
	std::cout << *(v.data()) << std::endl;  

	return 0;
}
