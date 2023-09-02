#include<iostream>
#include<vector>

int main() {
	
	std::vector<std::string> obj = {"Shashi", "Kanha", "Ashish", "Rahul"};

	for(int i = 0; i < obj.size(); i++) {
		
		std::cout << obj[i] << std::endl;
	}
	return 0;
}
