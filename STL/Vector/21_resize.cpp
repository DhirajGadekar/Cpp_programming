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
	
	std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	
	printVector(v);

	v.resize(5);
	printVector(v);

	v.resize(7, 300);
	printVector(v);

	v.resize(10);
	printVector(v);
	return 0;
}
