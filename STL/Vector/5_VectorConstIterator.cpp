#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> vobj = {10, 20, 30, 40, 50};

	std::vector<int>::const_iterator itr;

	for(itr = vobj.cbegin(); itr != vobj.cend(); itr++) {
		
		std::cout << *itr << std::endl;
	}
	return 0;
}
