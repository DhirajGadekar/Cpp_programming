#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> v(10);

	for(int i = 0; i < v.size(); i++) {
		
		v.at(i) = i + 11;
	}

	for(int i = 0; i < v.size(); i++) {
		
		std::cout << v.at(i) << std::endl;
	}	
}
