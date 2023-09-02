#include<iostream>
#include<vector>

void printVector(std::vector<int> v) {
	
	std::vector<int>::iterator itr;
	for(itr = v.begin(); itr != v.end(); itr++) {
		
		std::cout << *itr << std::endl;
	}
}

int main() {
	
	std::vector<int> first;
	std::vector<int> second;
	std::vector<int> third;
	
	first.assign(7, 100);
	std::cout << "First vector : " << std::endl;
	printVector(first);

	std::vector<int>::iterator itr;
	itr = first.begin() + 1;
	
	std::cout << *itr << std::endl;
	second.assign(itr, first.end() - 1);
	
	std::cout << "Second vector : " << std::endl;
	printVector(second);

	int arr[] = {1,2,3};
	third.assign(arr, arr + 2);
	std::cout << "Third Vector" << std::endl;
	printVector(third);

	std::cout << "Size of First : " << first.size() << std::endl;
	std::cout << "Size of Second : " << second.size() << std::endl;
	std::cout << "Size of Third : " << third.size() << std::endl;
	return 0;
}
