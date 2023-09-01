#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> vobj = {10, 20, 30, 40, 50};

	std::vector<int>::iterator itr;

	for(auto itr = vobj.rbegin(); itr < vobj.rend(); itr++) {
		
		std::cout << *itr << std::endl;
	}
	return 0;
}
