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
	
	std::vector<int> v = {10, 20, 30};

	v.emplace_back(100);
	v.emplace_back(200);
	
	printVector(v);		
	return 0;
}
