#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> vobj = {10, 20, 30, 40, 50};

	for(auto itr = vobj.crbegin(); itr != vobj.crend(); itr++) {
		
		std::cout << *itr << std::endl;
	}
	return 0;
}
