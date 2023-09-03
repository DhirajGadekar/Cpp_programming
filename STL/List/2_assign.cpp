#include<iostream>
#include<list>

int main() {
	
	std::list<int> first;
	std::list<int> second;

	first.assign(7, 100);
	
	int num[] = {1,2,3};
	second.assign(num, num + 3);

	std::cout << first.size() << std::endl;
	std::cout << second.size() << std::endl;
	return 0;
}
