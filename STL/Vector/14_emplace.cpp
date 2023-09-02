#include<iostream>
#include<vector>

void printVector(std::vector<int> v) {
	
	std::vector<int>::iterator itr;
	for(itr = v.begin(); itr != v.end(); itr++) {
		
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
}
int main() {
	
	std::vector<int> v = {10,20,30};

	std::vector<int>::iterator itr = v.emplace(v.begin()+2, 100);
	printVector(v);

	v.emplace(itr, 300);
	printVector(v);

	v.emplace(v.end(), 600);
	printVector(v);
	return 0;
}
