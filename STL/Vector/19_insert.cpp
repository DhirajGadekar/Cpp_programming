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
	
	std::vector<int> v;
	
	int arr[] = {10, 20, 30};

	v.insert(v.begin(), arr, arr+3);
	printVector(v);

	v.insert(v.end(), 400);
	v.insert(v.begin(), 100);
	printVector(v);
	return 0;
}
