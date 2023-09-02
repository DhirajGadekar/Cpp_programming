#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> v;
	
	v.push_back(5);
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	v.push_back(30);
	
	v[5] = 100; 
	for(int i = 0; i < v.size(); i++) {
		
		std::cout << v[i] << " "; 
	}
	std::cout << std::endl;
	return 0;
}
