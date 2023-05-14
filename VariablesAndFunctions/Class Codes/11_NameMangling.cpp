
#include<iostream>

int add(int x, int y) {
	
	return x+y;
}

int add(int x,int y,int z) {

	return x+y+z;
}

int main() {
	
	std::cout << add(10,20) << std::endl;	
	std::cout << add(10,20,30) << std::endl;	
	return 0;
}
