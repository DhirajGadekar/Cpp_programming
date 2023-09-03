#include<iostream>
#include<list>

std::list<int>::iterator operator+(std::list<int>::iterator lstItr, int index) {
	
	while(index) {
		
		lstItr++;
		index--;
	}
	return lstItr;
}

int main() {
	
	std::list<int> lst = {10,20,30,40};

	std::cout << *(lst.begin() + 2) << std::endl;

	return 0;
}
