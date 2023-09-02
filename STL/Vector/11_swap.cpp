#include<iostream>
#include<vector>

void printVector(std::vector<int> v) {

	std::vector<int>::iterator itr;
	for(itr = v.begin(); itr != v.end(); itr++) {

		std::cout << *itr << std::endl;
	}
}
int main() {
	
	std::vector<int> first(3,200);
	std::vector<int> second(5,300);

	std::cout << "Frist Vector : " << std::endl; 
	printVector(first);
	
	std::cout << "Second Vector : " << std::endl; 
	printVector(second);

	first.swap(second);
	
	std::cout << "After Swap Frist Vector : " << std::endl; 
	printVector(first);
	
	std::cout << "Atter Swap Second Vector : " << std::endl; 
	printVector(second);
	return 0;
}
