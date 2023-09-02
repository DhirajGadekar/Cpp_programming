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
	
	std::vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
		
	std::cout << *(v.erase(v.begin())) << std::endl;

	printVector(v);

	std::cout << *(v.erase(v.begin() + 3, v.end() - 3)) << std::endl;
	printVector(v);
	return 0;
}
