#include<iostream>
#include<vector>

int main() {
	
	std::vector<int> obj;

	obj.push_back(10);
	obj.push_back(20);
	obj.push_back(30);
	obj.push_back(40);

	for(int i = 0; i < obj.size(); i++) {
		
		std::cout << obj[i] << std::endl;
	}
	return 0;
}
